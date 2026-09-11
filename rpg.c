#include <stdio.h>

int main(){
    puts(" _______  ___   _______  __    _  __   __  _______  __    _  ___   ______   _______ ");
    puts("|  _    ||   | |       ||  |  | ||  | |  ||       ||  |  | ||   | |      | |       |");
    puts("| |_|   ||   | |    ___||   |_| ||  |_|  ||    ___||   |_| ||   | |  _    ||   _   |");
    puts("|       ||   | |   |___ |       ||       ||   |___ |       ||   | | | |   ||  | |  |");
    puts("|  _   | |   | |    ___||  _    ||       ||    ___||  _    ||   | | |_|   ||  |_|  |");
    puts("| |_|   ||   | |   |___ | | |   | |     | |   |___ | | |   ||   | |       ||       |");
    puts("| |_|   ||   | |   |___ | | |   | |     | |   |___ | | |   ||   | |       ||       |");
    puts("|_______||___| |_______||_|  |__|  |___|  |_______||_|  |__||___| |______| |_______|");
    puts("----------------------------------------------------------------------------------------");

    char Nombre[30]; //una cadena de caracteres con maximo 30 caracteres
    unsigned short int Edad; //se usa sin signo para que sea positivo, y short, porque no hay edades despues del 255
    unsigned int Nivel; //se usa sin signo tambien para que sea positivo
    float Experiencia; //se usa float para que use decimales, no se ocupa double porque no necesita mucha presicion
    short int CaracterElegido; //un numero para agarrar de la lista de clases una clase
    char Clases[5][10] = { //la lista de clases, del 0 a 5
        "Guerrero",
        "Guerrero",
        "Mago",
        "Arquero",
        "Asesino"
    };
    puts("Ingresa tu nombre");
    scanf(" %s",&Nombre);
    puts("Ingresa tu edad");
    scanf("%u",&Edad);
    puts("Ingresa tu nivel inicial");
    scanf("%u",&Nivel); 
    if (Nivel > 10){
        Nivel = 10;
    }
    else if (Nivel < 0)
    {
        Nivel = 0;
    }
    puts("Ingresa tus puntos de experiencia");
    scanf("%f",&Experiencia);
    puts("Seleciona tu clase, las opciones son, escribe el numero correspondiente de la clase que quieres eligir");
    puts("1) Guerrero");
    puts("2) Mago");
    puts("3) Arquero");
    puts("4) Asesino");
    scanf(" %d",&CaracterElegido);
    
    printf(" Tu nombre es %s y tu edad es %u\n Empiezas con el nivel %u con %0.2f de experiencia\n y elegiste la clase de %s",Nombre,Edad,Nivel,Experiencia,Clases[CaracterElegido]);
  
    return 0;
}