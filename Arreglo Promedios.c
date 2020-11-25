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
    int x;
    float suma;                 
    float promedio;
    
    
    printf("Cuantas posiciones quieres en tu arreglo?");
    scanf("%d",&x);
    
    int arreglo[x];
    for(int i=0;i<x;i++){
        printf("Dame un valor para la posición [%d]=",i);
        scanf("%d",&arreglo[i]);
        suma+=arreglo[i];
        promedio=suma/x;
        printf("\n");
        
    }
    printf("EL promedio de todas las posiciones es: %f",promedio);
    
    return (EXIT_SUCCESS);
}
