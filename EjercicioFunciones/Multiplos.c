#include <stdio.h>

int esMultiplo(int,int);

int main(){

    int Entero1 = 10;
    int Entero2 = 0;
    
    for (size_t i = 1; i <= 5;i++){
        puts("Ingresar un par de enteros");
        scanf("%d %d",&Entero1,&Entero2);
        if (esMultiplo(Entero1,Entero2)){
            printf("%d es multiplo de %d\n", Entero2,Entero1);
        }
        else{
            printf("%d no es multiplo de %d\n", Entero2,Entero1);
        }
    }


    return 0;
}

int esMultiplo(int Entero,int Multiplo){
    if ((Entero%Multiplo) == 0){
        return 1;
        
    }
    else{
        return 0;
    }
}