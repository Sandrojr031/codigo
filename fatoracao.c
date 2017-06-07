#include<stdio.h>
#include<math.h>

int main (void)
{
        int i, n;
        float fat;
        printf("Digite um numero : \n ");
        scanf("%d", &n);
        fat = 1;
        for(i=1; i<=n; i++){
            fat = fat * i;
            }
        printf("fatorial calculado é  %f :", fat);
return 0;
}
