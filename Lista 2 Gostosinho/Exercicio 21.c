#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    setlocale (LC_ALL,"pt_BR.UTF-8");
    float emprestimo, taxa, prestacao;
    int numero_parcela;

    printf("Qual o valor empr�stimo\n");
    scanf("%f", &emprestimo);
    printf("Qual o valor da taxa de juros em %%\n");
    scanf("%f", &taxa);
    printf("Em quantas parcelas\n");
    scanf("%d", &numero_parcela);

    taxa /= 100.0;
    prestacao = (emprestimo * (taxa * numero_parcela)) / numero_parcela;
    printf ("Valor da prestan��o mensal � R$%.2f", prestacao);





    return 0;
}
