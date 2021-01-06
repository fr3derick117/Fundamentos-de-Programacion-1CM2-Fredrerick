/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 29 de diciembre de 2020, 05:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int x;
float H=1.0079;
float He=4.0026;
float Li=6.941;
float Be=9.0122;
float B=10.811;
float C=12.0107;
float N=14.0067;
float O=15.9994;
float F=18.9984;
float Ne=20.1797;
int opcion;
do{
  
    printf("Informacion sobre los primeros 10 elementos de la tabla periodica\n");
    printf("Seleccione un numero del elemento que usted quiere saber\n");
    printf("***MASA***Num.Protones y Electrones***Neutrones***\n");
    printf("1.-HIDROGENO\n");
    printf("2.-HELIO\n");
    printf("3.-LITIO\n");
    printf("4.-BERILIO\n");
    printf("5.-BORO\n");
    printf("6.-CARBONO\n");
    printf("7.-NITROGENO\n");
    printf("8.-OXIGENO\n");
    printf("9,.FLUOR\n");
    printf("10.-NEON\n");
    printf("11.-SALIR\n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
        printf("***HIDROGENO***\n");
        printf("Atomos=1\n");
        printf("ELECTRONES Y PROTONES=1\n");
        printf("Masa atomica=%f\n",H);
        printf("El numero de neutrones es %f\n",H-1);
        break;
        case 2:
            printf("***HELIO***\n");
            printf("Atomos=2\n");
            printf("ELCTRONES Y PROTONES=2\n");
            printf("Masa atomica=%f\n",He);
            printf("El numero de nuetrones es %f\n",He-2);
         break;
        case 3:
            printf("***LITIO***\n");
            printf("Atomos=3\n");
            printf("ELECTRONES Y PROTONES=3\n");
            printf("Masa atomica=%f\n",Li);
            printf("El numero de nuetrones es %f\n",Li-3);
            break;
        case 4:
            printf("***BERILIO***\n");
            printf("Atomos=4\n");
            printf("ELECTRONES Y PROTONES=4\n");
            printf("Masa atomica=%f\n",Be);
            printf("El numero de neutrones es %f\n",Be-4);
            break;
        case 5:
            printf("***BORO***\n");
            printf("Atomos=5\n");
            printf("ELECTRONES Y PROTONES=5\n");
            printf("Masa atomica=%f\n",B);
            printf("El numero de nuetrones es %f\n",B-5);
            break;
        case 6:
            printf("***CARBONO***");
            printf("Atomos=6\n");
            printf("ELECTRONES Y PROTONES=6\n");
            printf("Masa atomica=%f\n",C);
            printf("El numero de neutrones es %f\n",C-6);
            break;
        case 7:
            printf("***NITROGENO***");
            printf("Atomos=7\n");
            printf("ELECTRONES Y PROTONES=7\n");
            printf("Masa atomica=%f\n",N);
            printf("El numero de neutrones es=%f\n",N-7);
            break;
        case 8:
            printf("***OXIGENO***");
            printf("Atomos=8\n");
            printf("ELECTRONES Y PROTONES=8\n");
            printf("Masa atomica=%f\n",O);
            printf("El numero de neutrones es=%f\n",O-7);
            break;
        case 9:
            printf("***FLUOR***");
            printf("Atomos=9\n");
            printf("ELECTRONES Y PROTONES=9\n");
            printf("Masa atomica=%f\n",F);
            printf("El numero de neutrones es=%f\n",F-9);
            break;
        case 10:
            printf("***NEON***");
            printf("Atomos=10\n");
            printf("ELECTRONES Y PROTONES=10\n");
            printf("Masa atomica=%f\n",Ne);
            printf("El numero de neutrones es=%f\n",Ne-10);
            break;
        case 11:
            break;
            
        
    }
    
}
   while  (opcion !=11);
    

    
    return (EXIT_SUCCESS);
}
