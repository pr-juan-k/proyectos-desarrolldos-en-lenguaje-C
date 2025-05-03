#include <stdio.h>
#include <stdlib.h>
#define mx 20

struct
{
    char c_nombre[mx];
    char c_apellido[mx];
    int c_dni;

}typedef d_cordinador;
struct 
{
    int dia;
    int mes;
    int anio;
}typedef fecha;
struct 
{
    char destino_viaje[mx];
    d_cordinador d_cordinador;
    fecha f_salida;
    fecha f_regreso;
    float costo_viaje;
    int cnt_habitaciones;
    int *reservadas; 
}typedef e_viaje;
e_viaje cargarDatos();
e_viaje incrementarPrecio(e_viaje vuelo,float porcentaje);


int main(){
    e_viaje viaje;
    float incremento = 0;

    viaje = cargarDatos();
    printf("Ingrese el porcentaje %% de aumento el costo del viaje:");
    scanf("%f",&incremento);
    incrementarPrecio(viaje,incremento);

    
    free(viaje.reservadas);
    
    

    return 0;
}
e_viaje cargarDatos(){
    e_viaje viaje;
    int j = 1;

    printf("Destino:");
    gets(viaje.destino_viaje);
    printf("Nombre del cordinador:");
    gets(viaje.d_cordinador.c_nombre);
    printf("Apellido:");
    gets(viaje.d_cordinador.c_apellido);
    printf("Dni:");
    scanf("%d",&viaje.d_cordinador.c_dni);
    //salida
    printf("Fecha de salida\n");
    do
    {
        printf("Dia:");
        scanf("%d",&viaje.f_salida.dia);

    } while (viaje.f_salida.dia >= 30);
    do
    {
        printf("mes:");
        scanf("%d",&viaje.f_salida.mes);
    } while (viaje.f_salida.mes >= 12);
    
    do
    {
        printf("Anio:");
        scanf("%d",&viaje.f_salida.anio);
    } while (viaje.f_salida.anio >= 2026);
    
    //regreso
    printf("Fecha de regreso\n");
    printf("Dia:");
    scanf("%d",&viaje.f_regreso.dia);
    printf("mes:");
    scanf("%d",&viaje.f_regreso.mes);
    printf("Anio:");
    scanf("%d",&viaje.f_regreso.anio);
    //asd
    printf("Costo del viaje:$");
    scanf("%f",&viaje.costo_viaje);

    printf("Cantidad de habitaciones:");
    scanf("%d",&viaje.cnt_habitaciones);

    viaje.reservadas = (int *)malloc(viaje.cnt_habitaciones * sizeof(int));
    for (int i = 0; i < viaje.cnt_habitaciones; i++)
    {
        printf("Habitacion %d:",i+1);
        viaje.reservadas[i] = 100 + rand() % (400 - 100 +1);
    }
    // inicio + rand() % (fin - inicio + 1); // Fórmula general para un rango [inicio,fin]
    for (int i = 0; i < viaje.cnt_habitaciones; i++)
    {
        for (j ; j < viaje.cnt_habitaciones; j++)
        {
            if (viaje.reservadas[i]== viaje.reservadas[j])
            {
                /* code */
            }
            
        }
        if (j <= viaje.cnt_habitaciones)
        {
            j++;
        }
        
        
    }
    

    


    return viaje;
}

e_viaje incrementarPrecio(e_viaje vuelo,float porcentaje){
        vuelo.costo_viaje = (vuelo.costo_viaje/100) * (100 +porcentaje);
        return vuelo;
}
