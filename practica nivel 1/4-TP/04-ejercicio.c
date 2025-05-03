#include <stdio.h>

void mostrarCategorias();
void formaDePago();
float pagar(float total_com,int f_pago);


int main(){
    int producto,pago;
    char seguir_comprando;
    float total_produc = 0,total_bruto = 0;
    do
    {
    puts("\n######--TecnoMax--######");
    mostrarCategorias();
    printf("Selecione producto:");
    scanf("%d",&producto);
    
    switch (producto)
    {
        case 1:
        total_produc += 850.000;
        break;
        case 2:
        total_produc += 759.000;
        break;
        case 3:
        total_produc += 520.000;
        break;
        case 4:
        total_produc += 1.500,000;
        break;
        case 5:
        total_produc += 755.000;
        break;
        case 6:
        total_produc += 539.000;
        break;
    }
    printf("S=si\nN=no\nDesea seguir comprando:");
    fflush(stdin);
    scanf("%c",&seguir_comprando);

    } while (seguir_comprando != 'n' && seguir_comprando != 'N');


    formaDePago();
    printf("\nOpcion:");
    scanf("%d",&pago);
    total_bruto = pagar(total_produc,pago);
    printf("\nEl total a pagar es de :$%.2f\n",total_bruto);
    
    

    return 0;
}
void mostrarCategorias(){
    int categoria,incorrecta = 0;

    
    do
    {
        printf("1-Electro domesticos \n2-Informatica \n Selecione categoria:");
         scanf("%d",&categoria);
    switch (categoria)
    {
    case 1:
        puts("\n1-Heladera:$850.000\n2-Lavarropas:$759.000\n3-Microondas:$520.000\n");
        incorrecta = 0;
        break;
        case 2:
        puts("\n4-Laptop:$1.500.000\n5-Tablet:$755.000\n6-Smarfhone:$539.000");
        incorrecta = 0;
        break;
    default:
    puts("\n---CATEGORIA INCORRECTA---\n");
        incorrecta = 1;
        break;
    }
    } while (incorrecta != 0);
    
   
}
void formaDePago(){
    char f_pago;
    int correcto = 0;
    do
    {
        puts("##--forma de pago--##");
    printf("T=Tarjeta\nE=Efectivo\npagar con:");
    fflush(stdin);
    scanf("%c",&f_pago);
    switch (f_pago)
    {
    case 't':
    case 'T':
        correcto = 1;
        printf("1-cuota no tiene ningun descuento\n3-cuota hay un recargo de un 15%%\n6-cuotas hay un recargo de un 25%%");
        break;
        case 'E':
        case 'e':
        correcto =1;
        printf("2-Tiene un 10%% de descuento");
        break;
        default:
            puts("##--OPCION INCORRECTA--##");
            correcto = 0;
        break;
    
    }
    } while (correcto != 1);
    
}
float pagar(float total_com,int f_pago){
    float total = 0;
    switch (f_pago)
    {
    case 1:
        total = total_com;
        break;
        case 3:
        total = total_com * 1.15;
        break;
        case 6:
        total = total_com * 1.25;
        break;
        case 2:
        total = total_com * 0.9;
    }
    return(total);
}

