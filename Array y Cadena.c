/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 11 de enero de 2021, 10:54 am
 */

#include <stdio.h>
 
int main () {

//Array de 2 dimenesiones
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 

   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
   
 //Cadena de Caracteres  
   char cadena[]="Axel";//En esta parte el programa almacena automaticamente el numero de bytes necesarios para la cadena.
   char A[6]="Axel";//En este yo especifico el tamaño de la cadena.
   return 0;
}
