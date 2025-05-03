#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define mx 20

struct 
{
    int dia;
    int mes;
    int anio;
}typedef fecha;
struct 
{
    char nombre_juego[mx];
    char genero[mx];
    char plataforma[mx];
    float precio;
}typedef juego;
struct 
{
    fecha fecha_compra;
    int juegos_totales;
    juego *juegos_coomprados;
    int puntos_por_compra;
}typedef compra;
struct 
{
    char nombre[mx];
    int dni;
    int edad;
    int compras_total;
    compra *compras_realizadas;
}typedef cliente;

void clienteMasJoven(cliente *clientes,int total);
//muestro los clientes que compraron la mayor cantidad de juego
void clientesMayorCompraJuegos(cliente *clientes,int total);
void clientesConPuntosTotales(cliente *clientes,int total);
void juegosVendidosSegunPlataforma(cliente *clientes,int total);
void juegosDeAventurasVendidos(cliente *clientes,int total);

int main(){
    int cargar_cliente = 1,cuento_clientes = 0,capacidas = 2;
    //simulo precargar los datos 
    juego juego_1[] ={{"metal","aventura","play",21000.0},{"Halo", "accion", "xbox", 18000.0}};
    compra compra_1[] = {{1,4,2024},2,juego_1,500};
    cliente jose = {"jose",422323,23,1,compra_1};

    //creo otro cliente
    juego juego_2[] = {{"gta","action","pc",23000.0},{"pool","aventura","pc",17000.0}};
    compra compra_2[] = {{23,3,2024},2,juego_2,300};
    cliente lucia = {"lucia",2132323,24,compra_2};

   


    cliente *clientes_compro = (cliente *)malloc(capacidas *sizeof(cliente));

    clientes_compro[0] = jose;
    clientes_compro[1] = lucia;
    //compruevo funciones 
    clienteMasJoven(clientes_compro,capacidas);
    puts("#################");
    clientesMayorCompraJuegos(clientes_compro,capacidas);
    puts("#################");
    juegosVendidosSegunPlataforma(clientes_compro,capacidas);

   /* while (cargar_cliente != 0)*/
    {
        printf("Ingrese 1 para cargar cliente 0 para finalizar:");
        scanf("%d",&cargar_cliente);
        
        if (cuento_clientes >= capacidas && cargar_cliente != 0)
        {
            capacidas *= 2;
            clientes_compro = (cliente *)realloc(clientes_compro,capacidas * sizeof(cliente));
              
        }
        //aqui iria el metodo cargar clientes
        cuento_clientes++;
        
    }
    

    for (int i = 0; i < capacidas; i++)
    {
        for (int j = 0; j < clientes_compro[i].compras_total; j++)
        {
            free(clientes_compro[i].compras_realizadas[j].juegos_coomprados);   
        }
        fee(clientes_compro[i].compras_realizadas);
        
    }
    
    
    
    free(clientes_compro);
    return 0;
}
void clienteMasJoven(cliente *clientes,int total){
    int menor = 80,indice;
    for (int i = 0; i < total; i++)
    {
        if (clientes[i].edad < menor)
        {
            menor = clientes[i].edad;
            indice = i;
        }
        
    }
    printf("El cliente mas joven que compro tiene %d anios y se llama:",menor);
    puts(clientes[indice].nombre);
    
}
void clientesMayorCompraJuegos(cliente *clientes,int total){
    int indice,mayor = 0;
    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < clientes[i].compras_total; j++)
        {
            if (clientes[i].compras_realizadas[j].juegos_totales > mayor)
            {
                mayor = clientes[i].compras_realizadas[j].juegos_totales;
                indice = i;
            }
            
        }
        
    }
    printf("El cliente que compro mas juegos acumulando un total de: %d juegos se llama:",mayor);
    puts(clientes[indice].nombre);

    
}
void clientesConPuntosTotales(cliente *clientes,int total){
    int puntos;
    for (int i = 0; i < total; i++)
    {
        puntos = 0;
        for (int j = 0; j < clientes[i].compras_total; j++)
        {
            puntos += clientes[i].compras_realizadas[j].juegos_totales;
        }
        printf("%d-jugador de nombre %s tiene %d puntos",i+1,clientes[i].nombre,puntos);
    }
    
}
void juegosVendidosSegunPlataforma(cliente *clientes,int total){
    int es_plataforma;
    int pc= 0,play = 0,xbox = 0;
    for (int i = 0; i < total; i++)
    {
        for (int j = 0; j < clientes[i].compras_total; j++)
        {
           for (int k = 0; k < clientes[i].compras_realizadas->juegos_totales; k++)
           {
             es_plataforma = strcmp(clientes[i].compras_realizadas[j].juegos_coomprados[k].genero,"pc");
            if (es_plataforma == 0)
            {
                pc++;
            }else
            {
                es_plataforma = strcmp(clientes[i].compras_realizadas[j].juegos_coomprados[k].genero,"play");
                if (es_plataforma == 0)
                {
                    play++;
                }else
                {
                    es_plataforma = strcmp(clientes[i].compras_realizadas[j].juegos_coomprados[k].genero,"xbox");
                    if (es_plataforma == 0)
                    {
                        xbox++;
                    }
                    
                }
                
                
            }
           }
           
            
            
        }
        
    }
    printf("El total de juegos vendido es PC es:%d en PLAY es:%d en XBOX es:%d",pc,play,xbox);
    
}
void juegosDeAventurasVendidos(cliente *clientes,int total){
    int total_aventura = 0;
   for (int i = 0; i < total; i++)
   {
    for (int j = 0; j < clientes[i].compras_total; j++)
    {
        for (int k = 0; k < clientes[i].compras_realizadas[j].juegos_totales; k++)
        {
            if (strcmp(clientes[i].compras_realizadas[j].juegos_coomprados[k].genero,"aventura") == 0)
            {
                if (clientes[i].compras_realizadas[j].fecha_compra.anio ==2024 && clientes[i].compras_realizadas[j].fecha_compra.mes == 6)
                {
                    total_aventura++;
                }
                
                
            }
            
        }
        
    }
    
   }
   printf("El total de los juegos de aventura vendidos en la fecha es de:%d",total_aventura);
   
    
}
