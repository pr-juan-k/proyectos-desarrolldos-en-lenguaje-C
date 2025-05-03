#include <stdlib.h>
#include <stdio.h>

int main(){
    int cantidaad_empleado,anios,categoria_valida = 1;
    char categoria,nombre;
    float G = 350.000,A = 250.000,M = 100.000;

    printf("Ingrese la cantidad de emplados:");
    scanf("%d",cantidaad_empleado);
    for (int i = 0; i < cantidaad_empleado ; i++)
    {
        fflush(stdin);
        printf("Ingrese el nombre:");
        scanf("%c",&nombre);
        fflush(stdin);
        printf("Ingrese anios trabajados:");
        scanf("%d",&anios);
        fflush(stdin);
        do
        {
            printf("G-gerencial");
            printf("A-administrativo");
            printf("M-maestranza");
            printf("Ingrese categoria:");
            scanf("%c",&categoria);
            if (categoria == 'a' || categoria == 'g' || categoria == 'm' )
            {
                categoria_valida = 1;
            }else{
                printf("\nCategoria invalida\n");
                categoria_valida = 0;
            }
            
            
        } while (categoria_valida != 1);
        

    }
    
    return 0;
}