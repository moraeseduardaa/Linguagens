#include <stdio.h>

int main() {
    int v1, v2, v3, v4, v5, v6, troca;
    int maior1, maior2, maior3;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &v1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &v2);

    printf("Digite o terceiro valor: \n");
    scanf("%d", &v3);

    printf("Digite o quarto valor: \n");
    scanf("%d", &v4);

    printf("Digite o quinto valor: \n");
    scanf("%d", &v5);

    printf("Digite o sexto valor: \n");
    scanf("%d", &v6);

    maior1 = v1;
    maior2 = v2;
    maior3 = v3;

    if (maior2 > maior1) {
        troca = maior1;
        maior1 = maior2;
        maior2 = troca;
    }

    if (maior3 > maior1) {
        troca = maior1;
        maior1 = maior3;
        maior3 = maior2;
        maior2 = troca;
    } else if (maior3 > maior2) {
        troca = maior2;
        maior2 = maior3;
        maior3 = troca;
    }

    if (v4 > maior1) {
        maior3 = maior2;
        maior2 = maior1;
        maior1 = v4;
    } else if (v4 > maior2) {
        maior3 = maior2;
        maior2 = v4;
    } else if (v4 > maior3) {
        maior3 = v4;
    }

    if (v5 > maior1) {
        maior3 = maior2;
        maior2 = maior1;
        maior1 = v5;
    } else if (v5 > maior2) {
        maior3 = maior2;
        maior2 = v5;
    } else if (v5 > maior3) {
        maior3 = v5;
    }

    if (v6 > maior1) {
        maior3 = maior2;
        maior2 = maior1;
        maior1 = v6;
    } else if (v6 > maior2) {
        maior3 = maior2;
        maior2 = v6;
    } else if (v6 > maior3) {
        maior3 = v6;
    }

    printf("Top: %d, %d, %d",maior3,maior2,maior1);
    
    return 0;
}
