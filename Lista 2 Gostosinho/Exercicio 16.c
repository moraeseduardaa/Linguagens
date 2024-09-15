#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"Portuguese");
	
	int pacote, NPessoas;
	float PrecoPessoa, CustoTotal, desconto = 0;
	
	printf ("Pacotes de viagem:\n");
	printf ("1-Pacote de 3 dias R$ 1500 por pessoa\n");
	printf ("2-Pacote de 5 dias R$ 2500 por pessoa\n");
	printf ("3-Pacote de 7 dias R$ 3500 por pessoa\n");
	
	printf ("Escolha o pacote 1, 2 ou 3: \n");
	scanf ("%d", &pacote);
	
	printf ("Digite o número de pessoas no grupo: \n");
	scanf ("%d", &NPessoas);
	
	if (pacote == 1) {
		PrecoPessoa = 1500;
	
	} else if (pacote == 2) {
		PrecoPessoa = 2500;
	
	} else if (pacote == 3) {
		PrecoPessoa = 3500;
	
	} else {
		printf ("Pacote inválido.\n");
		return 1;
	}
	
	CustoTotal = PrecoPessoa * NPessoas;
	
	if (NPessoas >= 5 && NPessoas <= 9) {
		desconto = 0.05;
	
	} else if (NPessoas >= 10 && NPessoas <= 20) {
		desconto = 0.10;
	
	} else if (NPessoas > 20) {
		desconto = 0.15;
	}
	
	if (desconto > 0) {
		CustoTotal = CustoTotal - (CustoTotal * desconto);
		printf ("Desconto de %.0f%% aplicado\n", desconto * 100);
	
		} else {
		printf ("Nenhum desconto.\n");
		}
	
		printf ("O custo total da viagem é: R$ %.2f \n", CustoTotal);
	
	return 0;
}
