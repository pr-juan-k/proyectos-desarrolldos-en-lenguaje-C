#include <stdio.h>
#include <stdlib.h>
#define max 20

void mezclarCadenas(char *cad_1,char *cad_2,int posicion);

int main(){
    int posicion;
    char *cadena_1,*cadena_2;
    //realizo reserva de memoria
    cadena_1 = (char *)malloc(max * sizeof(char));
    cadena_2 = (char *)malloc(max * sizeof(char));
    //cargo datos
    printf("Ingrese la primera cadena:");
    gets(cadena_1);
    printf("Ingrese la segunda cadena:");
    gets(cadena_2);
    printf("Ingrese la posicion en la que desea concatenar:");
    scanf("%d",&posicion);
    mezclarCadenas(cadena_1,cadena_2,posicion);
    free(cadena_1);
    free(cadena_2);
    
    return 0;
}
void mezclarCadenas(char *cad_1,char *cad_2,int posicion){
    for (int i = 0; i < posicion; i++)
    {
        printf("%c",cad_1[i]);
    }
    for (int i = 0; cad_2[i] != '\0'; i++)
    {
        printf("%c",cad_2[i]);
    }
    for (int i = posicion; cad_1[i] != '\0'; i++)
    {
        printf("%c",cad_1[i]);
    }
    puts("\n------");
    
    
    
}