#include <stdio.h>

int main() {

    char nombre[20];

    int edad;

    char mensaje[100];


    printf("Ingresa tu nombre: ");

    scanf("%s", &nombre); //se pone el %s para que asi agarre un nombre, junto con el & 

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);




    printf("Escribe un mensaje: ");
    scanf("%s", &mensaje);  //aqui tambien se pone el %s para que agarre un mensaje

    printf("%s", &mensaje);  //aqui se pone el %s para que imprima el mensaje en formato de string




    printf("Hola %s, tienes %d años.\n", nombre, edad);




    return 0;

}