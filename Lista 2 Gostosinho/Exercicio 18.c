#include <stdio.h>
#include <math.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");	
	
    int periodos;
    float capital, juros, montante, taxa;
    
    printf("Digite o valor do capital: \n");
    scanf("%f", &capital);

    printf("Digite a taxa de juros em %%: \n");
    scanf("%f", &taxa);

    printf("Digite o n�mero do per�odo em anos (at� 5): \n");
    scanf("%d", &periodos);

    juros = 1 + (taxa / 100);

    if (periodos == 1) {
        montante = capital * juros;
    } else if (periodos == 2) {
        montante = capital * juros * juros;
    } else if (periodos == 3) {
        montante = capital * juros * juros * juros;
    } else if (periodos == 4) {
        montante = capital * juros * juros * juros * juros;
    } else if (periodos == 5) {
        montante = capital * juros * juros * juros * juros * juros;
    } else {
        printf("N�mero de per�odos inv�lido. Utilize at� 5 per�odos.\n");
        return 1;
    }

    printf("O montante acumulado ap�s %d anos ser� de R$ %.2f\n", periodos, montante);


    return 0;
}
