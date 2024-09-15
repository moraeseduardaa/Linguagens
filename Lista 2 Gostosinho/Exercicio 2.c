#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");

	int valor;
	int notas100, notas50, notas20, notas10, notas5;

	printf("Informe o valor que deseja sacar R$");
	scanf("%d",&valor);

	if (valor <= 0 || valor % 5 != 0){
		printf("Valor inválido, informe um valor positivo e múltiplo de 5 \n");
		main ();
	}

		notas100 = valor / 100;
		valor %= 100;

		notas50 = valor / 50;				
		valor %= 50;

		notas20 = valor / 20;
		valor %= 20;

		notas10 = valor / 10;
		valor %= 10;

		notas5 = valor / 5;
			valor %= 5;
	printf("Total de notas no saque \n");
	printf("R$100: %d\n",notas100);
	printf("R$50: %d\n",notas50);
	printf("R$20: %d\n",notas20);
	printf("R$10: %d\n",notas10);
	printf("R$05: %d\n",notas5);

return 0;
}
