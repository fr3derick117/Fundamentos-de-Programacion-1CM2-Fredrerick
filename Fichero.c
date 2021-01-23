
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {
    float a=0, b=0, c=0; 
    float promedio=0;
    char c1[] = "Primer numero:";
    char c2[] = "Segundo numero:";
    char c3[] = "Tercer numero:";
    char c4[] = "Promedio=";
    FILE* fichero; 
    fichero = fopen("promedio.txt", "wt"); 
    
    printf("Ingrese 3 números: \n"); 
    printf("Primer numero: ");
    scanf("%f",&a);
    printf("Segundo numero: ");
    scanf("%f",&b);
    printf("Tercer numero: ");
    scanf("%f",&c);
    promedio = a+b+c;
    promedio = promedio/3;
    
    fprintf(fichero,"%s  %f\n",c1,a);
    fprintf(fichero,"%s  %f\n",c2,b);
    fprintf(fichero,"%s  %f\n",c3,c);
    fprintf(fichero,"%s  %.2f\n",c4,promedio);
    fclose(fichero); 
    printf("Proceso completado");

    return (EXIT_SUCCESS);
}
