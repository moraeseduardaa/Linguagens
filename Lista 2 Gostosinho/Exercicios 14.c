#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    float quantidade1,quantidade2,quantidade3;
    float desconto1,desconto2,desconto3;
    float total1,total2,total3,total_da_compra;
    float total_desconto1,total_desconto2,total_desconto3;
    float livro_fantasia = 49.99;
    float livro_terror = 34.99;
    float livro_animacao = 45.99;

      printf("Digite a quantidade de livros de fantasia: ");
    scanf("%f", &quantidade1);

    printf("Digite a quantidade de livros de terror: ");
    scanf("%f", &quantidade2);

    printf("Digite a quantidade de livros de animacao: ");
    scanf("%f", &quantidade3);

    total1 = (livro_fantasia * quantidade1);
    total2 = (livro_terror * quantidade2);
    total3 = (livro_animacao * quantidade3);


    if(quantidade1 > 10){
    total_desconto1 = total1 * 0.95;
    }else{
    total_desconto1 = total1;
    }

    if(quantidade2 > 10){
    total_desconto2 = total2 * 0.90;
    }else{;
    total_desconto2 = total2;
    }

    if(quantidade3 > 10){
    total_desconto3 = total3 * 0.90;
    }else{;
    total_desconto3 = total3;
    }
