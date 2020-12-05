/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Axel Frederick Félix Jiménez
 *
 * Created on 30 de noviembre de 2020, 11:25 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//en este ejercicio corregí unos errores de la anterior actividad


/*
 * 
 */
void ingresar();
void mostrar();
float caf(float);
float cak(float);
float fac(float);
float fak(float);
float kac(float);
float kaf(float);
int main(void) {   
    int opcion;
    float x;
    do {
     
        printf("---------Menu de Conversiones de Temperatura---------");
        printf("\n1. Celsius a Farenheit");
        printf("\n2. Celsius a Kelivin");
        printf("\n3. Farenheit a Celsius");
        printf("\n4. Farenheit a Kelvin");
        printf("\n5. Kelvin a Celsius");
        printf("\n6. Kelvin a Farenheit");
        printf("\n7. SALIR\n");
        printf("Introduzca una opcion del 1-7\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                printf("\e[2J");
           printf("Seleccionaste Celsius a Faranheit\n");
           printf("Dame el valor de Celsius\n");
           scanf("%f",&x);
           float res = caf(x);
           printf("La conversion de Celsius a Farenheit es =%f\n",res);
           break;
            case 2:
                printf("\e[2J");
            printf("Seleccionaste Celsius a Kelvin\n");
            printf("Dame el valor de Celsius\n");
            scanf("%f",&x);
            float ros=cak(x);
            printf("La conversion de Celsius a Kelvin es=%f\n",ros);
            break;
            case 3:
              printf("\e[2J");
            printf("Seleccionaste Farenheit a Celsius\n");
            printf("Dame la temperautra en Farenheit\n");
            scanf("%f",&x);
            float rex=fac(x);
            printf("La conversion de Farenheit a Celsius es=%f\n",rex);       
            break;
            case 4:
               printf("\e[2J");
            printf("Seleccionaste Farenheit a Kelvin\n");
            printf("Dame la temperatura en farenheit\n");
            scanf("%f",&x);
            float rix=fak(x);
            printf("La conversion de Farenheit a Kelvin es=%f\n",rix);
            break;
            case 5:
            printf("\e[2J");
            printf("Seleccionaste Kelvin a Celsius\n");
            printf("Dame la temperatura en Kelvin\n");
            scanf("%f",&x);
            float rax= kac(x);
            printf("La conversion de Kelvin a Celsius es=%f\n",rax);
                
            break;
            case 6:
            printf("\e[2J");
            printf("Seleccionaste Kelvin a Farenheit\n");
            printf("Dame la temperatura en Kelvin\n");
            scanf("%f",&x);
            float rez=kaf(x);
            printf("La conversion de Kelvin a  es=%f\n",rez);
                
        break;
            case 7:
        break;
        
        }
        
        
    
    }
    while(opcion !=7);
    
  return (EXIT_SUCCESS);
}
//Conversion de Temperaturas
float caf(float x){
    float caf = x*1.8+32;
    return caf;
    
}
float cak(float x){
    float cak = x + 273.15;
    return cak;
    
}
float fac(float x){
    float fac =(x-32)*5/9;
    return fac;
    
}
float fak(float x){
    float fak =(x-32)*5/9+273.15;
    return fak;
}
float kac(float x){
    float kac = x-273.15;
    return kac;
}
float kaf(float x){
    float kaf = (x-273.15)*9/5+32;
    return kaf;
}
