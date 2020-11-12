/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Axel Fredrick Félix Jiménez
 *
 * Created on 10 de noviembre de 2020, 09:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int i=1,j;
    while(i <= 10) 
    {
        j=1;
        while(j<=10)
        {
            printf("%4d",i*j);
            j++;
        }
        printf("\n");
        i++;
       
    }

    return (EXIT_SUCCESS);
}
