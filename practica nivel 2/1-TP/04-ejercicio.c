#include <stdio.h>
#include <stdlib.h>

void cargarNotas(float *notas,int alumnos);
float calcularPromedio(float *notas,int alumnos,float *promedio);

int main(){
    int alumnos;
    float promedio,nota_mas_alta;
    float *P_promedio = &promedio;
    printf("Ingrese la cantidad de alumnos:");
    scanf("%d",&alumnos);
    float *notas = (float *)malloc(alumnos * sizeof(float));

    cargarNotas(notas,alumnos);
    nota_mas_alta = calcularPromedio(notas,alumnos,P_promedio);
    puts("#############");
    printf("El promedio es:%.2f y la nota mas alta es:%.2f\n",*P_promedio,nota_mas_alta);



    return 0;
}
void cargarNotas(float *notas,int alumnos){
     for (int i = 0; i < alumnos; i++) {
        int parteEntera = rand() % 11;
        int parteDecimal = rand() % 100;
        *notas = parteEntera + parteDecimal / 100.0f;
        notas++;
    }
    
}
float calcularPromedio(float *notas,int alumnos,float *promedio){
    float suma = 0,mas_alta = 0;

    for (int i = 0; i < alumnos; i++)
    {
        suma += notas[i];
        if (notas[i] > mas_alta)
        {
            mas_alta = notas[i];
        }
        
    }
    *promedio = suma / alumnos;
    return mas_alta;
    
}


// inicio + rand() % (fin - inicio + 1); // Fórmula general para un rango [inicio,fin]
