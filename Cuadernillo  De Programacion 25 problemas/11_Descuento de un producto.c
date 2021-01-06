#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
    float precio;
    float meses;
    float costo;
    float descuento;
    float ahorrar;
    float d;
    int *pint;
    printf("Dame el valor de tu producto");
    scanf("%f",&precio);
    printf("Dame el porcentaje de descuento");
    scanf("%f",&descuento);
    costo=(precio*descuento)/100;
    d=precio-costo;
    ahorrar=(precio*descuento)/100;
    printf("EL valor final de tu producto seria=%f\n",d);
    printf("Lo que ahorras es=%f\n",ahorrar);
    return (EXIT_SUCCESS);
}
