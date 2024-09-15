#include <stdio.h>
#include <locale.h>
#include <math.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char avaliacao;
	float salario;
	
	printf("Digite seu salário:\n ");
	scanf("%f",&salario);
	
	printf("Digite sua avaliação\n ");
	scanf(" %c",&avaliacao);

	if(avaliacao == 'a'){
			salario += salario * 0.15;
			printf("Seu salário com um bônus será com acréscimo de 15%%: R$%.2f\n",salario);
		}else if(avaliacao == 'b'){
			salario += salario * 0.10;
			printf("Seu salário com um bônus será com acréscimo de 10%%: R$%.2f\n",salario);
		}else if(avaliacao == 'c'){
			salario += salario * 0.05;
			printf("Seu salário com um bônus será com acréscimo de 5%%: R$%.2f\n",salario);
		}else{
			printf("Não terá bônus");
		}
	
	return 0;
	
	}
