#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int numeros[20];
    int vistos[20] = {0};
    for (size_t i = 0; i <= 20; i++)
    {
        numeros[i] = (rand() % 91) + 10;
    }
    
    for (size_t i = 0; i <= 20; i++)
    {
        int Visto = 0;
        for (size_t j = 0; j <= 20; j++)
        {
            if (numeros[i] == vistos[j]){
                Visto = 1;
            }
        }
        if (Visto == 0){
            vistos[i] = numeros[i];
            printf("%d\n",numeros[i]);
        }
        
    }
    
    

    return 0;
}
