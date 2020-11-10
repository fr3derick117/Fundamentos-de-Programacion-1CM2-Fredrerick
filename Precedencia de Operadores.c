/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: PC AXEL
 *
 * Created on 6 de noviembre de 2020, 03:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
      float res = 0;
    float ros = 0; 
    int ras= 0;
    //Ejercicio 1:
    res = 6.18/5.0*(((14.1-4.0)/2)*((14.1-4.0)/2)) ;
    //Ejercicio 2:
    ros = (8.9 * 34.0)/17;
    //Ejercicio 3:
    ras= 8-7;
    printf ("El valor de res es:" "%f\n",res);
    printf ("El valor de ros es:" "%f\n",ros);
    printf ("El valor de ras es:" "%d",ras);

    return (EXIT_SUCCESS);
}
