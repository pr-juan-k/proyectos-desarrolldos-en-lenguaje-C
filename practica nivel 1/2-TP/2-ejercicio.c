#include <stdio.h>

int main(){
    float lengua,matematicas,ciencia,promedio;
    printf("Ingrese la nota de Lengua:");
    scanf("%f",&lengua);
    printf("\nIngrese la nota de Matematicas:");
    scanf("%f",&matematicas);
    printf("\nIngrese la nota de Ciencias:");
    scanf("%f",&ciencia);

    promedio = (lengua + lengua + ciencia)/3;

    printf("\nEl promedio optenido es:%.2f",promedio);
    //segun nota
    printf("\nSegun su promedio:");
    if (promedio >= 9.00)
    {
        printf("Excelente");
    }else{
        if (promedio >= 7.00 && promedio <= 9.00)
        {
            printf("Muy bueno");
        }else{
            if (promedio >= 5.00 && promedio <= 7.00)
            {
                printf("Regular");
            }
            else{
                printf("Rerobado");
            }
            
        }
        
    }
    puts("");
    
    

    return 0;
}