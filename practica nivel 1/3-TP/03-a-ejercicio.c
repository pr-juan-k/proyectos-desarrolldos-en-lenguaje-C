#include <stdio.h>

int main()
{
    int numero, div = 0,son_primos = 0,total_primos = 0;
    for (int i = 1; i <= 4; i++)
    {   
        int cantidad = 0;
        printf("\n%d-Ingrese un numero para comprobar si es primo: ",i);
        scanf(" %i", &numero);
        for (int j = 2; j < numero; j++)
        {
            div = numero % j;
            if(div == 0)
            {
                cantidad++;
                break;
            } 
        }
        if(cantidad == 0)
        {
            printf("El numero %i SI es primo\n", numero);
            son_primos++;
            total_primos += numero;  
        } else {            
            printf("El numero %i NO es primo\n", numero);
        }
    }
    printf("\n%d numeros ingresados son primos",son_primos);
    printf("\nel total de la suma de los numeros ingresados es:%d\n",total_primos);
    return 0;
}