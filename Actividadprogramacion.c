#include <stdio.h>
#include <stdint.h>


int main (){
    //------------------------------------------------ 1
    int Interger = 12;
    float Flotante = 2.8;
    double Doble = 2.484848;
    char Character = 'u';
    char Palabra[15] = "aeaeaerer";

    printf("%d\n",Interger);
    printf("%f\n",Flotante);
    printf("%lf\n",Doble);
    printf("%c\n",Character);
    printf("%s\n",Palabra);

    //------------------------------------------------- 2
    int Entero;
    float Decimal;
    char Caracter;
    puts("Pon un entero");
    scanf(" %d",&Entero);
    puts("Pon un decimal");
    scanf(" %f",&Decimal);
    puts("Pon un caracter");
    scanf(" %c",&Caracter);

    printf("Elegiste %d, %f, %c\n",Entero,Decimal,Caracter);

    //------------------------------------------- 3
    int Entero2;
    puts("Pon dos enteros, separados por espacio ");
    scanf(" %d %d",&Entero,&Entero2);
    printf("Su suma es %d\n",Entero+Entero2);
    printf("Su resta es %d\n",Entero-Entero2);
    printf("Su division es %d\n",Entero/Entero2);
    printf("Su multiplicacion %d\n",Entero*Entero2);

    //-------------------------------------------------- 4
    float Decimal2;
    puts("Pon dos numeros con decimal, separados por espacio ");
    scanf(" %f %f",&Decimal,&Decimal2);
    printf("Su multiplicacion es %.2f\n",Decimal*Decimal2);

    //----------------------------------------------- 5
    char Nombre[15];
    char Inicial;

    puts("Pon tu nombre");
    scanf(" %15s",&Nombre);
    puts("Pon tu inicial");
    scanf(" %c",&Inicial);
    printf("Hola %s! tu inicial es %c\n",Nombre,Inicial);

    //--------------------------------- 6
    short int Corto = 3;
    long int Largo = 484;
    unsigned int SinSigno = 48;
    long long LargoLargo = 9498;

    printf("Short: %d bytes, valor: %d\n",sizeof(Corto),Corto);
    printf("Long: %d bytes, valor: %d\n",sizeof(Largo),Largo);
    printf("Unsigned: %d bytes, valor: %d\n",sizeof(SinSigno),SinSigno);
    printf("Long long: %d bytes, valor: %d\n",sizeof(LargoLargo),LargoLargo);

    //------------------------------------------------------- 7
    int8_t Entero8 = 125;
    uint16_t EnteroSinSigno = 255;
    int32_t Entero32 = 500;

    printf("Int8: %d bytes, valor: %d\n",sizeof(Entero8),Entero8);
    printf("UInt16: %d bytes, valor: %d\n",sizeof(EnteroSinSigno),EnteroSinSigno);
    printf("Int32: %d bytes, valor: %d\n",sizeof(Entero32),Entero32);

    //---------------------------------------------- 8
    printf("Pon un entero y un flotante, en orden y separado con espacio\n");
    scanf(" %d %f",&Entero,&Flotante);

    double Resultado = Entero/Flotante;
    printf("La division es %lf\n",Resultado);

    //------------------------------------- 9
    puts("Pon tu nombre, edad, altura en centimetros y letra inicial");
    scanf("%s %d %d %c",&Nombre,&Entero2,&Entero8,&Caracter);

    printf("Tu nombre es %s\n",Nombre);
    printf("Tu edad es %d\n",Entero8);
    printf("Mides %d\n",Entero2);
    printf("Tu inicial es %c\n",Caracter);

    //------------------------------------- 10
    int Numero1 = 5;
    int32_t Numero2 = 5;

    printf("Int: %d bytes\n",sizeof(Numero1));
    printf("Int32: %d bytes\n",sizeof(Numero2));

    printf("son iguales? %d",sizeof(Numero1)==sizeof(Numero2));

    return 0;
}