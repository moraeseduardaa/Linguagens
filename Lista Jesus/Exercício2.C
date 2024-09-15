#include <stdio.h>
int main() {
	int maior,menor,valor;

	printf("Escreva o primeiro numero: ");
	scanf("%d",&valor);
	maior = valor;
	menor = valor;
	
	printf("Escreva o segundo numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("Escreva o terceiro numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
			}
	printf("Escreva o quarto numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("Escreva o quinto numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor < menor){
		menor = valor;
	}
	printf("Maior = %d e Menor = %d",maior,menor);
	
	return 0;
}
