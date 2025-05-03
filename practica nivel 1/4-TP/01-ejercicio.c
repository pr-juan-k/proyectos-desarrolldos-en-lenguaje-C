#include <stdio.h>
int suma(int a,int b);
int resta(int a,int b);
int producto(int a, int b);
int division(int a,int b);
int potencia(int a,int b);


int main(){
    int A,B,repito = 0,opcion,resp;
    do
    {
        printf("1-Ingre el primer numero:");
        scanf("%d",&A);
        printf("2-Ingre el segundo numero:");
        scanf("%d",&B);
        puts("------------");
        puts("1-SUMA");
        puts("2-RESTA");
        puts("3-PRODUCTO");
        puts("4-DIVISION");
        puts("5-POTENCIA");
        printf("Seleccione la opcion que desea realizar:");
        scanf("%d",&opcion);
        switch (opcion)
        {
        case 1:
            resp = suma(A,B);
            break;
            case 2:
            resp = resta(A,B);
            break;
            case 3:
            resp = producto(A,B);
            break;
            case 4:
            resp = division(A,B);
            break;
            case 5:
            resp = potencia(A,B);
            break;
        
        default:
            break;
        }
        printf("\nEl resultado es:%d\n",resp);
        printf("\nDesea realisar otra operacion 1=SI 0=NO :");
        scanf("%d",&repito);

    } while (repito);
    

    return 0;
}
int suma(int a,int b){
    int res;
    res = a + b;
    return(res);
}
int resta(int a,int b){
    int res;
    res = a -b;
    return(res);
}
int producto(int a,int b){
    int res = 0;
    for (int i = 0; i < b; i++)
    {
        res += a;
    }
    return(res);
}
int division(int a,int b){
    int contador = 0;
    while (a >= b) {
        a -= b;
        contador++;
    }
    
    return(contador);  
}
int potencia(int a,int b){
    int res = 1;
    for (int i = 0; i < b; i++) {
        res = producto(res, a); 
    }
    return(res);
}

