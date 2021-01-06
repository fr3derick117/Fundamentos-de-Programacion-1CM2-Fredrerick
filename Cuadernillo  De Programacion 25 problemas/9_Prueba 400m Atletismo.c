#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float tiempo;
    float tiempo2;
    float caida;
    float caida2;
    
    printf("Codigo para dar a conocer la caida de tiempo  en un 400m en base de lo que corres en un 100m\n");
    printf("------SE DEBE DE MEDIR EL TIEMPO DEL ATLETA CORRIENDO A MAXIMA VELOCIDAD A TRAVES DE 100METROS\n");
    printf("------EL ATLETA TOMA 5 MINUTOS DE DESCANSO\n");
    printf("------SE MIDE EL TIEMPO DEL ATLETA CORRIENDO A MAXIMA VELOCIDAD A TRAVES DE 400 METROS\n");
    printf("Dame el tiempo en el que corres el 100m\n");
    scanf("%f",&tiempo);
    printf("Dame el tiempo de cuando corres el 400m en segundos?");
    scanf("%f",&tiempo2);
    
    caida=tiempo2/4;
    caida2=caida-tiempo;
    printf("La ciada de tiempo mediante el incremento de le eficiencia aneróbica es=%f segundos",caida2);
    
    

    
    
 
    
    return (EXIT_SUCCESS);
}
