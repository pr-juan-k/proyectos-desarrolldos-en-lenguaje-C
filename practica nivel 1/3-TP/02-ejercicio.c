#include <stdio.h>

int main(){
    int larga = 0, corta = 30,cuenta_F = 0;
    char frase;
    fflush(stdin);
    printf("Ingrese la frase a analizar:");
    scanf("%c",&frase);
    puts("---------");
    printf("La frase:");
    while (frase != '.')
    {
        printf("%c",frase);
       
        if (frase != ' ')
        {
            cuenta_F += 1; 
        }
        else
        {
            if (cuenta_F > larga)
            {
                larga = cuenta_F;
            }
            if (cuenta_F < corta)
            {
                corta = cuenta_F;
            }

            cuenta_F = 0;
        }
        
         scanf("%c",&frase);
    }
    printf("\nLa frase mas larga tiene :%d letras\n",larga);
    printf("La frase mas corta tiene: %d letras\n ",corta);
    
    return 0;
}