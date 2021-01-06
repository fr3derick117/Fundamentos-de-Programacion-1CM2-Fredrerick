/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 1 de  enero de 2020, 11:11 am
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float canastabasica=1165;
    float serviciosbasicos=1150;
    float s;
    float p;
    
    printf("Este codigo sirve para calcular cuanto dinero te quedaria para lujos dependiendo de tu salario;\n");
    printf("Teniendo en cuenta los promedios generales del costo de la canasta basica y los servicios basicos\n");
    printf("¿Cuanto ganas al mes?");
    scanf("%f",&s);
    p=s-(canastabasica + serviciosbasicos);
    
    printf("Aproximadente te quedaria para ahorrar o gastar =%f pesos\n",p);
   
    

    return (EXIT_SUCCESS);
}
