/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 23 de enero de 2021, 12:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author:  Axel Frederick Félix Jiménez
 *
 * Created on 01 de enero de 2021, 7:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int ax,bx,cx,dx,fx,gx,hx,jx,ix;
    int suma;
 
    printf("TEST DE PERSONALIDAD");
    printf("¿Como consideras tu personalidad?\n");
    printf("(10)Extroverito,.. me gustan los lugares extensos con muchas personas y amigos,... aunque,...debo admitir qeue aveces no pienso las cosas\n"
            "(10)Introvertido,...prefiero los espacios pequeños o al aire libre sin mucha gente,soy muy conciente de lo que hago,... pero me cuesta comunicarme\n"
           );
    scanf("%d",&ax);
    printf("¿Que suele decirte la gente?\n");
    printf("(2)Explosivo\n"  
            "(5)Serio\n"
            "(5)Raro\n"
            "(8)Amable\n"
            );
    scanf("%d",&bx);
    printf("Te gusta tu vida\n");
    printf( "(2)No,me va mal en todo\n"
            "(5)No mucho\n"
            "(6)Si\n"
            "(8)Si,aunque no sea perfercta\n\n");
            
    scanf("%d",&cx);
   
    suma=ax+bx+cx;
    if( suma<19 && suma>13)
    {printf(" Eres alguien extrovertido,.....pero también tienes tus momentos duros y tu sensibilidad emocional pero sin embargo intentas ser realista y positivo a la vez\n");}
    else if (suma>20)
    {printf(" Eres introvertido,tienes algo de dificultad para expresarte,o prefieres los espacios tranquilos,...pero en el fondo eres fuerte tus emociones y tu carácter son de admirar y aunque aveces sueñes de mas,....siempre intentas comprenderte a ti mismo \n");}
    
    
    
   

    return (0);
}
