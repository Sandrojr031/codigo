#include <stdio.h>  //biblioteca padrão de entrada e saída

int main()  //função principal do programa...
{
    int x, y, z;    //variaveis do tipo inteira

    scanf("%d %d %d" , &x, &y, &z); //entrada de dados de entrada

        if (x>y && x>z)    //condição (se)
        {
            printf("%d",x); //imprime a mensagem na tela

        }
            else if( y>z && y>z )   //parecido com o "if" mas executa instruções diferentes...
        {

            printf("%d",y); //imprime a mensagem na tela

        }
            else    //intruções que permitem a execução condicional de outros programas
        {
            printf("%d",z); //imprime a mensagem na tela
        }


return 0;   //diz que chegou ao fim do programa sem nenhum erro
}
