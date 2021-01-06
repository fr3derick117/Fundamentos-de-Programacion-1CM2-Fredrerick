/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: PC AXEL
 *
 * Created on 26 de diciembre de 2020, 03:00 PM
 */
//Codigo para saber si tienes probabilidades de tener covid-19
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b,c,d,e,f,g,h,i,j;
    printf("-------Autotest Coronavirus-------\n");
    printf("-------A continuación responda a las preguntas que se irán mostrando-------\n");
    printf("Responda con los siguientes numeros los cuales si=1 y no=2 \n");
    
    printf("¿Tuvo usted algún contacto menos de 2 metrso durante un mínimo de 15"
            "   minutos o convive/cuida a  alguna persona con COVID-19 sin medidas"
            "de proteccion?\n");
    scanf("%d",&a);
    
    printf("¿Presenta usted algún síntoma?");
    
    scanf("%d",&b);
    if(b==2)
    {printf("Usted no tiene  posibilidades de contraer el virus covid-19");}
          
    else {
        
        printf("¿Hace más de 14 días que comenzaron los síntomas?");
        scanf("%d",&c);
        printf("Se le recomienda hacer la prueba de covid-19 en el laboratorio mas cercano");
    }
    
    
    return (EXIT_SUCCESS);
}
