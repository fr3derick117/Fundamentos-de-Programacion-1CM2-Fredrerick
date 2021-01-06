/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 05:38 PM
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int mes;
    int dia;
    printf("¿Cual es el numero de tu mes?");
    scanf("%d",&mes);
    printf("¿En que dia naciste?");
    scanf("%d",&dia);
    {
    if(mes==1 && dia>=21)
    {printf("Tu signo zodiacal es Acuaario\n");}
    else if (mes==1 && dia<21)
    {printf("Tu signo zodiacal es Capricornio\n");}
    else if(mes==2 && dia<=19)
    {printf("Tu signo zodiacal es Acuario\n");}
    else if (mes==2 && dia>19)
    {printf("Tu signo zodiacal es Piscis\n");}
    else if(mes==3 && dia<=20)
    {printf("Tu singo zodiacl es Piscis\n");}
    else if (mes==3 && dia>20)
    {printf("Tu signo zodiacal es Aries\n");}
    else if (mes==4 && dia<=20)
    {printf("Tu signo zodicacal es Aries\n");}
    else if(mes==4 && dia>20)
    {printf("Tu signo zodiacal es Tauro\n");}
    else if (mes==5 && dia<=21)
    {printf("Tu signo zodical es Tauro\n");}
    else if(mes==5 && dia>21)
    {printf("Tu signo zodical es Geminis\n");}
    else if(mes==6 && dia<=21)
    {printf("Tu signo zodiacal es Geminis\n");}
    else if(mes==6 && dia>21)
    {printf("Tu signo zodiacal es Cancer\n");}
    else if(mes==7 && dia<=22)
    {printf("Tu signo zodiacal es Cancer\n");}
    else if(mes==7 && dia>22)
    {printf("Tu signo zodiacal es Leo\n");}
    else if(mes==8 && dia<=24)
    {printf("Tu signo zodiacal es Leo\n");}
    else if(mes==8 && dia>24)
    {printf("Tu signo zodiacal es Virgo\n");}
    else if(mes==9 && dia<=23)
    {printf("Tu signo zodiacal es Virgo\n");}
    else if(mes==9 && dia>23)
    {printf("Tu signo zodiacal es Libra\n");}
    else if(mes==10 && dia<=23)
    {printf("Tu signo zodiacal es Libra\n");}
    else if(mes==10 && dia>23)
    {printf("Tu signo zodiacal es Escorpion\n");}
    else if(mes==11 && dia<=22)
    {printf("Tu signo zodiacal es Escorpion\n");}
    else if(mes==11 && dia>22)
    {printf("Tu signo zodiacal es Sagitario\n");}
    else if(mes==12 && dia<=21)
    {printf("Tu signo zodiacal es Sagitario\n");}
    else if(mes==12 && dia>21)
    {printf("Tu signo zodiacal es Capricornio");}
    }

    return (0);
}
