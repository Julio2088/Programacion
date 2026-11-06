#include <stdio.h>

int aCelcius(int);
int aFahrenheit(int);


int main(){
    printf("Celcius\tFahrenheit\t||\tFahrenheit\tCelcius\n");
    for (size_t i = 0;i<=212;i++){
        if (i <= 100){
        printf("%d\t%d\t",i,aFahrenheit(i));
        }
        else{
            printf("\t\t");
        }
        printf("\t||\t");
        if (i >= 32){
            printf("%d\t%d\n",i,aCelcius(i));
        }
        else{
            printf("\n");
        } 
    }

    return 0;
}

int aCelcius(int Fahrenheit){
    return (Fahrenheit-32)/1.8;
}
int aFahrenheit(int Celcius){
    return (Celcius*1.8)+32;
}