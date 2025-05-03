#include <stdio.h>
#define max 4

void cargoMatriz(int mtx[][max]);
void matrizTranpuesta(int mtx[][max]);
void matrizIdentidad(int tama);
void matrizTriangularSuperior(int tama);

int main(){
    int matriz[max][max];
    cargoMatriz(matriz);
    puts("Matriz TRANPUESTA");
    matrizTranpuesta(matriz);
    puts("-------------");
    puts("Matris IDENTIDAD");
    matrizIdentidad(4);
    puts("-------------");
    puts("Matriz Triangular SUPERIOR");
    matrizTriangularSuperior(4);
    return 0 ;
}
void cargoMatriz(int mtx[][max]){
    int incremento = 0;
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            incremento++;
            mtx[i][j] =  incremento;
        }
        
    }
    
}
void matrizTranpuesta(int mtx[][max]){
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            printf("%d ",mtx[j][i]);
        }
        printf("\n");
        
    }
    
}
void matrizIdentidad(int tama){
    for (int i = 0; i < tama; i++)
    {
        for (int j = 0; j < tama; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
}
void matrizTriangularSuperior(int tama){
    for (int i = 0; i < tama; i++)
    {
        for (int j = 0; j < tama; j++)
        {
            if (i>=j)
            {
                printf("1 ");
            }else
            {
                printf("0 ");
            }
            
            
        }
        printf("\n");
    }
    
}
