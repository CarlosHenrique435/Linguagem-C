#include <stdio.h>

void main(){
    int idade;

    printf("informe sua idade: ");
    scanf("%d", &idade);

    if (idade > 16 && idade < 18){
        printf("Não obrigatorio");
    }
    else if (idade >= 18 && idade < 65){
        printf("Você é obrigado a votar");
    }
    else{
        printf("Não Obrigatorio");
    }
}
