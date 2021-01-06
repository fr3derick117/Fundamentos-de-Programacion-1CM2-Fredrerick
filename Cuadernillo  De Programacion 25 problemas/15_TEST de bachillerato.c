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
    int ax,bx,cx,dx,fx,gx,hx,jx,ix;
    int suma;
 
    printf("¿Que bachilelrato elegir?\n");
    printf("Mi tecnica de estudio es...\n");
    printf("(1)Un poco baja. Me adaptaría a cualquier modalidad cuyas asignaturas fueran sencillas\n"
            "(2)Moderada.Un bachillerato adecuado debe estar dotado de asignaturas de todo tipo en un nivel moderado\n"
            "(3)Moderada.Las ciencias poseen cierta dificultad y me adapto mejor a las lenguas y literatura\n"
            "(4)Alta.Mis aspiraciones llegan a un bachillerato dotado de un nivel muy superior\n\n");
    scanf("%d",&ax);
    printf("Las matemáticas...\n");
    printf("(1)Son horrorosas\n"
            "(2)No me interesan\n"
            "(3)Son necesarias en varios ámbitos\n"
            "(4)Serán imprescindibles en mi futura carrera\n\n");
    scanf("%d",&bx);
    printf("Me gusta...\n");
    printf("(1)El arte\n"
            "(3)Leer\n"
            "(2)La ciencia social y económica\n"
            "(4)La ciencia, la física, la química\n\n");
            
    scanf("%d",&cx);
    printf("Si me proponen leer un libro...\n");
    printf("(1) Resulta interesante leerlo y analizar todo su contexto y significado\n"
           "(2)Resulta intereasnte leerlo si es claro y fácil de leer. Me gusta el oficio del escritor\n" 
            "(3)No me resulta interesante leerlo.\n"
            "(4)Me resulta interesante leerlo si su argumento está dirigido a las ciencias o a las aventuras\n\n");
    scanf("%d",&dx);
    printf("Cantar y escribir\n");
    printf("(1)Se me da bien cantar y escribir\n"
            "(2)Se me da bien escribir\n"
            "(3)Mi técnica de escritura es impecable\n"  
            "(4)No se me dan bien\n\n");
    scanf("%d",&fx);
    printf("Dibujar\n");
    printf("(1)Es mi pasión\n"""
           "(2)Soy más de letras\n"
           "(3)No me gusta, soy más dedicado a ténicas de geografía o economía\n"
           "(4)Soy más de ciencias\n\n");
    scanf("%d",&gx);
    printf("La geografía\n");
    printf("(1)No es mi pasión\n"
            "(2)No me gusta\n"
            "(3)Me gusta\n"
            "(4)Me dedico más a las ciencias matemáticas\n\n");
    scanf("%d",&hx);
    printf("La Física\n");
    printf("(1)Resulta interesante, pero se escapa de mis objetivos\n"
            "(2)La odio con todas las fuerzas\n"
            "(3)No me gsuta\n"
            "(4)Es una de mis pasiones\n\n");
    scanf("%d",&jx);
    printf("Una vez obetnidad mi carrera o grado...\n");
    printf("(1)Seré dibujante (artistico) o actor\n"
            "(2)Seré un escritor de categoría\n"
            "(3)Trabajaré en la industria como asesor financiero o similar(campo amplio)\n"
            "(4)Seré ingeniero, dibujante técnico o me dedicaré a las ciencias matemáticas y físicas\n\n");
    scanf("%d",&ix);
    suma=ax+bx+cx+dx+fx+gx+hx+jx+ix;
    if( suma<10)
    {printf("Dedicate al bachillerato Artístico o Escénico");}
    else if (suma<20 && suma>11)
    {printf("Dedícate al Bachillerato Humanístico");}
    else if (suma>21 && suma<30)
    {printf("Dedícate al Bachillerato de Ciencias Sociales y Económicas ");}
    else if (suma>31 && suma<40)
    {printf("Dedícate al bachillerato Científico o Tecnológico");}
    
    
    
   

    return (0);
}
