
/*
1.	Declaración del Arreglo: Crea un arreglo de tamaño 10 que contenga números enteros ingresados por el usuario.

2.	Uso de Funciones con Paso de Punteros:
o	Crea una función para llenar el arreglo con datos ingresados por el usuario.
void llenarArreglo(int *arreglo)
o	Crea una función para recorrer y mostrar el contenido del arreglo, usando un puntero en lugar de índices de arreglo.
void mostrarArreglo(int *arreglo)
o	Crea una función que muestre los elementos en posiciones pares.
void mostrarPares(int *arreglo)
o	Crea una función que recorra el arreglo y multiplique los elementos en posiciones impares por 2.
void modificarImpares(int *arreglo)
o	Crea una función para calcular el promedio de todos los elementos del arreglo utilizando un puntero.
float calcularPromedio(int *arreglo)
o	Crea una función para encontrar el valor máximo y mínimo dentro del arreglo, devolviendo estos valores mediante el uso de punteros como parámetros.
void encontrarMaxMin(int *arreglo, int *max, int *min)

3.	Salida esperada: Muestra en la consola el contenido original del arreglo, el promedio de los elementos, el valor máximo y mínimo, y el arreglo modificado.
Nota: Todas las funciones deben emplear paso de punteros como parámetros.


*/


#include <stdio.h>

#define TAM 10



void llenarArreglo(int *arreglo);
void mostrarArreglo(int *arreglo);
void mostrarPares(int *arreglo);
void modificarImpares(int *arreglo);
float calcularPromedio(int *arreglo);
void encontrarMaxMin(int *arreglo, int *max, int *min);


int main() {
    int arreglo[TAM];
    int max, min;

    llenarArreglo(arreglo);
    mostrarArreglo(arreglo);
    

    printf("Promedio de los elementos: %.2f\n", calcularPromedio(arreglo));

    encontrarMaxMin(arreglo, &max, &min);
    printf("Máximo: %d\n", max);
    printf("Mínimo: %d\n", min);

    mostrarPares(arreglo);

    modificarImpares(arreglo);
    printf("Arreglo modificado (posiciones impares multiplicadas por 2):\n");
    mostrarArreglo(arreglo);

    return 0;
}





// Función para llenar el arreglo
void llenarArreglo(int *arreglo) {
    printf("Ingrese %d elementos para el arreglo:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arreglo + i);  // Usando puntero para ingresar datos
    }
}

// Función para mostrar el arreglo usando un puntero
void mostrarArreglo(int *arreglo) {
    printf("Elementos del arreglo:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", *(arreglo + i));
    }
    printf("\n");
}

// Función para calcular el promedio del arreglo
float calcularPromedio(int *arreglo) {
    int suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += *(arreglo + i);
    }
    return (float)suma / TAM;
}

// Función para encontrar el máximo y el mínimo en el arreglo
void encontrarMaxMin(int *arreglo, int *max, int *min) {
    *max = *arreglo;
    *min = *arreglo;
    for (int i = 1; i < TAM; i++) {
        if (*(arreglo + i) > *max) {
            *max = *(arreglo + i);
        }
        if (*(arreglo + i) < *min) {
            *min = *(arreglo + i);
        }
    }
}

// Función para modificar elementos en posiciones impares
void modificarImpares(int *arreglo) {
    for (int i = 1; i < TAM; i += 2) {
        *(arreglo + i) *= 2;  // Multiplicando por 2 los elementos en posiciones impares
    }
}

// Función para mostrar elementos en posiciones pares
void mostrarPares(int *arreglo) {
    printf("Elementos en posiciones pares:\n");
    for (int i = 0; i < TAM; i += 2) {
        printf("%d ", *(arreglo + i));
    }
    printf("\n"); 
}