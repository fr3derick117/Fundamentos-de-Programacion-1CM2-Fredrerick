/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 9:07 am
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    float masa;
    float volumen;
    float densidad;
    float *s1;
    float *s2;
    int a;
    float p;
    
    
    printf("Cual es la masa de tu objeto?Si no sabes cuanto es la masa de tu objeto presiona 1. Si la sabes presiona 2\n");
    scanf("%d",&a);
    if(a==1)
    {printf("Dime cuanto pesa tu objeto");
    scanf("%f",&p);}
    else if(a==2)
    {printf("Cual es la masa de tu objeto?");
    scanf("%f",&masa);}
    masa=p/9.8;
    s1=&masa;
    printf("Cual es el volumen de tu objeto?");
    scanf("%f",&volumen);
    s2=&volumen;
    densidad=*s1/ *s2;
    printf("%f",densidad);
    if (densidad>1000)
    {printf("Tu objeto se hundirá en el agua\n");}
    else if(densidad<1000)
    {printf("Tu objeto flotará en el agua\n");}
    
    
   
 return(0);
}
