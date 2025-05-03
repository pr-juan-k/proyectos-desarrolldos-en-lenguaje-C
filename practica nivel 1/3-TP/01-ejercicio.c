#include <stdio.h>

int main(){
    char frase;
    int total_A = 0,total_E = 0,total_O = 0,total_vocales = 0;
    fflush(stdin);
    printf("Ingrese la frase a analizar:");
    scanf("%c",&frase);
    puts("\n---------");
    printf("La frase:");
    while (frase != '.')
    {
        printf("%c",frase);
        
        switch (frase)
        {
        case 'A':
        case 'a':
            total_A += 1;
            break;
            case 'E':
            case 'e':
            total_E += 1;
            break;
            case 'O':
            case 'o':
            total_O += 1;
            break;
        }
        scanf("%c",&frase);
    }
    total_vocales = total_A + total_E + total_O;
    printf("\nTotal de A: %d",total_A);
    printf("\nTotal de E: %d",total_E);
    printf("\nTotal de O: %d",total_O);
    printf("\nTOTAL: %d",total_vocales);
    puts("");

    
    return 0;
}