/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funciones.h
 * Author: Axel Frederick Félix Jiménez
 *
 * Created on 18 de enero de 2021, 11:15 AM
 */

#include<stdio.h>
float PI=3.1452;
int suma(int a, int b){
    return a+b;
}
    int resta (int a, int b){
        return a-b;
    }
    char primer_caracter(char*cadena){
        return cadena[0];
    }
    double area_circulo(int radio){
        return PI*radio*radio;
    }
