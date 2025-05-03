#include <stdio.h>

int main(){
    char nombre,categoria;
    int anios,cantidad,incremento,categoria_valida = 0;
    float sueldo = 0,antiguedad = 0;
    float G = 350.000,A = 250.000,M = 100.000;
    puts("Calculamos el sueldo de los empleados");
    printf("\nIngrese la cantidad de empleados:");
    scanf("%d",&cantidad);
    
    for (int i = 0; i < cantidad; i++)
    {
        fflush(stdin);
        printf("\nIngresa el nombre del empleado con terminacion en \'.\' :");
        scanf("%c",&nombre);
        fflush(stdin);
        printf("Ingrese la antiguedad:");
        scanf("%d",&anios);
        fflush(stdin);

        puts("G-gerencial");
        puts("A-administrativo");
        puts("M-maestranza");
        printf("Ingree la categoria:");
        scanf("%c",&categoria);
        do
        {
            if (categoria_valida == 1)
            {
                categoria_valida = 0;
                puts("G-gerencial");
                puts("A-administrativo");
                puts("M-maestranza");
                fflush(stdin);
               printf("Ingree la categoria:");
                scanf("%c",&categoria);
            }
            
            switch (categoria)
        {
            case 'G':
            case 'g':
            antiguedad = G*0.02; 
            sueldo = G +(antiguedad*anios);
            break;
            case 'A':
            case 'a':
            antiguedad = A*0.02;
            sueldo = A +(antiguedad*anios);
            break;
            case 'M':
            case 'm':
            antiguedad = M*0.02;
            sueldo = M +(antiguedad*anios);
            break;
        
        default:
        puts("\n***CATEGORIA INVALIDA***");
        categoria_valida = 1;
            break;
        }
            
        } while (categoria_valida != 0);

        printf("El sueldo a cobrar es $%.2f",sueldo);
        
        
        
    }
    

    return 0;
}