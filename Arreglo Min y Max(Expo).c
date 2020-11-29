#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x;
 
    int  maximo;
    int  minimo;
 
    
    
    printf("Cuantas posiciones quieres en tu arreglo?");
    scanf("%d",&x);
    
    int arreglo[x];
 
    
    for(int i=0;i<x;i++){
             printf("Dame un valor para la posicion[%d]=",i);
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
        
    
    printf("EL maximo valor de todos los arreglos es: %d\n",maximo);
    printf("El minimo valor del arreglo es: %d",minimo);
    
    return (EXIT_SUCCESS);
