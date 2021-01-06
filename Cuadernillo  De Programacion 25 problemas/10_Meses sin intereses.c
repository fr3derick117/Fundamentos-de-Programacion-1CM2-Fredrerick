#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
    float precio;
    float meses;
    float costo;
    printf("Dame el valor de tu producto");
    scanf("%f",&precio);
    printf("Dame la duracion de tu plan en meses");
    scanf("%f",&meses);
    costo=precio/meses;
    printf("La cantidad que pagarias por mes seria=%f",costo);
    
    return (EXIT_SUCCESS);
}
