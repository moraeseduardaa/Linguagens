#include <stdio.h>
#include <locale.h>
#include <math.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char avaliacao;
	float salario;
	
	printf("Digite seu sal�rio:\n ");
	scanf("%f",&salario);
	
	printf("Digite sua avalia��o\n ");
	scanf(" %c",&avaliacao);

	if(avaliacao == 'a'){
			salario += salario * 0.15;
			printf("Seu sal�rio com um b�nus ser� com acr�scimo de 15%%: R$%.2f\n",salario);
		}else if(avaliacao == 'b'){
			salario += salario * 0.10;
			printf("Seu sal�rio com um b�nus ser� com acr�scimo de 10%%: R$%.2f\n",salario);
		}else if(avaliacao == 'c'){
			salario += salario * 0.05;
			printf("Seu sal�rio com um b�nus ser� com acr�scimo de 5%%: R$%.2f\n",salario);
		}else{
			printf("N�o ter� b�nus");
		}
	
	return 0;
	
	}
