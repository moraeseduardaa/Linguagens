#include <stdio.h>

int main(){
	float n1,n2,n3,n4,result;
	char escolha;
	printf ("Digite uma letra para media: \nA - Media aritmetica\nP - Media ponderada\nH - Media harmonica\n");
	scanf ("%c",&escolha);
	printf ("Digite o primeiro numero: ");
	scanf ("%f",&n1);
	printf ("Digite o segundo numero: ");
	scanf ("%f",&n2);
	printf ("Digite o terceiro numero: ");
	scanf ("%f",&n3);
	printf ("Digite o quarto numero: ");
	scanf ("%f",&n4);
	if (escolha == 'A'){
		result = (n1 +n2 +n3 +n4)/4;
	}
	if (escolha == 'P'){
		result = (2*n1 + 3*n2 + 5*n3 + 10*n4)/20;
	}
	if (escolha == 'H'){
		result = 4/((1/n1) + (1/n2) + (1/n3) + (1/n4));
	}
	if (result >= 6){
		printf("Media %c: %.2f    Aprovado!!",escolha,result);
	}else{
		printf("Media %c: %.2f    Reprovado!!",escolha,result);
	}
	return 0;
}
