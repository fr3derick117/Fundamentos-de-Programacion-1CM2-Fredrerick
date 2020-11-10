/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: PC AXEL
 *
 * Created on 6 de noviembre de 2020, 03:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     float res = 1.1;
    float ros = 2.9;
    float rex = 1.5;
    float rix = 3.0;
    
    if(res>ros && res>rex && res>rix)
    {printf("Res es el numero mayor");}
    else if(ros>res && ros>rex && ros>rix)
    {printf("Ros es el numero mayor");}
    else if(rex>res && rex>ros && rex>rix)
    {printf("Rex es el numero mayor");}
    else if(rix>res && rix>ros && rix>rex)
    {printf("Rix es el numero mayor");}

    return (EXIT_SUCCESS);
}
