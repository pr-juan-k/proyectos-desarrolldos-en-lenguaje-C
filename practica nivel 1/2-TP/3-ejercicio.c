#include <stdio.h>

int main(){
    int dni,cbu,opcion;
    float saldo,extracion;
    printf("\nIngrese su DNI:");
    scanf("%d",&dni);
    printf("\nIngrese su CBU:");
    scanf("%d",&cbu);
    printf("\nIngrese su saldo:$");
    scanf("%f",&saldo);
    puts("Elija una opcion");
    puts("1-depositar dinero");
    puts("2-retirar dinero");
    puts("3-consultar saldo");
    puts("4-mostrar datos de la cuenta");
    puts("5-salir");
    printf("Opcion:");
    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1:
    printf("\nIngrese el monto que desea depositar:$");
    scanf("%f",&saldo);
        break;
        case 2:
        printf("\nIngrese el monto que desea extraer:$");
        scanf("%f",&extracion);
        if (extracion<= saldo)
        {
            saldo -= extracion;
            puts("Extracion exitosa");
        }else
        {
            puts("\n¡No posee fondo suficiente para extraer!");
        }
        
        break;
        case 3:
        printf("\nSu saldo es $%.2f",saldo);
        break;
        case 4:
        printf("\nSu DNI: %d",dni); 
        printf("\nSu CBU: %d",cbu); 
        printf("\nSu Saldo:$%f",saldo);
        break;
        case 5:
        puts("SALIO!"); 
        break;
    default:
        puts(" ERROR Opcion no registrada");
        break;
    }
        return 0;
}