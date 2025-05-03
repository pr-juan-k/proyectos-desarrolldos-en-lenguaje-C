#include <stdio.h>
#include <string.h>
#define mx 25

int main(){
    char nombre[mx],apellido[mx],completo[mx],l_nombre,l_apellido;
    int j = 0;
    printf("Nombre:");
    gets(nombre);
    printf("Apellido:");
    gets(apellido);
    //calculo longitud de cadenas
    l_nombre = strlen(nombre);
    l_apellido = strlen(apellido);
    //formamos cadena

    
        for (int i = 0; i < l_nombre; i++)
        {
            if (nombre[i] != '\0')
            {
                completo[j] = nombre[i];
            }
            j++;
        }
        completo[j] = ' ';
        j++;
        for (int a = 0; a < l_apellido; a++)
        {
                completo[j] = apellido[a];
                j++;
        }
        completo[j] = '.';
        j++;
        completo[j]= '\0';
    
    
    
       
    printf("Nombre completo:");
    puts(completo);
    
    
    
    return 0;
}
