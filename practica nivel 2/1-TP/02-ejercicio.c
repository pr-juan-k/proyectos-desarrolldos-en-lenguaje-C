#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define mx 100
int main(){
    char frase[mx];
    int consonantes = 0;
    int incrementos = 0;

    char *punt = frase;
    int *p_consonantes = &consonantes;

    printf("Ingrese una frase:");
    gets(frase);
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i]!= 'o' && frase[i] != 'u')
        {
            frase[i] = toupper(frase[i]);
            *p_consonantes++;
        }
    }
    


    printf("\nla cantidad de constantes es:%d y la frease es:",*p_consonantes);
    puts(frase);
    printf("\n");
     printf("\nvalor de PUNT:%p\n",*punt);

    //apartado 3
    printf("\nLa direccion de PUNT es: %d \n La direccion del 1er frase: %p \nla primera letras es:%c \n",&punt,&frase[0],frase[0]);
    //apartado 4
    printf("valor arreglo 4ta letra:%c \n valor puntero 4ta letra %c\n",frase[3],*(punt+3));
    //apartado 5

    




    return 0;
}
