#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	float compra;
	
	printf("Informe o valor da compra: \n");
	 scanf("%f", &compra);
	
	if (compra <= 0){
		    printf("O valor n�o pode ser menor que 0 \n\n");
			main();	
	    }
		 if (compra < 101){
	        printf("N�o h� desconto.");
    	}else if (compra >100 && compra <=500){
    		compra -= compra * 0.1;
	        printf("O valor da compra com desconto de 10%% � R$ %.2f\n ",compra);
		}else {(compra > 500);
			compra -= compra * 0.2;
			printf("O valor da compra com desconto de 20%% � R$%.2f\n ",compra);
		}
			
	
	 return 0;	
	}
