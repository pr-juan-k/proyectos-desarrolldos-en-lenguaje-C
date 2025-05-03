#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

#define mx 20

struct 
{
    char razon_social[mx];
    int telefono;
}typedef cliente;
struct 
{
    char apellido[mx];
    char nombre[mx];
}typedef empleado;
struct 
{
    char nombre_cientifico[mx];
    char categoria[mx];
    char nombre_vulgar[mx];
}typedef especie;
struct{
    cliente d_clientes;
    empleado d_empleado;
    int pedidos;
}typedef pedido;
struct 
{
    especie d_especie;
    int stok_almacen;
    float precio;
    int total_pedidos;
    pedido list_pedidos;
    
}typedef arbol;
void mostrarEspecies(arbol *l_arboles,int total);
void mostrarStokEspecies(arbol *l_arboles,int total);

int main(){

    return 0;
}
void mostrarEspecies(arbol *l_arboles,int total){
    for (int i = 0; i < total; i++)
    {
            printf("%d-especie:%s\n",i+1,l_arboles[i].d_especie.nombre_cientifico);
        
        
    }
    
}
void mostrarStokEspecies(arbol *l_arboles,int total){
    for (int i = 0; i < total; i++)
    {
        if (l_arboles[i].stok_almacen > 1)
        {
            printf("%d-especie:%s\n",i+1,l_arboles[i].d_especie.nombre_cientifico);
        }
        
        
    }
    
}


