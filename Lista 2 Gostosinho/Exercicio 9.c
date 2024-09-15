#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    setlocale (LC_ALL,"Portuguese");
    
    int n1, i, resultado = 0;
    printf("Digite um número e descubra se ele é primo ou não\n");
    scanf("%d", &n1);
    
    if (n1 < 2) {
	printf ("%d não é um número primo\n", n1);
	return 0;
	}
    
    for (i = 2; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
        resultado++;
   		break;
        }
    }
    
    if (resultado == 0){
    	printf("%d é um número primo\n", n1);
    }else{
    	printf("%d não é um número primo\n", n1);
	}

    return 0;
}
