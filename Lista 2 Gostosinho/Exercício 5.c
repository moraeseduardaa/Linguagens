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
	
	printf("Tente adivinhar um n�mero de 1 a 100:\n");
	printf("Voc� tem 10 tentativas\n");
	
	while(tentativas < maximo_tentativas){
		printf("Qual o seu chute??\n");
		scanf("%d",&numero);
		tentativas++;
	
	
	if(numero < numero_aleatorio){
			printf("O n�mero � maior que %d\n",numero);
		}else if(numero > numero_aleatorio){
			printf("O n�mero � menor que %d\n",numero);
		}else{
			printf("Par�bens, voc� acertou o n�mero correto, ele �: %d\n",numero_aleatorio);
	}
	
	if(tentativas == maximo_tentativas){
			printf("Voc� usou todas as suas tentativas, o n�mero correto �: %d\n",numero_aleatorio);
		}
	}
	return 0;
	}
