#include <stdio.h>
int esPrimo(int);

int main(){

    for (size_t i = 1;i<=10000;i++){
        if (esPrimo(i)){
            printf("%d es primo\n",i);
        }
    }

    return 0;
}

//raiz cuadrada de n va mucho mas rapido que n/2
int esPrimo(int Numero){
    if (Numero <= 1) return 0;
    if (Numero <= 3) return 1;
    if (Numero % 2 == 0 || Numero % 3 == 0) return 0;

     for (size_t i = 5; i * i <= Numero; i += 6) {
        if (Numero % i == 0 || Numero % (i + 2) == 0)
            return 0;
    }
    return 1;
}