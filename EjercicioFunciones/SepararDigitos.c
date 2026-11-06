#include <stdio.h>
#include <math.h>
int separarNumero(int);
int residuo(int,int);
int cociente(int,int);

int main(){
    unsigned int Entero = 0;
    puts("Ingresa un numero entre 1 y 32767");
    scanf("%u",&Entero);
    
    separarNumero(Entero);

    return 0;
}
int residuo(int a, int b){
    int resi = a%b;
    return resi;
}
int cociente(int a, int b){
    int coci = a/b;
    return coci;
}
int separarNumero(int num){
    num = num < 1 ? 1 : num > 32767  ? 32767 : num;
    
    //Se usa log10 para sacar cuantos digitos tiene el numero
    int digitos = log10(num)+1;
    
    for (size_t i = digitos;i>=1;i--){
        printf("%d  ",residuo(cociente(num,pow(10.0,i-1)),10));
    }
    return 1;

}