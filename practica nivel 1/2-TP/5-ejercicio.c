#include <stdio.h>

int main(){
    int numeroIn,caracter;
    printf("Ingrese un numero:");
    scanf("%d",&numeroIn);
    // primera filtracion para determinar que tipo es
    if (numeroIn >= 48 && numeroIn <= 57)
    {
        puts("El numero ingresado es un numero de entre 0 al 9");
    }else
    {
        if (numeroIn >= 65 && numeroIn >= 90)
        {
            puts("Es una letra mayuscula");
        }else
        {
            if (numeroIn >= 97 && numeroIn <= 122)
            {
                puts("Es una letra munuscula");
            }
            
        }
    }
    // determina si es bocal
    if (numeroIn == 65 || numeroIn == 97)
    {
        puts("Es la bocar A");
    }else
    {
        if (numeroIn == 69 || numeroIn == 101)
        {
        puts("Es la bocar E");
        }else
        {
            if (numeroIn == 73 || numeroIn == 105)
            {
                 puts("Es la bocar I");
            }else
            {
                if (numeroIn == 79 || numeroIn == 111)
                {
                    puts("Es la bocar O");
                }
                else
                {
                    if (numeroIn == 85 || numeroIn == 117)
                    {
                        puts("Es la bocar U");
                    }
                    
                }
                
                
            }
            
            
        }
        
        
    }
    //determino si es caracter y cual es
    if(numeroIn >= 33 && numeroIn <= 47){
        puts("Es un caracter especial");
    }
    switch (numeroIn)
    {
    case 64:
        puts("El numero ingresado es un ( @ )");
        break;
        case 43:
        puts("Es un signo mas (+)");
        break;
        case 45:
        puts("Es un signo menos ( - )");
        break;
        case 42:
        puts("Es un signo de multriplicacion ( * )");
        break;
        case 47:
        puts("Es un signo de divicion ( / )");
        break;
        case 37: 
        puts("Es un signo de porcentaje ( %% )");
    
    default:
        puts("El numero ingresado no pertenece a la tabla ASCII ");
        break;
    }
    caracter = (char)numeroIn;
    printf("\nEl numero ingresado :%d representa a:%c\n",numeroIn,caracter);
    return 0;
}