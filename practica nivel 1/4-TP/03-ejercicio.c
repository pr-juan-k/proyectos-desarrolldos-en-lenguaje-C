#include <stdio.h>
int invertirNumero(int numero);
int numerosInpares(int numero);

int main(){
    int numero,invertido,inpares;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    invertido = invertirNumero(numero);
    inpares = numerosInpares(numero);
    printf("\nInvertido:%d",invertido);
    printf("\nInpares:%d\n",inpares);
    
    
    return 0;
}
int invertirNumero(int numero) {
    int invertido = 0;
    
    while (numero != 0) {
        // Tomamos el último dígito del número
        int ultimoDigito = numero % 10;

        // Añadimos ese dígito al número invertido
        invertido = invertido * 10 + ultimoDigito;

        // Eliminamos el último dígito del número original
        numero /= 10;
    }

    return invertido;
}
int numerosInpares(int numero){
    int inpares = 0,digito = 0,resto = 0;
    while (numero != 0)
    {
        digito = numero % 10;
        resto = digito %2;
        if (resto != 0)
        {
            inpares++;
        }
        numero /= 10;
        
    }
    return(inpares);
}
int impar(int num){
    int dig = 0,inpares = 0;
    while (num != 0)
    {
        dig = num % 10;
        if ( (dig % 2) != 0)
        {
            inpares++;
        }
        
    }
    
    
}

