#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    char usuario[50],usuario1[50],senha[50],senha1[50];

    printf("ÁREA DE USUÁRIOS");
    printf("Digite seu usuário:\n ");
    scanf("%s",&usuario);

    printf("Digite sua senha:\n ");
    scanf("%s", &senha);

    printf("Digite seu usuário:\n ");
    scanf("%s",&usuario1);

    printf("Digite sua senha:\n ");
    scanf("%s", &senha1);

 if (strcmp(usuario, usuario1) == 0 && strcmp(senha, senha1) == 0) {
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado\n");
    }




    return 0;

}
