#include <stdio.h>

int esPar(int Entero);

int main(){

    int Entero1 = 0;
    int Entero2 = 0;
    int Entero3 = 0;
    int Entero4 = 0;

    puts("Ingresa el primer numero para evaluar si es par o impar");
    scanf("%d",&Entero1);
    puts("Ingresa el segundo numero para evaluar si es par o impar");
    scanf("%d",&Entero2);
    puts("Ingresa el tercer numero para evaluar si es par o impar");
    scanf("%d",&Entero3);
    puts("Ingresa el quarto numero para evaluar si es par o impar");
    scanf("%d",&Entero4);

    printf("%d %s\n",Entero1,esPar(Entero1) ? "es par" : "no es par");
    printf("%d %s\n",Entero2,esPar(Entero2) ? "es par" : "no es par");
    printf("%d %s\n",Entero3,esPar(Entero3) ? "es par" : "no es par");
    printf("%d %s\n",Entero4,esPar(Entero4) ? "es par" : "no es par");

    return 0;
}

int esPar(int Entero){
    if (Entero%2){
        return 0;
    }else{
        return 1;
    }
}