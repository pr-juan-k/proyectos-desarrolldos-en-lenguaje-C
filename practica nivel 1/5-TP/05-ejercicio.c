#include <stdio.h>
#include <string.h>
#define mx 15
int main(){
    char palabra[mx],completada[mx],letra;
    int intentos = 5,longitud_P,completo_F = 0,existe = 0;
    puts("###--ADIVINA LA PALABRA--###\n");
    printf("Ingrese una pabra.\n");
    printf("Jugador 1:");
    gets(palabra);
    longitud_P = strlen(palabra);

    for (int i = 0; i < longitud_P; i++)
    {
        completada[i] = '_';
    }
    printf("##---ADIVINA---##");
    puts("\nIngrese una letra");
    //comienzo del bucle
    do
    {
    existe = 0;
    printf("\njugador 2:");
    fflush(stdin);
    scanf("%c",&letra);
    
    puts("");
    for (int a = 0; a < longitud_P; a++)
    {
        if (palabra[a] == letra)
        {
            completada[a] = letra;
            existe= 1;
        }
        
    }
    if (!existe)
    {
        intentos--;
    }
    
    completo_F = 1;
    for (int b = 0; b < longitud_P; b++)
    {
        printf("%c ",completada[b]);
        if (completada[b] == '_')
        {
            completo_F = 0;
        }       
    }
    printf("\nIntentos %d",intentos);
    } while (intentos > 0 && completo_F == 0 );
    
    if (completo_F == 1)
    {
        printf("\nGANASTE..!!\n");
        
    }else
    {
        printf("\nTe quedaste sin intentos!!\n");
    }
    
    
    
    
    
    

    return 0;
}