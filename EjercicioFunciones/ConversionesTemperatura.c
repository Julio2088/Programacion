#include <stdio.h>
//prototipo funciones
int aCelcius(int);
int aFahrenheit(int);


int main(){
    printf("Celcius\tFahrenheit\t||\tFahrenheit\tCelcius\n"); //abre una tabla
    for (size_t i = 0;i<=212;i++){ //repite 213 veces
        if (i <= 100){ //si el grado en celsius es menor a 100 entonces conviertelo a fahrenheit y imprimelo
            printf("%d\t%d\t",i,aFahrenheit(i));
        }
        else{
            printf("\t\t"); //si esta fuera del rango entonces saltalo
        }
        printf("\t||\t"); //separa tabla
        if (i >= 32){ //si el grado en fahrenheit es mayor a 32 entonces conviertelo a celcius y imprimelo
            printf("%d\t%d\n",i,aCelcius(i));
        }
        else{
            printf("\n"); //si esta fuera del rango entonces solo salta linea
        } 
    }

    return 0;
}

int aCelcius(int Fahrenheit){
    return (Fahrenheit-32)/1.8; //calcula la temperatura celcius de fahrenheit y lo regresa
}
int aFahrenheit(int Celcius){
    return (Celcius*1.8)+32; //calcula la temperatura fahrenheit de celcius y lo regresa
}