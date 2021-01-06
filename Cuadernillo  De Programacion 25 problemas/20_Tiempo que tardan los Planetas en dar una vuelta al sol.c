/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Axel Frederick Félix Jiménez
 *
 * Created on 01 de enero de 2020, 04:21 PM
 */
//Codigo para saber el peso de una persona en diferetes planetas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
 
    float mercurio (float);
    float venus (float);
    float tierra (float);
    float marte (float);
    float jupiter (float);
    float saturno (float);
    float urano (float);
    float neptuno (float);
    int opcion;
   do{
        printf("¿En que planeta deseas saber cuanto tiempo tarda en darle la vuelta al sol\n");
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
              
                 printf("88 dias\n");
         
                break;
            case 2:
                printf("225 dias\n");

                break;
            case 3:
                printf("365 dias\n");
               
                break;
            case 4: 
                printf("687 dias\n");
               
                break;
            case 5:
                printf("11.8 años\n");
             
                break;
            case 6:
                printf("29.5 años\n");
            
                break;
            case 7:
                printf("84 años\n");

                break;
            case 8:
                printf("165 años\n");
        
                break;
            case 9:
                break;
        }
        
    }
    while (opcion !=9); 

        
    
    
    return (EXIT_SUCCESS);

}
