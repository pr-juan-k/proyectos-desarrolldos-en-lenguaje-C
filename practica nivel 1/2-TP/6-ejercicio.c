#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Ingrese los cm de 1er lado:");
    scanf("%d",&a);
    printf("Ingrese los cm de 2do lado:");
    scanf("%d",&b);
    printf("Ingrese los cm de 3er lado:");
    scanf("%d",&c);
    printf("Ingrese los cm de 4to lado:");
    scanf("%d",&d);

    if (a != 0 && b != 0 && c != 0 && d != 0)
    {
        if (a == b && c == d && a == c)
        {
            puts("Los lados ingresados corresponden a un CUADRADO");
        }else
        {
            if (a == c && b == d && a != b)
            {
                puts("Los datos ingresados corresponden a un RECTANGULO");
            }
            
        }
        
        
    }else
    {
       if(a != 0 && b != 0 && c != 0 && d == 0) {
        // Verificar la desigualdad triangular
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                puts("Los datos ingresados corresponden a un triangulo EQUILATERO");
            } else if (a == b || a == c || b == c) {
                puts("Los datos ingresados corresponden a un triangulo ISOSCELES");
            } else {
                puts("Los datos ingresados corresponden a un triangulo ESCALENO");
            }
        } else {
            puts("Los datos ingresados no forman un triangulo valido");
        }
    } 
        
      
    }
    
    

    return 0;
}