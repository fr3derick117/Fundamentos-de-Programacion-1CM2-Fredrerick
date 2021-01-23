
#include <stdio.h>
#include <stdlib.h>

void fibonacci(int penultimo, int ultimo, int n){
    int actual;
    printf("%d",ultimo);
    if(n>1){
       actual= penultimo+ultimo;
       n--;
       fibonacci(ultimo,actual,n);
    }
    
}

int main(int argc, char** argv) {
    int x;
printf("Cuantos numeros de la serie de fibonacci quieres?");
scanf("%d",&x);
fibonacci(0,1,x);
    return (EXIT_SUCCESS);
}
