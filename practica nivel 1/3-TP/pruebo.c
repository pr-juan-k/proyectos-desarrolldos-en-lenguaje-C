#include <stdio.h>

int main(){
    int total = 1, total_Pr, i, es_primo;

    while (total <= 10) {
        printf("Ingrese %d numero:", total);
        scanf("%d", &total_Pr);
        total++;

        // Comprobar si el número es primo
        if (total_Pr <= 1) {
            es_primo = 0; // 0 y 1 no son números primos
        } else {
            es_primo = 1; // Asumimos que el número es primo
            for (i = 2; i <= total_Pr / 2; i++) {
                if (total_Pr % i == 0) {
                    es_primo = 0; // No es primo
                    break;
                }
            }
        }

        if (es_primo) {
            puts("\nEl numero es primo");
        } else {
            puts("El numero no es primo\n");
        }
    }

    return 0;
}
