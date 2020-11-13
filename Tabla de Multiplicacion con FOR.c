/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Axel Frederick Félix Jiménez
 *
 * Created on 12 de noviembre de 2020, 08:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    int j;
    for(i=1;i<=10;i++){
        printf("--------TABLA DE %d-----\n",i);
        for(j=1;j<=10;j++){
            printf("%d x %d=%d\n",i,j,i*j);
        }
    }
        

    return (EXIT_SUCCESS);
}
