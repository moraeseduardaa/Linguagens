#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	
    setlocale (LC_ALL,"portuguese");
    
	int ano;
	
	printf("Digite o ano para descobrir se ele é bissexto: \n");
	scanf("%d", &ano);
	
	  if (ano % 4 == 0 && ano % 400 == 00){
	    printf("O ano %d é bissexto.\n", ano);
	  }else if (ano % 100 != 0){
	    printf("O ano %d não é bissexto.\n", ano);
	  }else
	    printf("O ano %d não é bissexto.\n", ano);
	  
	
	return 0;
}
