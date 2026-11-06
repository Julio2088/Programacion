#include <stdio.h>
#include <math.h>
//prototipo funciones
int separarNumero(int);
int residuo(int,int);
int cociente(int,int);

int main(){
    unsigned int Entero = 0;
    puts("Ingresa un numero entre 1 y 32767");
    scanf("%u",&Entero);
    
    separarNumero(Entero); //llama al a funcion

    return 0;
}
int residuo(int a, int b){ //calcula el residuo de la division b/a
    int resi = a%b;
    return resi;
}
int cociente(int a, int b){ //calcula el cociente de la division a/b
    int coci = a/b;
    return coci;
}
int separarNumero(int num){
    num = num < 1 ? 1 : num > 32767  ? 32767 : num; //hace que el numero este dentro del rango
    
    //Se usa log10 para sacar cuantos digitos tiene el numero
    int digitos = log10(num)+1; //usa matematicas para sacar la cantidad de digitos que tiene el numero
    
    for (size_t i = digitos;i>=1;i--){ //repite por la cantidad de digitos que tiene el numero
        //primero saca si es decenas, centenas, etc, usando el poder de 10, y siendo dividido entre el numero, el resultado siendo dividido entre 10 para sacar el digito
        printf("%d  ",residuo(cociente(num,pow(10.0,i-1)),10)); //imprime separado por espacios
        
    }
    return 1;

}