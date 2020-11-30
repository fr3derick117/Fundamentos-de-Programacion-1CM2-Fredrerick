/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Axel Frederick Félix Jiménez
 *
 * Created on 30 de noviembre de 2020, 11:25 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x;
    float y;
    printf("Dame un valor para x=\n");
    scanf("%f",&x);
    printf("Dame un valor para y=\n");
    scanf("%f",&y);
    printf("Raiz cuadrada de %.2f es = %.2f\n",x,sqrt(x));
    printf("La funcion exponencial de e^%.2f es = %f\n",x,exp(x));
    printf("El logaritmo natural de %.2f(de base e) es = %f\n",x,log(x));
    printf("El logaritmo de %.2f (de base 10) es = %f\n",x,log10(x));
    printf("El valor absoluto de %.2f es = %f\n",x,fabs(x));
    printf("Redondea al entero mayor de %f es = %f\n",x,ceil(x));
    printf("Redondeado al entero menor de %f es %f\n",x,floor(x));
    printf("%f elevado a la potencia %f(%f^)=%f\n",x,y,x,pow(x,y));
    printf("El seno trigonometrico de %f (en radianes) es = %f\n",x,sin(x));
    printf("El coseno trigonometrico de %f (en radianes) es = %f\n",x,cos(x));
    printf("La tangente trigonometrica de %f (en radianes) es = %f\n",x,tan(x));
    
    return (EXIT_SUCCESS);
}
