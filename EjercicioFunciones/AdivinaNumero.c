#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int numero = rand()%1000;
    
    int adivinado;
    puts("Intenta adivinar un numero del 1 al 1000");
    do {
        
        scanf("%d",&adivinado);

        if (adivinado>numero){
            puts("Demasiado alto");
        }else if (adivinado<numero)
        {
            puts("Demasiado bajo");
        }
        

    } while (adivinado != numero);
    puts("Adivinaste el numero!");
    return 0;
}