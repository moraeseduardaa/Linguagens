#include <stdio.h> 
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
   
    float consumo, distancia, precocombustivel, custototal;        

    printf("Digite a distância em km: \n");
    scanf("%f", &distancia);

    printf("Digite o consumo médio de combustível km/litro : \n");
    scanf("%f", &consumo);

    printf("Digite o preço do combustivel: \n");
    scanf("%f", &precocombustivel);

    custototal = (distancia / consumo) * precocombustivel;

    printf("O custo total da viagem é de R$ %.2f\n", custototal);

    return 0;
}

