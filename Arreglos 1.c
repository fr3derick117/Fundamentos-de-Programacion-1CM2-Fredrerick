#include <stdio.h>
#include <math.h>

int main ()
{   float a=0;
    float b=0;
    float k=3;
    float x=0;
    float y=0;
 
    for(x=0;x<=100;x++){
        a=((1+sqrt(5))/2);
        b=((1-sqrt(5))/2);
        y=(pow(a,k)-pow(b,k))/sqrt(5);
        
        printf("el arreglo(%f)=%f\n",x,y);
        k++;
    } 
    return(0);
}
