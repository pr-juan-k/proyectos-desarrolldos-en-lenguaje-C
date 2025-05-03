#include <stdio.h>
#include <stdlib.h>

void cargarTiros(int *list_tiros,int tiros);
float calcularGanancia(int *list_tiros,int tiros,float *perdida);

int main(){
    int tiros;
    float ganancia,perdido = 0;
    float *p_perdido = &perdido;
    printf("Ingrese la cantidad de tiros que ara:");
    scanf("%d",&tiros);
    int *lista_tiros = (int *)malloc(tiros * sizeof(int));
    cargarTiros(lista_tiros,tiros);
    ganancia = calcularGanancia(lista_tiros,tiros,p_perdido);
    puts("######");
    printf("La ganancia total es:%.2f,\nLo que a perdido:%.2f\n",ganancia,*p_perdido);
    free(lista_tiros);

    return 0;
}
void cargarTiros(int *list_tiros,int tiros){
    for (int i = 0; i < tiros; i++)
    {
        list_tiros[i] = 1 + rand() % (10 - 1  +1);
    }
    
}

float calcularGanancia(int *list_tiros,int tiros,float *perdida){
    float ganancia = 0;
    for (int i = 0; i < tiros; i++)
    {
        switch (list_tiros[i])
        {
        case 1:
        if (ganancia >= 100)
        {
            ganancia -= 100;
        }
        *perdida += 100;
        break;
        case 2:
        if (ganancia >= 100)
        {
            ganancia -= 100;
        }
        *perdida += 100;        
        break;
        case 7:
        if (ganancia > 300)
        {
             ganancia += 300;
        }
        break;
        case 8:
        if (ganancia > 350)
        {
            ganancia += 350;
        }
        break;
        case 9:
        ganancia += 850;
        break;
        case 10:
        ganancia += 1000;

        }

        if (ganancia >= 350)
        {
            ganancia -= 350;
        }
        
    }
    return ganancia;
    
}
