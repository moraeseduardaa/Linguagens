#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int quantidade1,quantidade2,quantidade3,quantidade4,quantidade5;
		float total1,total2,total3,total4,total5,totaldacompra;
		float produto1 = 1.99;
		float desconto1 = 0.95;
		float produto2 = 2.99;
		float desconto2 = 0.90;
		float produto3 = 3.99;
		float desconto3 = 0.85;
		float produto4 = 4.99;
		float desconto4 = 0.80;
		float produto5 = 5.99;
		float desconto5 = 0.75;
	
		printf("Digite a quantidade do Produto 1: ");
	    scanf("%d", &quantidade1);
	
		printf("Digite a quantidade do Produto 2: ");
	    scanf("%d", &quantidade2);
	   
	    printf("Digite a quantidade do Produto 3: ");
	    scanf("%d", &quantidade3);
	   
	    printf("Digite a quantidade do Produto 4: ");
	    scanf("%d", &quantidade4);
	   
	    printf("Digite a quantidade do Produto 5: ");
	    scanf("%d", &quantidade5);
	   
		total1 = (produto1 * quantidade1) * desconto1;
		total2 = (produto2 * quantidade2) * desconto2;
		total3 = (produto3 * quantidade3) * desconto3;
		total4 = (produto4 * quantidade4) * desconto4;
		total5 = (produto5 * quantidade5) * desconto5;
	
		totaldacompra = total1 + total2 + total3 + total4 + total5;
		
	
	printf("O valor total de sua compra é: %.2f",totaldacompra);
	
	return 0;
}
