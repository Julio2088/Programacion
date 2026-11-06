#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//prototipo funciones
int lanzarMoneda();

int main(){
    
    srand(time(NULL)); //saca semilla dependiendo del tiempo

    int Cruz = 0;
    int Cara = 0;
    for (size_t i = 1;i<= 100;i++){ //repite 100 lanzados de monedas

        int Moneda = lanzarMoneda();
        if (Moneda==0){ //si es par entonces es cruz
            Cruz++;
        }else if (Moneda==1){ //si es impar entonces es cara
            Cara++;
        }
        

    }
    printf("Cara: %d, Cruz: %d\n",Cara,Cruz); //imprime los resultados
    return 0;
}

int lanzarMoneda(){
    int rng = rand(); //saca un numero aleatorio
    
    return rng%2; //regresa el residuo de la division de 2, siendo 1 o 0
}