#include<stdio.h>
#include<string.h>

int main()
{
    int idade, ano_nasc;
    char nome[30], categoria[30];

    printf("Nome.............: ");
    scanf("%s", &nome);

    printf("Ano de nascimento: ");
    scanf("%d", &ano_nasc);

    idade = 2024 - ano_nasc;

    if(idade>=0.0&&idade<=15){
        strcpy(categoria, "Proibido");

    }else if(idade>=16&&idade<=17){
        strcpy(categoria, "Facultativo");

    }else if(idade>=18&&idade<=65){
        strcpy(categoria, "Obrigatorio");

    }else if(idade>=66&&idade<=100){
        strcpy(categoria, "Opcional");

    }else{
        printf("Dados incorretos");
    }

    printf("Caro(a) %s, com %d anos a sua situacao atual na eleicao eh %s", nome, idade, categoria);

    return(0);
}
