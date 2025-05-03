#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define mx 20

struct 
{
    int dia;
    int mes;
    int anio;
}typedef fecha;
struct 
{
    int cvu;
    float saldo_en_billetera;
    int movimiento_cuenta;
    float *historial;
}typedef cuenta;
struct 
{
    char apellido[mx];
    char nombre[mx];
    int dni;
    fecha f_nacimiento;
    char contrasenia[mx];
    cuenta datos_cuenta;
}typedef user;

int mostrarUsuarios(user *clientes,int t_clientes);
int mostrarOpciones();
void cambiarContrasenia(user *clientes, int usuario);
void mostrarSaldo(user *clientes,int usuario);
void agregarFondo(user *clientes,int usuario);
void retirarFondos(user *clientes,int usuario);
void mostrarHistorial(user *clientes,int usuario);
void cargarUsuarios(user *clien,int total);



int main(){
    int usuario_n,opcion_menu,total_clientes;

    int opcion,usuario,historial_j;
    /*
    user juan,lucia;
    juan.datos_cuenta.historial = (float *)malloc(4 * sizeof(float));
    lucia.datos_cuenta.historial = (float *)malloc(4 * sizeof(float));

    float saldo_mas = 0,saldo_menos = 0;
    float movimiento_1[2] = {400,-200};
    float movimiento_2[3] = {600,-100,-50};
    
    user user_1 = {"brito","juan",41374973,{01,01,1998},"juanY",{1234,400,2,NULL}};
    user user_2 = {"leal","lucia",41374873,{12,22,2000},"luciaY",{1234,500,3,NULL}};
    
    user *clientes = (user *)malloc(2 *sizeof(user));
    clientes[0] = user_1;
    clientes[1] = user_2;
    */
   printf("Cuantos usuarios cargaras:");
   scanf("%d",&total_clientes);
   fflush(stdin);
   user *clientes = (user *)malloc(total_clientes * sizeof(user));
   cargarUsuarios(clientes,total_clientes);

    do
    {
        usuario_n = mostrarUsuarios(clientes,total_clientes);
    opcion_menu = mostrarOpciones();
    //segun opcion
    switch (opcion_menu)
    {
    case 1:
        cambiarContrasenia(clientes,usuario_n);
    break;
    case 2:
        agregarFondo(clientes,usuario_n);
    break;
    case 3:
        retirarFondos(clientes,usuario_n);
    break;
    case 4:
        mostrarSaldo(clientes,usuario_n);
    break;
    case 5:
        mostrarHistorial(clientes,usuario_n);
    break;
    }
   
    } while (opcion_menu != 0);
    

    return 0;
}
int mostrarUsuarios(user *clientes,int t_clientes){
    int usuario;
    
        for (int i = 0; i < t_clientes; i++)
    {
        printf("Usuario '%d'\n apellido:",i+1);
        puts(clientes[i].apellido);
        printf("nombre:");
        puts(clientes[i].nombre);
        printf("DNI:%d",clientes[i].dni);
        printf("\n###########\n");
    }
    printf("Selecione el usuario o 0 para finalisar:");
    scanf("%d",&usuario);
        
    return usuario;
    
    
}
int mostrarOpciones(){
    int opcion;
        printf("1-Cambiar contrasenia\n");
        printf("2-Agregar fondo\n");
        printf("3-Retirar fondo\n");
        printf("4-Consultar saldo\n");
        printf("5-informacion de la cuenta\n");
        printf("6-historial de transaccione\n");
        printf("7-Volver al menu principal\n");
        printf("Opcion:");
        scanf("%d",&opcion);
        return opcion;
}
void cambiarContrasenia(user *clientes, int usuario){
    int valido = 1;
    char contra[mx],nueva_contra[mx];
    do
    {
        printf("Ingrse contrasenia actual:");
        gets(contra);
        valido = strcmp(contra,clientes[usuario-1].contrasenia);
        if (valido != 0)
        {
            printf("\nContrasenia incorrecta\n");
        }
        
        
    } while (valido != 0);
    printf("Ingrese la nueva ontrasenia:");
    fflush(stdin);
    gets(nueva_contra);
    strcpy(clientes[usuario-1].contrasenia,nueva_contra);
    printf("Contrasenia cambiada\n");

}
void mostrarSaldo(user *clientes,int usuario){
    printf("\nSaldo actual $%.1f\n",clientes[usuario-1].datos_cuenta.saldo_en_billetera);
}
void agregarFondo(user *clientes,int usuario){
    float dinero_mas;
    printf("\nIngrese el monto a agregar:$");
    scanf("%f",&dinero_mas);
    clientes[usuario-1].datos_cuenta.saldo_en_billetera += dinero_mas;


    //nuevo arreglo expandir memoria
    int incremento = clientes[usuario-1].datos_cuenta.movimiento_cuenta +=1;
    float *historial_mas = (float *)realloc(clientes[usuario-1].datos_cuenta.historial,(incremento) *sizeof(float));
    //aggelo expandido
    clientes[usuario-1].datos_cuenta.historial = historial_mas;
    //incremento movimiento para cargar en el arreglo el nuevo movimiento
    clientes[usuario-1].datos_cuenta.historial[incremento -1] = dinero_mas;
    printf("Se cargo corretamente\n");

}
void retirarFondos(user *clientes,int usuario){
    float dinero_menos;
    printf("Ingrese el monto a extraer:$");
    scanf("%f",&dinero_menos);
    clientes[usuario-1].datos_cuenta.saldo_en_billetera -= dinero_menos;
}
void mostrarHistorial(user *clientes,int usuario){
    for (int i = 0; i < clientes[usuario-1].datos_cuenta.movimiento_cuenta; i++)
    {
        printf("%d movimiento:%.1f\n",i+1,clientes[usuario-1].datos_cuenta.historial[i]);
    }
    
}
void cargarUsuarios(user *clien,int total){
    
    for (int i = 0; i < total; i++)
    {
        printf("Apellido:");
    gets(clien[i].apellido);
    printf("Nombre:");
    gets(clien[i].nombre);
    printf("contrasenia:");
    gets(clien[i].contrasenia);
    fflush(stdin);
    printf("DNI:");
    scanf("%d",&clien[i].dni);
    
    printf("Saldo en villetera:");
    scanf("%f",&clien[i].datos_cuenta.saldo_en_billetera);
    clien[i].datos_cuenta.movimiento_cuenta = 1;
    clien[i].datos_cuenta.historial = (float *)malloc(1 * sizeof(float));
    }

}
