#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>

int main (){
    int pontos;
    setlocale (LC_ALL,"portuguese");			
    
    printf ("Digite a quantidade de pontos para ver sua bonificação de 0 à 100: \n");
    scanf("%d", &pontos);

    if ( pontos <= 10){
        printf("Sem bonificação, se esforçe mais!!!");
    }
    else if (pontos > 10 && pontos <=50){
        printf("Ganhe 15%% de bonificação salarial");
    }else{
        printf("Ganhe 20%% de bonificação salarial + 200 de VA");
    }





    return 0;
}
