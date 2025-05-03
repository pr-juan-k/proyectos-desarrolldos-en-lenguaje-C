#include <stdio.h>
#include <stdlib.h>

void cargarNotas(float **notas,int alumnos);
float calcularPromedio(float **notas,int alumnos,float *promedio,float *mayor);

int main(){
    int alumnos;
    float promedio,nota_mas_alta;
    float *P_promedio = &promedio;

    printf("Ingrese la cantidad de alumnos:");
    scanf("%d",&alumnos);
    float **notas = (float *)malloc(alumnos * sizeof(float));
    for (int i = 0; i < 4; i++)
    {
        notas[i] = (float *)malloc(4 * sizeof(float));
        
    }
    

    cargarNotas(notas,alumnos);
    nota_mas_alta = calcularPromedio(notas,alumnos,P_promedio);
    puts("#############");
    printf("El promedio es:%.2f y la nota mas alta es:%.2f\n",*P_promedio,nota_mas_alta);



    return 0;
}
void cargarNotas(float **notas,int alumnos){
    float lengua,matematicas,naturales,sociales;
     for (int i = 0; i < alumnos; i++) {
        
            printf("\nAlumno: %d\n",i+1);
            printf("Lengua:");
            scanf("%f",&lengua);
            printf("Lengua:");
            scanf("%f",&matematicas);
            printf("Lengua:");
            scanf("%f",&naturales);
            printf("Lengua:");
            scanf("%f",&sociales);
        
            notas[i][0] = lengua;
            notas[i][1] = matematicas;
            notas[i][2] = naturales;
            notas[i][3] = sociales;


        
    }
    
}
float calcularPromedio(float **notas,int alumnos,float *promedio,float *mayor){
    
    
}


// inicio + rand() % (fin - inicio + 1); // Fórmula general para un rango [inicio,fin]
