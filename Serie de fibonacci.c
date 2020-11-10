

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int A = 0;
    int B = 1;
    int N = 10;//N  Es el contador
    int Suma= A + B;
    printf("0");
    while (Suma<=N){
        
        printf ("\n""%d", Suma);
        
        Suma = A+B;
        A= B;
        B = Suma;
    }
    
   
    return (EXIT_SUCCESS);
}
