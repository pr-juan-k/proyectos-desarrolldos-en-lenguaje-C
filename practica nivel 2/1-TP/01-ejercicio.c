#include <stdio.h>
#include <stdlib.h>

int main(){
    int var_1,var_2;
    int c;
    int *p,*q;
    p = &var_1;
    q = &var_2;
    printf("Ingrese el 1er valor:");
    scanf("%d",&var_1);
    printf("Ingrese el 2do valor:");
    scanf("%d",&var_2);
    //mostramos valores
    printf("\nValor 1: %d\n valor 2: %d\n\n",var_1,var_2);
    //muestro valor segun punteros
    puts("Muestro valores segun punteros");
    printf("valor p_1: %d \nvalor p_2: %d \n",*p,*q);
    //direcciones de los punteros
    puts("\nDireccion de los punteros");
    printf("\ndireccion p_1:%p \ndireccion p_2:%p\n",&p,&q);
    printf("Ingrese un valor para C:");
    scanf("%d",&c);
    printf("\nel contenido de el calor es: %d\n y su direccion de memoria es:%d\n",c,&c);
    //asigno el valor de c el valor de a usando su puntero
    c = *p;
    printf("\nEl valor de la variable C:%d \nl valor de A:%d\n",c,*p);

    //sumamos A y B y guardamos en C, mostramos todas las variables (_TODO CON PUNTEROS_)
    c = *p + * q;
    printf("\n A:%d B:%d C:%d\n",*p,*q,c);


    return 0;
}