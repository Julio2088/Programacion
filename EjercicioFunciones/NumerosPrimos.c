#include <stdio.h>
//prototipo funciones
int esPrimo(int);

int main(){

    for (size_t i = 1;i<=10000;i++){ //repite 10000 veces
        if (esPrimo(i)){ //si regresa 1, entonces es primo
            printf("%d es primo\n",i);
        }
    }

    return 0;
}

//raiz cuadrada de n va mucho mas rapido que n/2
int esPrimo(int Numero){
    if (Numero <= 1){
        return 0; //si es menor o igual a 1, entonces no es primo
    } 
    if (Numero <= 3){
        return 1; //si pasa la primera prueba y es menor de 3, entonces es primo
    }
    if (Numero % 2 == 0 || Numero % 3 == 0){ //para eliminar varios numeros los cuales no son primos, si es par, entonces no es primo,
                                            //eliminando la mitad de numeros a checar, luego checando si es divisible entre 3,
                                            //haciendo que la cantidad a checar sea raiz cuadrada de 10000
        return 0;
    }
    //se utiliza la regla 6k +- 1 para sacar los numeros primos en un loop
    for (size_t i = 5; i * i <= Numero; i += 6) {
        if (Numero % i == 0 || Numero % (i + 2) == 0) //si se encuentra que el residuo es 0 entonces no es primo
            return 0;
    }
    //una vez que pasaron todas las pruebas, si es primo, y se regresa 1
    return 1;
}