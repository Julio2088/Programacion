#include <stdio.h>

int main(){
    int entero1, entero2;
    puts("Ingresa dos numeros enteros, separados por espacios");
    scanf("%d %d",&entero1,&entero2);
    
    if (entero1 == entero2){
        printf("%d es igual que %d\n",entero1,entero2);
    }
    if (entero1 != entero2){
        printf("%d no es igual que %d\n",entero1,entero2);
    }
    if (entero1 < entero2){
        printf("%d es menor que %d\n",entero1,entero2);
    }
    if (entero1 > entero2){
        printf("%d es mayor que %d\n",entero1,entero2);
    }
    if (entero1 <= entero2){
        printf("%d es menor o igual que %d\n",entero1,entero2);
    }
    if (entero1 >= entero2){
        printf("%d es mayor o igual que %d\n",entero1,entero2);
    }


    return 0;
}