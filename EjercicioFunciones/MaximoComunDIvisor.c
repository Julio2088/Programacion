#include <stdio.h>
//prototipo funciones
int mcd(int,int);

int main(){
    int Num1;
    int Num2;
    puts("Ingresa dos numeros");
    scanf("%d %d",&Num1,&Num2);
    printf("Su minimo comun divisor es %d",mcd(Num1,Num2)); //imprime el minimo comun divisor que regresa la funcion
    return 0;
}

int mcd(int a,int b){
    int b2;

    while (b != 0){ //hasta que b no sea 0
        b2 = b; //guarda el valor de b
        b = a%b; //se guarda el residuo de la division de a/b en b, esto lo repite hasta que b sea 0, osea que ya encontro el minimo comun divisor
        a = b2; //se pone el valor de b guardado en a

    }
    return a;
}