#include <stdio.h>
#include <locale.h>
#include <math.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor,raiz,quadrado;
	
	printf("Digite um n�mero:\n");
	scanf("%d",&valor);
	
	if(valor < 0){
		printf("Necessita ser um n�mero positivo!");
		main();
	}
	
		raiz = sqrt(valor); 
	
	 	quadrado = raiz * raiz;
	 
	if (quadrado == valor) {
	        printf("%d � um quadrado perfeito.\n", valor);
	    } else {
	        printf("%d n�o � um quadrado perfeito.\n", valor);
	}
	
	    return 0;
	}
