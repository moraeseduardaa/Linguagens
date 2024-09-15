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
     		printf("Voc� recebeu uma bonifica��o de 15%% no seu salario\nSeu salario atual �: %.2f", salario += salario * 0.15);       
        	break;
    	case 'b':
    	case 'B':
       		printf("Voc� recebeu uma bonifica��o de 10%% no seu salario\nSeu salario atual �: %.2f", salario += salario * 0.10);       
        	break;
    	case 'c':
    	case 'C':
       		printf("Voc� recebeu uma bonifica��o de 5%% no seu salario\nSeu salario atual �: %.2f", salario += salario * 0.05);       
        	break;
    	default:
        	printf("Avalia��o inv�lida, tente novamente.\n\n");
        	main();
        break;
    }
    

	
   
	return 0;
}
