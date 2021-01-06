/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 01 de enero de 2021, 08:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int x, jam;
    printf("Cuantas calificaciones son?=");
    
    scanf("%d", &x);
    
    int arreglo[x];
   
    
    for(int i=0;i<x;i++){
        printf("Dame la califciacion[%d]=",i);
        scanf("%d", &arreglo[i]);
        
    }
    
    for (int i=0;i<x;i++){
        for (int j=0;j<i;j++){
            if (arreglo[i] < arreglo[j]){
                jam = arreglo[j];	
                arreglo[j]=arreglo[i];  
                arreglo[i]=jam;	
            }
        }
    }
    
    printf("\nLas calificaciones ordenadas son: ");
    for(int i=0;i<x;i++){
        printf("%3d",arreglo[i]);
    }
    
    
    

    return (0);
}
