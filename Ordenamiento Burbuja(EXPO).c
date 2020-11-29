/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 23 de noviembre de 2020, 08:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int x, jam;
    
    printf("Cuantas posiciones quieres en tu arreglo?=");
    
    scanf("%d", &x);
    
    int arreglo[x];
    
    for(int  i=0;i<x;i++){
             printf("Dame un valor para la posición[%d]",i);
             scanf("%d", &arreglo[i]);
    }
    
    for (int i=1;i<x;i++){
             for (int j=0;j<x-1;j++){
                       if (arreglo[j] > arreglo[j+1]){
                               jam = arreglo[j];    
                               arreglo[j]=arreglo[j+1];  
                               arreglo[j+1]=jam;    
                        }
             }
    }
    
    printf("\nLos valores ordenados de lista son: ");
    for(int i=0;i<x;i++){
        printf("%3d",arreglo[i]);
    }

    return (0);
}
