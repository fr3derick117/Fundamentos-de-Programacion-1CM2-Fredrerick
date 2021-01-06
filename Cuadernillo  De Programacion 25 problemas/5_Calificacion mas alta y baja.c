/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 29 de diciembre de 2020, 07:50 PM
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x;
 
    int  maximo;
    int  minimo;
 
    
    
    printf("Cuantas Materias son?");
    scanf("%d",&x);
    
    int arreglo[x];
 
    
    for(int i=0;i<x;i++){
             printf("Dame el promedio del estudiante=",i);
             scanf("%d",&arreglo[i]);
    }
    minimo=arreglo[0];
    for(int i=0;i<x;i++){
             if(arreglo[i]>maximo){
                       maximo=arreglo[i];
         
             }
            if(minimo>arreglo[i]){
                     minimo=arreglo[i];
             }
        
    }
       
        printf("\n");
        
    
    printf("El promedio más alto: %d\n",maximo);
    printf("El promedio más bajo %d",minimo);
    
    return (EXIT_SUCCESS);
}
