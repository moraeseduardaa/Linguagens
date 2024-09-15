#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    setlocale (LC_ALL,"Portuguese");
    
    int n1, i, resultado = 0;
    printf("Digite um n�mero e descubra se ele � primo ou n�o\n");
    scanf("%d", &n1);
    
    if (n1 < 2) {
	printf ("%d n�o � um n�mero primo\n", n1);
	return 0;
	}
    
    for (i = 2; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
        resultado++;
   		break;
        }
    }
    
    if (resultado == 0){
    	printf("%d � um n�mero primo\n", n1);
    }else{
    	printf("%d n�o � um n�mero primo\n", n1);
	}

    return 0;
}
