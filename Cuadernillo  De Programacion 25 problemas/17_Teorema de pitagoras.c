/* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 01 de enero de 2021, 8:49 PM
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float hipotenusa(float, float);
float catetouno(float, float);

int main(int argc, char** argv) {
    float c1;
    float c2;
    float h;
    int opcion;
    printf("Selecciona la siguientes opciones\n");
    printf("1.-Sacar un cateto\n");
    printf("2.-Sacar la hipotenusa\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            printf("Dame el valor del cateto\n");
            scanf("%f",&c2);
            printf("Dame el valor de la hipotenusa\n");
            scanf("%f",&h);
            printf("El valor del cateto es=%f",sqrt(catetouno(c2,h)));
            break;
            case 2:
            printf("Dame el valor del cateto 1\n");
            scanf("%f",&c1);
            printf("Dame el valor del cateto 2\n");
            scanf("%f",&c2);
            printf("El valor de la hipotenusa es=%f",sqrt(hipotenusa(c1,c2)));
    }
   
    
   

    return (0);
}
float hipotenusa(float c1 ,float c2){
    float hipotenusa=((c1*c1))+((c2*c2));
    return hipotenusa;
}
float catetouno(float c2, float h){
    float catetouno=(h*h-c2*c2);
    return catetouno;
}
