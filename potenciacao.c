#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,numero,expo,resultado=1;
    scanf("%d %d", &numero, &expo);

    for(i=0; i<expo; i++) // aqui tinha um virgula, nao deixa que o bloco que vem apos nao fizesse parte do loop. i tem que variar expo vezes, do jeito que estava antes esta variando expo+1
    {
        resultado*=numero;  //logica de multiplicar
    }

    printf("%d", resultado);

}
