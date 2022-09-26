#include <stdio.h>

int main()
{

float num1, num2;

printf("Ingrese un numero: \n");
scanf("%f",&num1);

printf("Ingrese un segundo numero: \n");
scanf("%f",&num2);

    if (num1==num2)

    printf("%.2f",num1*num2);

    else if (num1>num2)
    {
    printf("%.2f", num1+num2);
    }

    else if (num1<num2)
    {
    printf("%f", num1-num2);
    }

return 0;
}