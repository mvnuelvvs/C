//
//  main.c
//  Operadores Condicionales
//
//  Created by Manuel on 10/08/22.
//  Copyright © 2022 Manuel. All rights reserved.
//
/*
 
 Toma de decisiones                         Operadores de Relacion
 ==  x es igual que y                       >   x es mayor que y
 !=  x es diferente que y                   <   x es menor que y
 >=  x es mayor o igual que y
 <=  x es menor o igual que y
 */

#include <stdio.h>
int main()

{
    int edad;  //variable uno
    printf("ingresa tu edad\n");  //mensaje que pide ingresar tu edad
    scanf("%d",&edad);  //%d por que debe de ser un numero entero y & para elegir en que variable guardar
    
    if(edad >=18) //para preguntar si la edad es mayor o igual a 18
    {
        printf("eres mayor de edad\n");
    }
    else if (edad==17)
    {
        printf("sorry casi eres mayor de edad\n");
    }
    else
    {
        printf("eres menor de edad\n");
    }
    return 0;
}
