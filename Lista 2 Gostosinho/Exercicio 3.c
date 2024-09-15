#include <stdio.h>
#include <locale.h>


int main (){
    setlocale (LC_ALL,"portuguese");
    
    float salario;
    char avaliacao;
    
    printf ("Digite o valor do seu salario\n");
    scanf ("%f", &salario);
    
    printf ("Avalie o seu desempenho com: (a,b,c)\n");
    scanf (" %c", &avaliacao);
    
    switch (avaliacao)
    	{
    	case 'a':
    	case 'A':
     		printf("Você recebeu uma bonificação de 15%% no seu salario\nSeu salario atual é: %.2f", salario += salario * 0.15);       
        	break;
    	case 'b':
    	case 'B':
       		printf("Você recebeu uma bonificação de 10%% no seu salario\nSeu salario atual é: %.2f", salario += salario * 0.10);       
        	break;
    	case 'c':
    	case 'C':
       		printf("Você recebeu uma bonificação de 5%% no seu salario\nSeu salario atual é: %.2f", salario += salario * 0.05);       
        	break;
    	default:
        	printf("Avaliação inválida, tente novamente.\n\n");
        	main();
        break;
    }
    

	
   
	return 0;
}
