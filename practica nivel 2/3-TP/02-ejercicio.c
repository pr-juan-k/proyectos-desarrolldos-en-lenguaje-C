#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mx 20

struct 
{
    int numero_cuenta;
    char tipo_cuenta[mx];
    float saldo_actual;
}typedef cuenta;
struct 
{
    char sucursa[mx];
    int dni;
    char nombre[mx];
    int cuentas_posee;
    cuenta *cuentas_bancaria;
}typedef cliente;

void mostrarClienteMayorCuenta(cliente *cliente_banco,int total_cliente);
void clienteConSaldo(cliente *cliente_banco,int total_cliente);
void clientesEspeciales(cliente *cliente_banco,int total_cliente);

int main(){
    int clientes_total;
    printf("Cuantos clientes va a cargar:");
    scanf("%d",&clientes_total);
    cliente *cliente_banco = (cliente *)malloc(clientes_total * sizeof(cliente));


    return 0;
}
void mostrarClienteMayorCuenta(cliente *cliente_banco,int total_cliente){
    int mayor_cuenta = 0,indice_cliente;
    for (int i = 0; i < total_cliente; i++)
    {
        if (cliente_banco[i].cuentas_posee > mayor_cuenta)
        {
            indice_cliente = i;
        }
        
    }
    printf("\nEl cliente con mayor numero de cuenta es:");
    puts(cliente_banco[indice_cliente].nombre);
    
}
void clienteConSaldo(cliente *cliente_banco,int total_cliente){
    float monto = 0;
    printf("\nIngrese el monto que desea comparar:");
    scanf("%f",&monto);
    for (int i = 0; i < total_cliente; i++)
    {
        for (int j = 0; j < cliente_banco[i].cuentas_posee; j++)
        {
            if (cliente_banco[i].cuentas_bancaria[j].saldo_actual > monto)
            {
                printf("\nCliente con la cuenta con saldo mayor al ingresado:");
                puts(cliente_banco[i].nombre);
            }
            
        }
        
        
    }
    
}
void clientesEspeciales(cliente *cliente_banco,int total_cliente){
    int sucursal,tipo_cuenta;
    printf("Cliente especiales son:");
    for (int i = 0; i < total_cliente; i++)
    {
        sucursal = strcmp(cliente_banco[i].sucursa,"centro");
        
        if (sucursal == 0)
        {
            for (int j = 0; j < cliente_banco[i].cuentas_posee; j++)
            {
                tipo_cuenta = strcmp(cliente_banco[i].cuentas_bancaria[j].tipo_cuenta,"dolar");
                if (cliente_banco[i].cuentas_bancaria[j].saldo_actual > 10000 && tipo_cuenta == 0)
                {
                    printf("%d",i);
                    puts(cliente_banco[i].nombre);
                }
                
            }
            
        }
        
    }
    
}

