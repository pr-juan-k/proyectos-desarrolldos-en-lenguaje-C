#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 15

void cargarArreglo(int arre[],int tama,int inicio,int fin);
void mostrarArreglo(int arre[],int tama);
int buscoMayor(int arre[],int tama);
void mostrarPromedio(int arre[],int tama);
void remplazoMayores(int arre[],int tama);
void incrementoPosicionesImpares(int arre[],int tama);


int main(){
    int arreg[mx];
    int mayor = 0;
    //cargamos arreglo
    cargarArreglo(arreg,mx,10,350);
    //mostramos arreglo
    mostrarArreglo(arreg,mx);
    //mostramos el mayor
    mayor = buscoMayor(arreg,mx);
    printf("\n%d es el mumero mayor\n",mayor);
    printf("------\n");
    mostrarPromedio(arreg,mx); 
    remplazoMayores(arreg,mx);
    incrementoPosicionesImpares(arreg,mx);
    mostrarArreglo(arreg,mx);


    return 0;
}
void cargarArreglo(int arre[],int tama,int inicio,int fin){
    srand(time(NULL));
    for (int i = 0; i < tama; i++)
    {
        arre[i] = inicio + rand()%(fin - inicio +1);
    }
    
}
void mostrarArreglo(int arre[],int tama){
    printf("####----mostramos----####\n");
    for (int i = 0; i < tama; i++)
    {
        printf("%d",arre[i]);
        printf("--");
    }
    printf("\n");
}
int buscoMayor(int arre[],int tama){
    int mayor = 0;
    for (int i = 0; i < tama; i++)
    {
        if (arre[i]> mayor)
        {
            mayor = arre[i];
        }
        
    }
    return(mayor);
}
void mostrarPromedio(int arre[],int tama){
    float total = 0, total_inpares = 0,impares = 0;
    for (int i = 1; i < tama; i+=2)
    {
        total_inpares += arre[i];
        impares++;
        printf("aaa\n");
    }
    total = total_inpares / impares;
    printf("total: %.0f inpares: %.0f el promedio de las posciiones impares es:%.2f\n",total_inpares,impares,total);
    
}
void remplazoMayores(int arre[],int tama){
    int remplazo;
    printf("\nIngrese el numero por el cual desea remplazar:");
    scanf("%d",&remplazo);
    for (int i = 0; i < tama; i++)
    {
        if (arre[i] > 300)
        {
            arre[i] = remplazo;
        }
        
    }
    
}
void incrementoPosicionesImpares(int arre[],int tama){
    for (int i = 1; i < tama; i += 2)
    {
        arre[i] += 1;
    }
    
}
