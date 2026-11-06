#include <stdio.h>
//prototipo funciones
int esMultiplo(int,int);

int main(){

    int Entero1 = 10;
    int Entero2 = 0;
    
    for (size_t i = 1; i <= 5;i++){ //repite 5 veces para 5 pares de enteros
        puts("Ingresar un par de enteros");
        scanf("%d %d",&Entero1,&Entero2);
        if (esMultiplo(Entero1,Entero2)){ //si regresa 1 (verdadero) entonces el multiplo
            printf("%d es multiplo de %d\n", Entero2,Entero1);
        }
        else{
            printf("%d no es multiplo de %d\n", Entero2,Entero1);
        }
    }


    return 0;
}

int esMultiplo(int Entero,int Multiplo){
    //si el residuo de la division entero/multiplo es 0, entonces si es multiplo, pero si no, entonces no lo es
    if ((Entero%Multiplo) == 0){
        return 1; 
        
    }
    else{
        return 0;
    }
}