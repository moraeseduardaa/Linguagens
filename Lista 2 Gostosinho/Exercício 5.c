#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>   

	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	srand((unsigned int)time(NULL)); 
	
	int numero_aleatorio = rand() % 100 + 1;
	int numero,tentativas = 0;
	const int maximo_tentativas = 10;
	
	printf("Tente adivinhar um número de 1 a 100:\n");
	printf("Você tem 10 tentativas\n");
	
	while(tentativas < maximo_tentativas){
		printf("Qual o seu chute??\n");
		scanf("%d",&numero);
		tentativas++;
	
	
	if(numero < numero_aleatorio){
			printf("O número é maior que %d\n",numero);
		}else if(numero > numero_aleatorio){
			printf("O número é menor que %d\n",numero);
		}else{
			printf("Parábens, você acertou o número correto, ele é: %d\n",numero_aleatorio);
	}
	
	if(tentativas == maximo_tentativas){
			printf("Você usou todas as suas tentativas, o número correto é: %d\n",numero_aleatorio);
		}
	}
	return 0;
	}
