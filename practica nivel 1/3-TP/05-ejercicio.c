#include <stdio.h>

int main(){
    char frase,letra,espacio = ' ';
    int cuento_espacio = 0,palabra = 0;
    fflush(stdin);
    

    printf("Ingrese la letra que desea buscar al iniciar una palabra de la frase:");
    scanf("%c",&letra);
    printf("Ingrese una frase:");
    scanf("%c",&frase);

    while (frase != '.')
    {
        if (frase != ' ')
        {
            
            if (frase == letra && espacio == ' ')
            {
                palabra++;
            }
            espacio = '&';
            
        }else
        {
            cuento_espacio++;
            espacio = ' ';
            
        }
        scanf("%c",&frase); 
        
       
    }
    printf("\n%d espacios hay en la frase ingresada",cuento_espacio);
    printf("\n%d palabras contienen la letra ingresada al principio\n",palabra);
    
    return 0;
}