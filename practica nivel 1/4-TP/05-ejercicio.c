#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void calculoCuadrado(int lado);
void calculoRectangulo(int base,int altura);
void calculoCirculo(int radio);
void calculoTrianguloEquilatero(int lado);


int main(){
    int opcion,lado,base,altura,radio,lado_t;
    char seguir = 'n';
    do
    {
        puts("\n###--Selecione la figura geometrica--###");
    printf("\n1-Cuadrado");
    printf("\n2-Rectangulo");
    printf("\n3-Circulo");
    printf("\n4-Triagunlo equilatero");
    printf("\nOpcion:");
    scanf("%d",&opcion);
    switch (opcion)
    {
    case 1:
        printf("Ingrese los cm de los lados:");
        scanf("%d",&lado);
        calculoCuadrado(lado);
        break;
        case 2:
        printf("Ingrese la base:");
        scanf("%d",&base);
        printf("Ingrese la altura:");
        scanf("%d",&altura);
        calculoRectangulo(base,altura);
        break;
        case 3:
        printf("Ingrese el radio:");
        scanf("%d",&radio);
        calculoCirculo(radio);
        break;
        case 4:
        printf("Ingrese un lado:");
        scanf("%d",&lado_t);
        calculoTrianguloEquilatero(lado_t);
        break;
    }
        //analizamos la repeticion
        printf("\n\nSi = s\nNo = n \nDesea calcular otra figura mas:");
        fflush(stdin);
        scanf("%c",&seguir);
    } while (seguir != 'n');
    
    
    return 0;
}
void calculoCuadrado(int lado){
    int area = 0,perimetro = 0;
    area = lado * lado;
    perimetro = lado * 4;
    printf("\nEl area del CUADRADO es de:%dcm",area);
    printf("\nEl perimetro del CUADRADO es de:%dcm",perimetro);
}
void calculoRectangulo(int base,int altura){
    int area = 0,perimetro = 0;
    area = base * altura;
    perimetro = 2 * (base + altura);
    printf("\nEl area del RECTANGULO es de:%dcm",area);
    printf("\nEl perimetro del RECTANGULO es de:%dcm",perimetro);
}
void calculoCirculo(int radio){
    float area = 0,perimetro = 0;
    area = PI * pow(radio, 2);
    perimetro = 2 * PI * radio;
    printf("\nEl area del CIRCULO es de:%.1fcm",area);
    printf("\nEl perimetro del CIRCULO es de:%.1fcm",perimetro);
}
void calculoTrianguloEquilatero(int lado) {
    float area = 0, perimetro = 0;
    area = (sqrt(3) / 4) * pow(lado, 2);

    perimetro = 3 * lado;

    printf("\nEl área del TRIANGULO EQUILATERO es: %.2f\n", area);
    printf("\nEl perímetro del TRIANGULO EQUILATERO es: %.2f\n", perimetro);
}


