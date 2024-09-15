#include <stdio.h>
#include <locale.h>

	int main() {
	setlocale(LC_ALL,"Portuguese");
	
	float TaxaBase, TaxaKm, KmRodados, ValorT;
	
	printf ("Digite a taxa base do aluguel em R$: \n");
	scanf ("%f", &TaxaBase);
	
	printf ("Digite a taxa adicional por quilômetro rodado em R$: \n");
	scanf ("%f", &TaxaKm);
	
	printf ("Digite a quantidade de quilômetros rodados: \n");
	scanf ("%f", &KmRodados);
	
	ValorT = TaxaBase + (TaxaKm * KmRodados);
	
	printf ("O valor total do aluguel é: R$ %.2f\n", ValorT);
	
	return 0;
}
