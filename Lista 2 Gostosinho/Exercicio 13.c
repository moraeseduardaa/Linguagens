#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    int pontos;
    setlocale (LC_ALL,"portuguese");			
    
    printf ("Digite a quantidade de pontos para ver sua bonifica��o de 0 � 100: \n");
    scanf("%d", &pontos);

    if ( pontos <= 10){
        printf("Sem bonifica��o, se esfor�e mais!!!");
    }
    else if (pontos > 10 && pontos <=50){
        printf("Ganhe 15%% de bonifica��o salarial");
    }else{
        printf("Ganhe 20%% de bonifica��o salarial + 200 de VA");
    }





    return 0;
}
