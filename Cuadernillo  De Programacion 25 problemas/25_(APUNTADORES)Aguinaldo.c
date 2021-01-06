/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 10:07 am
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 03 de enero de 2021, 10:07 pm
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    float aguinaldo;
    float mes;
    float dias;
    float *p1,*p2;
    float sueldoburto;
    printf("Calculo de aguinaldo\n");
    printf("Cuanto ganas al mes?\n");
    scanf("%f",&mes);
    p1=&mes;
    
    dias=*p1/30;
    aguinaldo=dias*15;
    p2=&aguinaldo;
    printf("Tu aguinaldo es de=%f",*p2);
    
   
 return(0);
}
