#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int codigo;
	
	    printf ("\nInsira o c�digo da sua encomenda:\n");
	    scanf ("%d",&codigo);
	
	   if (codigo < 10000000 || codigo > 99999999){
	        printf ("Codigo Inv�lido\n");
	        main();
		}else{
	    printf ("Codigo V�lido");
	    }
	
	return 0;
	}
