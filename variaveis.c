#include <stdio.h>
int main()
    {
        char teste1 = 'g';// aspas simples para declarar apenas um caracter
        teste1 = 'b'; // mudando o valor da variavel

        int num1,num2 ,escolha;

        printf("Insira um numero:");
        scanf("%d",&num1);

        printf("Insira outro numero: ");
        scanf("%d", &num2);

        printf("Insira a operação que vc quer fazer com esses numeros :");
        scanf("%d", &escolha);


        

        printf("numero: %d",num1);// %d para escrever um numero inteiro
        printf("numero: %f",num33);// %f para escrever um numero decimal
        printf("numero: %.2f",num33);// %.2f para escrever um numero decimal e colocar a quantidade de casas decimais
        printf("numero: %c",teste1);// %c para escrever um caracter
    }