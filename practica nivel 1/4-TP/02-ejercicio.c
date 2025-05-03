#include <stdio.h>
#include <ctype.h>

int main(){
    char contrasenia;
    int ocho_C = 0,minuscula = 0,mayuscula = 0,numero = 0,carac_ES = 0;
    printf("Ingrese una contrasenia:");
    fflush(stdin);
    scanf("%c",&contrasenia);

    while (contrasenia != '.')
    {
        if (isdigit(contrasenia))
    {
        numero = 1;
    }
    if(islower(contrasenia)){
        minuscula = 1;
    }
    if(isupper(contrasenia)){
        mayuscula = 1;
    }
    if (contrasenia > 32 && contrasenia < 48)
    {
        carac_ES = 1;
    }
    ocho_C++;
    scanf("%c",&contrasenia);
    }
    //verificamos si es valido
    if (numero == 1)
    {
        if (minuscula == 1)
        {
            if (mayuscula == 1)
            {
                if (carac_ES == 1)
                {
                    if (ocho_C >= 8)
                    {
                        printf("LA CONTRASENA ES VALIDA\n");
                    }else
                    {
                        printf("La contrasena es invalida debe tener al menos 8 CARACTERES\n");
                    }
                    
                    
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
    
    
    
    

    return 0;
}