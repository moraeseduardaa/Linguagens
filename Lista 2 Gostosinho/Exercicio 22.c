#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    char temp;
    float graus;
    setlocale (LC_ALL,"portuguese");

    printf("Qual temperatura gostaria de converter\n");

    printf("Celsius para Fahrenheit (1)\nFahrenheit para Celsius(2)\n");
    scanf("%c", &temp);
    printf("Informe a temperatura\n");
    scanf("%f", &graus);

    switch (temp)
    {
    case '1':
        graus = (graus * (9.0/5.0)) + 32;
        printf("A temperatura em Fahrenheit é %.2f°\n", graus);
        break;
    case '2':
        graus = (graus - 32) * (5.0/9.0); 
        printf("A temperatura em Celsius é %.2f\n", graus);
        break;

    default:
        printf("Opção Invalída");
        break;
    }


    return 0;
}
