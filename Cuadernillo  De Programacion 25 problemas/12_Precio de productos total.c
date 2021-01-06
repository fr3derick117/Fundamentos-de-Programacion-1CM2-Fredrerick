/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 1 de  enero de 2020, 11:11 am
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x;
    float suma;                 
    float promedio;
    
    
    printf("Cuantas Cuantos productos deseas sumar?");
    scanf("%d",&x);
    
    int arreglo[x];
    for(int i=0;i<x;i++){
        printf("Dame el valor del  producto [%d]=",i);
        scanf("%d",&arreglo[i]);
        suma+=arreglo[i];
       
        printf("\n");
        
    }
    printf("EL la suma total  es: %f",suma);
    
    return (EXIT_SUCCESS);
}
