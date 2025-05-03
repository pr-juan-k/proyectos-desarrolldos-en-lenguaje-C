#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define mx 10

void cargarMapa(char matriz[mx][mx]);
void mostrarTabla(char recta_X[mx][mx]);
int cargarMx(char matriz[mx][mx],int eje_X,int eje_Y,int x_rand,int y_rand);

int main(){
    srand(time(NULL));
    int eje_X = 0,eje_Y = 0,inicio = 0,fin = mx -1,x_rand = 0,y_rand = 0;
    int gano = 0,intentos = 5,cerca = 0,pista1 = 0,pista2 = 0;
    char mapa[mx][mx];
    x_rand = inicio + rand() % (fin - inicio + 1);
    y_rand = inicio + rand() % (fin - inicio + 1);
    pista1 = y_rand - 3; 
    pista2 = y_rand + 1;

    cargarMapa(mapa);
    mostrarTabla(mapa);
    do
    {
        if (intentos <= 2)
    {
        printf("\n###--PISTA--###");
        printf("\nX:%d",x_rand);
        printf("\nY esta entra %d y %d",pista1,pista2);
    }

    printf("\n%d intentos\n",intentos);
    printf("Ingrese las cordenadas entre 0 y 10 eje X:");
    scanf("%d",&eje_X);
    printf("Ingrese las cordenadas entre 0 y 10 eje Y:");
    scanf("%d",&eje_Y);
    cerca = eje_X - x_rand +1;
    if (eje_X >=6)
    {
        eje_X --;
    }
    
    
    
    gano = cargarMx(mapa,eje_X,eje_Y,x_rand,y_rand);
    printf("x: %d y:%d\n",x_rand,y_rand);
    
    mostrarTabla(mapa);

        intentos--;
    } while (gano != 1 && intentos > 0);


    if (intentos == 0)
    {
        mapa[x_rand][y_rand] = 'X';
        printf("\n####---PERDISTE---####\n\n");
        mostrarTabla(mapa);
    }else
    {
        printf("\n####---GANASTE---####\n\n");
    }
    
    
    

    return 0;
}
void mostrarTabla(char recta_X[mx][mx]){

    for (int i = 0; i < mx; i++)
    {
        printf("X  ");
        for (int j = 0; j < mx; j++)
        {
            
            printf("%c ",recta_X[i][j]);
        }
        
        
        printf("\n");
        
    }
    for (int Y = 0; Y < 8; Y++)
        {
            printf("Y  ");
        }
    
}
int cargarMx(char matriz[mx][mx],int eje_X,int eje_Y,int x_rand,int y_rand){

            if (eje_X == x_rand && eje_Y == y_rand){
                matriz[x_rand][y_rand] = 'X';
                return (1);
            }else
            {
                matriz[eje_X][eje_Y] = 'O';
                return (0);
            }   
    
    
}
void cargarMapa(char matriz[mx][mx]){

    for (int i = 0; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
           matriz[i][j] = '.';
                    
        }
        
    }
    
}
