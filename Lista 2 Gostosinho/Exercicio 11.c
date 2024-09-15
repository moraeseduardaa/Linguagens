#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale (LC_ALL,"Portuguese");
	
    float l1, l2, l3;

    printf("\nDigite a medida do primeiro lado: \n");
    scanf("%f", &l1);
    printf("Digite a medida do segundo lado: \n");
    scanf("%f", &l2);
    printf("Digite a medida do terceiro lado: \n");
    scanf("%f", &l3);

    if (l1 <= 0 || l2 <= 0 || l3 <= 0) {
        printf("Os lados devem ser maiores que 0 \n");
        main();
	}
        
    if (l1 == l2 || l2 == l3){
    		printf("É um triangulo equilatero\n");
    	}else if (l1 == l2 || l2 == l3 || l3 == l1){
    		printf("É um triangulo isosceles\n");
		}else{
    		printf("É um triangulo escaleno\n");
		}
	
	return 0;

}
