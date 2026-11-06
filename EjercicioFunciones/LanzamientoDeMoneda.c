#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzarMoneda();

int main(){
    
    srand(time(NULL));

    int Cruz = 0;
    int Cara = 0;
    for (size_t i = 1;i<= 100;i++){

        int Moneda = lanzarMoneda();
        if (Moneda==0){
            Cruz++;
        }else if (Moneda==1){
            Cara++;
        }
        

    }
    printf("Cara: %d, Cruz: %d\n",Cara,Cruz);
    return 0;
}

int lanzarMoneda(){
    
    

    int rng = rand();
    printf("%d\n",rng);
    return rng%2;
}