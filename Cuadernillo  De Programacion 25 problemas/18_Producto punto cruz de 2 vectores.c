/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 10:02 PM
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float x;
    float y;
    float z;
    float x2;
    float y2;
    float z2;
     
    printf("Dame el valor de x/i\n");
    scanf("%f",&x);
    printf("Dame el valor de y/j\n");
    scanf("%f",&y);
    printf("Dame el valor de z/k\n");
    scanf("%f",&z);
    printf("Dame el valor de x2/i2\n");
    scanf("%f",&x2);
    printf("Dame el valor de y2/j2\n");
    scanf("%f",&y2);
    printf("Dame el valor de z2/k2\n");
    scanf("%f",&z2);
    printf("(%f*%f-%f*%f)i+(%f*%f)j+(%f*%f)k\n",y,z2,z,y2,z,x2,x,z2,x,y2,y,x2);
    printf("%f i  %f j %f k\n",((y*z2)-(z*y2)),(z*x2)-(x*z2),(x*y2)-(y*x2));

    return (0);
}
