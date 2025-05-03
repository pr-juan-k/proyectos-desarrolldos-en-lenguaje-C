#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define mx 20

struct 
{
    int dia;
    int mes;
    int anio;
}typedef fecha;
struct 
{
    char nombre[mx];
    int edad;
    fecha fech_prestamos;
}typedef lector;
struct 
{
    char titulo_libro[mx];
    char genero[mx];
    int lectores_totales;
    lector *los_lectores;
}typedef biblioteca;

void libroMayorLectores(biblioteca *libro,int libros_total);
void muestroLibrosPrestadosAMenores(biblioteca *libro,int libros_total);
void librosPolicialesPrestados(biblioteca *libro,int libros_total);
void cargarDatos(biblioteca *libro,int libros_total);


int main(){
    int libros_cargados = 0;
    printf("Ingrese la cantidad de libros que va a cargar:");
    scanf("%d",&libros_cargados);
    biblioteca *libros = (biblioteca *)malloc(libros_cargados * sizeof(biblioteca));
    cargarDatos(libros,libros_cargados);
    libroMayorLectores(libros,libros_cargados);
    muestroLibrosPrestadosAMenores(libros,libros_cargados);
    librosPolicialesPrestados(libros,libros_cargados);



    for (int j = 0; j < libros->lectores_totales; j++)
    {
            free(libros[j].los_lectores);
    }

    free(libros);

    return 0;
}
//modulos
void libroMayorLectores(biblioteca *libro,int libros_total){
    int libro_mayor = 0,indice_libro;
    for (int i = 0; i < libros_total; i++)
    {
        if (libro[i].lectores_totales > libro_mayor)
        {
            libro_mayor = libro[i].lectores_totales;
            indice_libro = i;
        }
        
    }
    printf("\nEl libro con mayor cantidad de lectores es:");
    puts(libro[indice_libro].titulo_libro);
    
}
void muestroLibrosPrestadosAMenores(biblioteca *libro,int libros_total){
    for (int i = 0; i < libros_total; i++)
    {
        if (libro[i].los_lectores->edad < 21)
        {
            printf("\nEl libro prestado a socios menores de 21 anos son:");
            puts(libro[i].titulo_libro);
        }
        
    }
    
}
void librosPolicialesPrestados(biblioteca *libro,int libros_total){
    int es_policial;
    printf("Los libros son:");
    for (int i = 0; i < libros_total; i++)
    {
        es_policial = strcmp(libro[i].genero,"policial");
        if (es_policial == 0 && libro[i].los_lectores->fech_prestamos.anio == 2023)
        {
            printf("\n%d-:",i+1);
            puts(libro[i].titulo_libro);
        }
        
    }
    
}
void cargarDatos(biblioteca *libro,int libros_total){
    for (int i = 0; i < libros_total; i++)
    {
        printf("---LIBRO %d---\n",i+1);
        printf("Titulo del libro:");
        scanf("%s",&libro[i].titulo_libro);
        printf("Genero:");
        scanf("%s",&libro[i].genero);
        printf("Numero de lectores:");
        scanf("%d",&libro[i].lectores_totales);
        libro[i].los_lectores = (lector *)malloc(libro[i].lectores_totales * sizeof(lector));
        for (int j = 0; j < libro[i].lectores_totales; j++)
        {
            printf("LECTOR %d\n",j+1);
            printf("Nombre:");
            scanf("%s",&libro[i].los_lectores[j].nombre);
            printf("Edad:");
            scanf("%d",&libro[i].los_lectores[j].edad);
            printf("Anio del prestamo:");
            scanf("%d",&libro[i].los_lectores[j].fech_prestamos.anio);
        }
        
        
    }
    
}