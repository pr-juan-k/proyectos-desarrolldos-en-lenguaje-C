#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define mx 20

int main(){
    char contra1[mx],contra2[mx];
    int longitd= 0,es_Mayuscula = 0,es_Minuscula = 0,es_Numero = 0,es_Caracter = 0,es_VALIDA = 0,es_Igual =1;
    printf("Ingrese la contrasenia:");
    gets(contra1);

    longitd = strlen(contra1);
    
    do
    {
        //validacion de primera contrasenia ingresada correctamente
    do
    {
    if (longitd >7)
    {
        for (int i = 0; i < longitd; i++)
        {
            if (isdigit(contra1[i]))
            {
                es_Numero = 1;
            }
            if (islower(contra1[i]))
            {
                es_Minuscula = 1;
            }
            if (isupper(contra1[i]))
            {
                es_Mayuscula = 1;
            }
            if (contra1[i] > 32 && contra1[i] < 48)
            {
                es_Caracter = 1;
            }
            
            }


            if (es_Numero == 1)
    {
        if (es_Minuscula == 1)
        {
            if (es_Mayuscula == 1)
            {
                if (es_Caracter == 1)
                {   
                    es_VALIDA = 1;   
                }else
                {
                    printf("La contrasena es invalida debe tener al menos un caracter ESPECIAL\n");
                }
                
                
            }else{
                printf("La contrasena es invalida debe tener al menos un caracter en MAYUSCULA\n");
            }
            
        }else
        {
            printf("La contrasena es invalida debe tener al menos un caracter en MINUSCULA\n");
        }
        
        
        
    }else{
        printf("La contrasena es invalida debe tener al menos un NUMERO\n");
    }      

        
    }else{
        printf("Debe ingresar al menos 8 caracteres");
    }
    if (es_VALIDA == 0)
    {
        printf("\nIngrese la contrasenia nuevamente:");
        gets(contra1);
        longitd = strlen(contra1);
    }
    
    } while (es_VALIDA == 0);

        //valido segunda contrasenia sean iguales solo si la primera contrasenia cumple con todo
        printf("\nRepita la contrasenia:");
        gets(contra2);
        es_Igual = strcmp(contra1,contra2);
        if (es_Igual == 0)
        {
            printf("###---CONTRASENIA GUARDADA---###");
        }else
        {
            printf("Las contrasenias no coinsiden");
            es_VALIDA = 1;
        }
    } while (es_Igual != 0);
    
    
    
    

    
    

    
    
    
    
    
    return 0 ;
}