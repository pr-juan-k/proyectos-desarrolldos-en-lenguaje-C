#include <stdio.h>

int main(){
    int incremento,decremento,invierto;
    printf("1-Ingrese un entero positivo:");
    scanf("%d",&incremento);
    printf("2-Ingrese un entero positivo:");
    scanf("%d",&decremento);
    //1-primera forma
    decremento--;
    incremento++;
    /* 2-segunda forma
    decremento = decremento -1
    incremento = incremento + 1

    3-tercera forma 
    decremento -= 1
    incremento += 1

    */
    printf("1-numero increnebtado:%d",incremento);
    printf("\n2-numero decrementado:%d\n",decremento);
    puts("-----------------");
    invierto = incremento;
    incremento = decremento;
    decremento = invierto;
    printf("1-numero INVERTIDO increnebtado:%d",incremento);
    printf("\n2-numero INVERTIDO decrementado:%d",decremento);



    

    return 0;
}