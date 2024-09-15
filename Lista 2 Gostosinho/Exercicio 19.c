#include <stdio.h>
#include <math.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");	
	
    float temperatura, umidade, sensacao;

    printf("Digite a temperatura em C°\n");
    scanf("%f", &temperatura);

    printf("Digite a umidade relativa em %%\n");
    scanf("%f", &umidade);

    sensacao = temperatura - (100 - umidade) / 5.0;

    printf("A sensação térmica é de %.0f°C \n", sensacao);

    return 0;
}

