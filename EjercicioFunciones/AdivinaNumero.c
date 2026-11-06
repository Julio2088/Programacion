#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Da una semilla del tiempo actual
    srand(time(NULL));

    //Agarra un numero aleatorio entre 0 y 1000
    int numero = rand()%1000;
    
    int adivinado;
    puts("Intenta adivinar un numero del 1 al 1000");
    //Repite los pasos hasta que el numero sea el numero que adivinaste
    do {
        
        scanf("%d",&adivinado);
        //Si el numero es mas grande entonces decirle que esta muy alto
        if (adivinado>numero){
            puts("Demasiado alto");
        }else if (adivinado<numero) //si el numero es mas pequeño entonces decirle que esta muy bajo
        {
            puts("Demasiado bajo");
        }
        

    } while (adivinado != numero); //si el numero adivinado es el numero entonces romper el bucle
    puts("Adivinaste el numero!"); //decirle al usuario que adivino el numero
    return 0;
}