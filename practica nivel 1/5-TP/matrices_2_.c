#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#define mx 3
void cargarMatriz(int mtrz[][mx],int tamanio);
void mostrarMatriz(int mtrz[][mx],int tamanio);
void matrizIdentidad(int mtrz[][mx],int tamanio);
void matrizTriangularSuperior(int mtrz[][mx],int tamanio);
void matrisTriangularInferior(int mtrz[][mx],int tamanio);

int main(){
    int mtz_1[mx][mx];
    cargarMatriz(mtz_1,mx);
    printf("Matriz tranpuesta:\n");
    mostrarMatriz(mtz_1,mx);
    puts("--------------");
    printf("Matriz identidad:\n");
    matrizIdentidad(mtz_1,mx);
    puts("--------------");
    printf("Matriz triangular superior\n");
    matrisTriangularInferior(mtz_1,mx);
    puts("--------------");

    return 0;
}
void cargarMatriz(int mtrz[][mx],int tamanio){
    int incremento = 1;
    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            mtrz[j][i] = incremento++; 
        }   
    }
}
void mostrarMatriz(int mtrz[][mx],int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio; j++)
        {
            printf("%d ",mtrz[i][j]);
        }
        puts("");
        
    }
    
}
void matrizIdentidad(int mtrz[][mx],int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        for (int a = 0; a < tamanio; a++)
        {
            if (i == a)
            {
                printf("1 ");
            }else{
                printf("0 ");
            }
            
        }
        puts("");
        
    }
    
}
void matrisTriangularInferior(int mtrz[][mx],int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio; j++)
        {
            if (i >= j)
            {
                printf("1 ");
            }else
            {
                printf("0 ");
            }
        }
        puts("");
    }
    
}
