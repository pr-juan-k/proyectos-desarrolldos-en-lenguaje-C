#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

#define mx 2
void cargarMatris(int mtx[mx][mx]);
void mostrarMatriz(int mtx[mx][mx]);
void sumarMatriz(int mtx_1[mx][mx],int mtx_2[mx][mx]);

int main(){
    int matriz_1[mx][mx];
    int matriz_2[mx][mx];
    printf("\n1-MATRIZ\n");
    cargarMatris(matriz_1);
    mostrarMatriz(matriz_1);
    printf("\n2-MATRIZ\n");
    cargarMatris(matriz_2);
    mostrarMatriz(matriz_2);
    //resultado de matriz
    puts("----resultado----");
    sumarMatriz(matriz_1,matriz_2);

    return 0;
}
void cargarMatris(int mtx[mx][mx]){
    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            printf("\nIngrese el %d-numero:",j+1);
            scanf("%d",&mtx[i][j]);
        }
    }
    
}
void mostrarMatriz(int mtx[mx][mx]){
    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            printf("%d ",mtx[i][j]);
        }
        printf("\n"); 
    }
    
}
void sumarMatriz(int mtx_1[mx][mx],int mtx_2[mx][mx]){
    int res;
    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            res = mtx_1[i][j] + mtx_2[i][j];
            printf("%d + %d = %d\n",mtx_1[i][j],mtx_2[i][j],res);
        }
        
    }
    
}
