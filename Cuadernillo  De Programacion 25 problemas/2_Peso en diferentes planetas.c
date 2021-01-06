/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: PC AXEL
 *
 * Created on 26 de diciembre de 2020, 03:00 PM
 */
//Codigo para saber el peso de una persona en diferetes planetas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float peso;
    float masa;
    float mercurio (float);
    float venus (float);
    float tierra (float);
    float marte (float);
    float jupiter (float);
    float saturno (float);
    float urano (float);
    float neptuno (float);
    int opcion;
    
    printf("Cuanto pesas actualmente en kilogramos\n");
    scanf("%f",&peso);
    
   
    masa=peso/9.8;
    printf("Tu masa es %f\n\n",masa);
  
   
    do{
        printf("¿En que planeta deseas saber cuanto pesarias?\n");
        printf("Selecciona un numero para la opcion \n");
        printf("1.-Mercuiro\n");
        printf("2.-Venus\n");
        printf("3.-Tierra\n");
        printf("4.-Marte\n");
        printf("5.-Jupiter\n");
        printf("6.-Saturno\n");
        printf("7.-Urano\n");
        printf("8.-Neptuno\n");
        printf("9.-Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                masa=peso/9.8;
                float rex=mercurio(masa);
  

                printf("Seleccionaste mercurio tu peso es %f",mercurio);
                break;
            case 2:
                printf("Seleccionaste Venus tu peso es %f",venus);
                break;
            case 3:
                printf("Seleccionaste Tierra tu peso es %f",tierra);
                break;
            case 4: 
                printf("Sleccionaste Marte tu peso es %f",marte);
                break;
            case 5:
                printf("Seleccioanste Jupiter %f ",jupiter);
                break;
            case 6:
                printf("Seleccionaste Saturno %f",saturno);
                break;
            case 7:
                printf ("Seleccionaste Urano %f",urano);
                break;
            case 8:
                printf("Seleccionaste Neptuno %f",neptuno);
                break;
            case 9:
                break;
        }
        
    }
    while (opcion !=9); 

        
    
    
    return (EXIT_SUCCESS);
}
//FORMULAS PARA CADA PLANETA
float mercurio(float masa){
    
        float mercurio = masa*3.70;
        return mercurio;
}
float venus (float masa){
    float venus=masa*8.87;
    return venus;
}
float tierra (float masa){
    float tierra=masa*9.8;
    return tierra;
  
}
float marte (float masa){
    float marte=masa*3.71;
    return marte;
}
float jupiter(float masa){
    float jupiter=masa*23.12;
    return jupiter;
    
}
float saturno (float masa){
    float saturno=masa*8.96;
    return saturno;
}
float urano (float masa){
    float urano=masa*8.68;
    return urano;
}
float neptuno(float masa){
    float neptuno=masa*11.0;
    return neptuno;
   
}
