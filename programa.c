#include <stdio.h>
int main()
    {
        

        float num1,num2,total,final,final_2;

        printf("Insira o valor do produto:");
        scanf("%f",&num1);

        printf("Insira a porcentagem de desconto do produto: ");
        scanf("%f", &num2);

        total = num2 / 100 ; 
        final= total * num1;
        final_2= num1 - final ;


        printf("%f",final_2);



       

      
        


        

     
    }