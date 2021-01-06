/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 5:07 am
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float formulageneral(float,float,float);
float axel(float,float,float);


int main(int argc, char** argv) {
    float a,b,c,*s,*s2,*s3;

 //Formula General Con Apuntadores
    printf("Introduce los 3 datos para la formula genral\n");
    printf("Dato 1=");
    scanf("%f",&a);
    s=&a;
    s4=&a;
    printf("Dato 2=");
    scanf("%f",&b);
    s2=&b;
    s5=&b;
    printf("Dato 3="); 
    scanf("%f",&c);
    s3=&c;
    s6=&c;

  
    printf("El resultado con base a la formula general es %f\n",formulageneral(*s,*s2,*s3));


    printf("El segundo resultado con base a la formula general es %f\n",axel(*s,*s2,*s3));
 
 return(0);
}
float formulageneral(float a,float b,float c){
    float formulageneral=(-b + sqrt ((b * b) - 4 * a * c)) / (2 * a);
    return formulageneral;
}
float axel(float a,float b, float c){
    float axel=(-b - sqrt ((b * b) - 4 * a * c)) / (2 * a);
    return axel;
}
