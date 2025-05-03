#include <stdio.h>

int main(){
    int primer_N,segundo_N,espacio = 0,pares = 0,ipares_total = 0;
    printf("Ingrese el primer numero:");
    scanf("%d",&primer_N);
    printf("Ingrese el segundo numero:");
    scanf("%d",&segundo_N);
    int i;

    for (i = primer_N; i < segundo_N; i++)
    {
        espacio++;
        if ( (i % 2) == 0)
        {
            pares++;
        }else
        {
            ipares_total += primer_N;
        }
        
    }
    printf("\n%d espacios hay entre los numeros ingresados entre el %d y %d ingresados\n",espacio,primer_N,segundo_N);
    printf("%d numeros son pares\n",pares);
    printf("%d es el total de la suma de los impares\n",ipares_total);
    return 0;
}