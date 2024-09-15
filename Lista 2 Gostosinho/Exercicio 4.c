#include <stdio.h>
#include <locale.h>
#include <math.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor,raiz,quadrado;
	
	printf("Digite um número:\n");
	scanf("%d",&valor);
	
	if(valor < 0){
		printf("Necessita ser um número positivo!");
		main();
	}
	
		raiz = sqrt(valor); 
	
	 	quadrado = raiz * raiz;
	 
	if (quadrado == valor) {
	        printf("%d é um quadrado perfeito.\n", valor);
	    } else {
	        printf("%d não é um quadrado perfeito.\n", valor);
	}
	
	    return 0;
	}
