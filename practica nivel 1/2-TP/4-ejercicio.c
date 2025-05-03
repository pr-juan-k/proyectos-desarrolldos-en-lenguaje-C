#include <stdio.h>
#define IVA 0.21

int main() {
    float precio;
    char categoria;
    float A = 0.80;
    float B = 0.90;
    float descuento = 0.95;

    printf("Ingrese el precio del producto:$");
    scanf("%f", &precio);
    printf("\nIngrese la categoria: ");
    fflush(stdin); 
    scanf(" %c", &categoria); 

    /* menos = dinero * 0.90
        aumento = dinero * 0.10
        total = total + aumento
    */
  
    precio += precio * IVA;

    switch (categoria) {
        case 'a':
            precio *= A;
            break;
        case 'b':
            precio *= B;
            break;
        case 'c':
          
            break;
        default:
            puts("Categoria invalida");
            return 1;
    }

    if (precio >= 10000) {
        precio *= descuento;
    }

    printf("\nPrecio final a pagar: $%.2f\n", precio);

    return 0;
}
