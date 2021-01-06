/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 10:07 am
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int a;
    int *pa;
    printf("Seleccione que acorde quiere saber\n"
            "1.-Do\n"
            "2.-Re\n"
            "3.-Mi\n"
            "4.-Fa\n"
            "5.-Sol\n"
            "6.-La\n"
            "7.-Si\n");
    scanf("%d",&a);
    pa=&a;
    if(*pa==6)
    { printf( "_ _ _ _ _ _\n"    
          "|_|_|_|_|_|\n"
          "|_|_o_o_o_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    else if(*pa==1)
    { printf( "_ _ _ _ _ _\n"    
          "|_|_|_|_o_|\n"
          "|_|_o_|_|_|\n"
          "|_o_|_|_|_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    else if(*pa==2)
    { printf( "_ _ _ _ _ _\n"    
          "|_|_|_|_|_|\n"
          "|_|_|_o_|_o\n"
          "|_|_|_|_o_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    else if(*pa==3)
    { printf( "_ _ _ _ _ _\n"    
          "|_|_|_o_|_|\n"
          "|_o_o_|_|_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    else if(*pa==4)
    { printf( "_ _ _ _ _ _\n"    
          "o_o_o_o_o_o\n"
          "|_|_|_o_|_|\n"
          "|_o_o_|_|_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    else if(*pa==5)
    { printf( "_ _ _ _ _ _\n"    
          "|_|_|_|_|_|\n"
          "|_o_|_|_|_|\n"
          "o_|_|_|_|_o\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    else if(*pa==7)
    { printf( "_ _ _ _ _ _\n"    
          "|_|_o_|_|_|\n"
          "|_o_|_o_|_o\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n"
          "|_|_|_|_|_|\n");}
    
   
    
   
 return(0);
}
