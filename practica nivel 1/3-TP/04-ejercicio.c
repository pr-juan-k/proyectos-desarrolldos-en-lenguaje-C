#include <stdio.h>

int main(){
    int kilometros;
    float agua,carbon;

    printf("\nIngrese los litros de agua:");
    scanf("%f",&agua);
    printf("\nIngrese los Kg de carbon:");
    scanf("%f",&carbon);
    printf("\nIngrese los k/h a recorrer:");
    scanf("%d",&kilometros);

    while (agua > 0 && carbon > 0 && kilometros > 0)
    {
        agua -= 0.2;
        carbon -= 0.3;
        kilometros--;
        printf("\nAgua:%.1f",agua);
        printf("\nCarbon:%.1f",carbon);
        printf("\nKilometros:%d\n",kilometros);
    }
    if (kilometros == 0)
    {
        printf("El tren llego a su destino\n");
    }else
    {
        if (agua <= 0)
        {
            printf("El recurso que se acabo es el AGUA\n");
        }else{
            if (carbon <= 0 )
            {
                printf("El recurso que se acabo es el CARBON\n");
            }
            
            
        }
        
    }
    
    

    
    

    return 0;
}