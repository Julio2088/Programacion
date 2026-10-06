#include <stdio.h>

int main(){
    float Resultado;
    float Resultado2;
    float Contador;

    //Rendimiento gasolina
    
    //Inicializar variables
    float Galones;
    float Millas;
   
    //Pedir al usuario los primeros galones usados, -1 para salir
    puts("Ingrese los galones usados (-1 para salir)");
    scanf("%f",&Galones);
    //Mientras que los galones usados no sea EOF
    while (Galones != EOF)
    {
        //Pedir al usuario las millas recorridas
        puts("Ingrese las millas recorridas");
        scanf("%f",&Millas);
        //Calcular las millas por galon
        Resultado = Millas/Galones;
        //Sumar al promedio las millas por galon
        Resultado2 += Resultado;
        //Incrementar al contador 1
        Contador++;
        //Imprimir millas por galon
        printf("Las millas por galon para este tanque fueron: %.2f\n",Resultado);

        //Pedir al usuario los siguentes galones usados
        puts("Ingrese los galones usados (-1 para salir)");
        scanf("%f",&Galones);
        
    }
    //Si los galones no son EOF, calcular e imprimir el promedio total
    if (Galones!=EOF){
    printf("El promedio total de millas por galon fue: %0.2f\n",Resultado2/Contador);
    }

    //Límite de crédito

    //Inicializar variables
    int NumeroCuenta;
    float SaldoInicial;
    float Cargos;
    float Abonos;
    float LimiteCredito;

    //Pedir al usuario el numero de cuenta, -1 para salir
    puts("Ingrese numero de cuenta (-1 Para salir)");
    scanf("%d",&NumeroCuenta);

    //Mientras que el numero de cuenta no sea EOF
    while (NumeroCuenta != EOF)
    {
        //Pedir al usuario el saldo inicial
        puts("Ingrese saldo inicial");
        scanf("%f",&SaldoInicial);
        //Pedir al usuario el total de cargos
        puts("Ingrese total de cargos");
        scanf("%f",&Cargos);
        //Pedir al usuario el total de abonos
        puts("Ingrese total de abonos");
        scanf("%f",&Abonos);
        //Pedir al usuario el limite de credito
        puts("Ingrese limite de credito");
        scanf("%f",&LimiteCredito);
        //Calcular el saldo
        Resultado = SaldoInicial + Cargos - Abonos;
        //Si el limite de credito es mayor al saldo
        if (LimiteCredito<Resultado){
            //Imprimir la cuenta, limite de credito y saldo
            printf("Cuenta: %d\n",NumeroCuenta);
            printf("Limite de credito: %0.2f\n",LimiteCredito);
            printf("Saldo: %0.2f\n",Resultado);
            //Imprimir que el limite de credito fue excedido
            puts("Limite de credito excedido");
        }
        //Pedir el numero de la cuenta
        puts("Ingrese numero de cuenta (-1 Para salir)");
        scanf("%d",&NumeroCuenta);
    }
    
    //Comision por ventas

    //Inicializar variables
    float Ventas;

    //Pedir al usuario las ventas en dolares, -1 para salir
    puts("Ingrese las ventas en dolares (-1 para salir)");
    scanf("%f",&Ventas);
    //Mientras que ventas no sea EOF
    while (Ventas != EOF)
    {
        //Calcular e imprimir la comision
        printf("El resultado es %0.2f\n",(200+(Ventas*0.09)));
        
        //Pedir al usuario las ventas en dolares, -1 para salir
        puts("Ingrese las ventas en dolares (-1 para salir)");
        scanf("%f",&Ventas);
    }
    
    //interes

    //Inicializar variables
    float Capital;
    float TasaInteres;
    int NumDias;

    //Pedir al usuario la capital del prestamo, -1 para salir
    puts("Ingrese la capital del prestamo (-1 para salir)");
    scanf("%f",&Capital);
    //Mientras que capital no sea EOF
    while (Capital != EOF)
    {
        //Pedir al usuario la tasa de interes
        puts("Ingrese la tasa de interes");
        scanf("%f",&TasaInteres);
        //Pedir al usuario el plazo de dias del prestamo
        puts("Ingrese el plazo de dias del prestamo");
        scanf("%d",&NumDias);
        //Calcular e imprimir el cargo por interes
        printf("El cargo por interes es $%0.2f\n",Capital*TasaInteres*NumDias/365);

        //Pedir al usuario la capital del prestamo, -1 para salir
        puts("Ingrese la capital del prestamo (-1 para salir)");
        scanf("%f",&Capital);
    }
    
    //salario

    //Inicializar variables
    int HorasTrabajadas;
    float Tarifa;

    //Pedir al usuario el numero de horas trabajadas, -1 para salir
    puts("Ingrese el numero de horas trabajadas (-1 para salir)");
    scanf("%d",&HorasTrabajadas);
    //Mientras que horas trabajadas no sea EOF
    while (HorasTrabajadas != EOF)
    {
        //Pedir al usuario la tarifa por hora
        puts("Ingrese la tarifa por hora del trabajador");
        scanf("%f",&Tarifa);

        //Calcular e imprimir el salario
        //Multiplicar horas trabajadas por la tarifa, si las horas trabajadas son mas de 40, sumar la multiplicacion horas despues de 40 por la tarifa y media, si no, sumar 0
        printf("El salario es: $%0.2f\n",((HorasTrabajadas*Tarifa)+(HorasTrabajadas > 40 ? ((HorasTrabajadas-40)*(Tarifa+Tarifa/2)) : 0)));

        //Pedir al usuario el numero de horas trabajadas, -1 para salir
        puts("Ingrese el numero de horas trabajadas (-1 para salir)");
        scanf("%d",&HorasTrabajadas);
    }
    

    return 0;
}