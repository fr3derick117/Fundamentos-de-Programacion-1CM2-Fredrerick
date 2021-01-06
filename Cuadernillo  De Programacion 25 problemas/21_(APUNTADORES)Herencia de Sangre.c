/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 11:42 am
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a,b,*s,*s2;
 //Probabilidad de herencia de sangre
    printf("Tipos de sangre; A=1 B=2 0=3\n");
    printf("Que tipo de sangre eres tu?\n");
    s=&a;
    scanf("%d",&a);
    printf("Que tipo de snangre es tu pareja?\n");
    scanf("%d",&b);
    s2=&b;
    if(*s==1 && *s2==2)
    {printf("Tu hijo tiene mas posibilidades de tener el tipo de sangre AB ya que A=B=AB\n");}
    else if(*s==2 && *s2==1)
    {printf("Tu hijo tiene mas posibilidades de tener el tipo de sangre AB ya que A=B=AB\n");}
    else if(*s==1 && *s2==3)
    {printf("Tu hijo tiene mas posibilidades de tener el tipo de sangre A ya que A>O por lo tanto el tipo de sangre A predomina mas que O\n");}
    else if(*s==3 && *s2==1)
    {printf("Tu hijo tiene mas probabilidades de tener el tipo de sangre A ya que A>O por lo tanto el tipo de sangre A predomina mas que O\n");}
    else if(*s==2 && *s2==3)
    {printf("Tu hijo tiene mas probabilidades de tener el tipo de sangre B ya que B>O por lo tanto el tipo de sangre B predomina mas que O\n");}
    else if(*s==3 && *s2==2)
    {printf("Tu hijo tiene mas probabilidades de tener el tipo de sangre B ya que B>O por lo tanto el tipo de sangre B predomina mas que O\n");}
    else if(*s==1 && *s2==1)
    {printf("Tu hijo tiene mas probabilidades de tener el tipo de sangre AA ya que la pareja comparte el mismo tipo de sangre\n");}
    else if(*s==2 && *s2==2)
    {printf("Tu hijo tiene mas probabilidades de tener el tipo de sangre BB ya que la pareja comparte el mismo tipo de sangre\n");}
    else if(*s=3 && *s2==3)
    {printf("Tu hijo tiene mas probabilidades de tener el tipo de sangre OO ya que la pareja comparte el miosmo tipo de sangre\n");}
    return (0);
}
