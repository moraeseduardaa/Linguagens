#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale (LC_ALL,"Portuguese");

    float aluno1,aluno2,aluno3,media;

    printf("Informe a 1° nota:\n");
    scanf("%f",&aluno1);

    printf("Informe a 2° nota:\n");
    scanf("%f",&aluno2);

    printf("Informe a 3° nota:\n");
    scanf("%f",&aluno3);

    media = (aluno1 + aluno2 + aluno3) / 3;

    printf("A média das notas é: %f\n",media);

    return 0;

}
