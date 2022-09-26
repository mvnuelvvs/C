#include <stdio.h>
int main()
{

float edad, peso;
double estatura;

printf("Ingresa tu edad: \n");
scanf("%f",&edad);

printf("Ingresa tu estatura: \n");
scanf("%lf",&estatura);

printf("Ingresa tu peso: \n");
scanf("%f",&peso);


    if (edad<=18 && estatura>=1.8 && peso<=80 )

    printf("Eres apto para jugar basketball \n");

    else 

    printf("No eres apto para jugar basketball \n");


return 0;
}