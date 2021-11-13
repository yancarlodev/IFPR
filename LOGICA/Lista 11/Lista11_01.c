#include <stdio.h>

int main (){

    int TAM, i = 1, seletor, pessoa = 0, j, subseletor;
    char charseletor;
    printf("Quantas pessoas deseja cadastrar? ");
    scanf("%d", &TAM);
    TAM += 2;

    struct TPessoa {
        int codigo, idade;
        float altura, peso;
        char nome[50];
        char sexo;
    } cadastro[TAM];

    while(i < TAM && seletor > 0){
        printf("\nO que deseja fazer?\n");
        printf("\n[0] Sair\n[1] Cadastrar nova pessoa\n[2] Alterar dados de uma pessoa\n[3] Excluir uma pessoa\n[4] Mostrar dados de uma pessoa\n[5] Mostrar dados de todas pessoas\n");
        printf("\nPessoas cadastradas: %d\n", pessoa);
        scanf(" %d", &seletor);
        fflush(stdin);
        switch (seletor)
        {
        case 0:
            printf("Salvo com sucesso. Obrigado!\n");
            break;
        case 1:
            cadastro[i].codigo = i;
            printf("Nome: ");
            fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
            fflush(stdin);
            printf("Idade: ");
            scanf(" %d", &cadastro[i].idade);
            printf("Sexo (M ou F): ");
            scanf(" %c", &cadastro[i].sexo);
            printf("Altura e peso: ");
            scanf(" %f %f", &cadastro[i].altura, &cadastro[i].peso);
            printf("\nPessoa cadastrada!\n");
            pessoa++;
            i++;
            break;
        case 2:
            if(pessoa > 0){
                while(subseletor =! 0){
                    printf("\n[0] Cancelar\n");
                    for(j = 1; j <= pessoa; j++){
                        printf("[%d] ", j);
                        fputs(cadastro[j].nome, stdout);
                    }
                    printf("\n");
                    printf("Qual pessoa deseja alterar os dados? ");
                    scanf(" %d", &subseletor);
                    if(subseletor == 0){
                        break;
                    } else if(subseletor > 0){
                        fflush(stdin);
                        printf("Idade: ");
                        scanf(" %d", &cadastro[subseletor].idade);
                        printf("Sexo (M ou F): ");
                        scanf(" %c", &cadastro[subseletor].sexo);
                        printf("Altura e peso: ");
                        scanf(" %f %f", &cadastro[subseletor].altura, &cadastro[subseletor].peso);
                        printf("\nDados alterados!\n");
                    }
                    printf("\nDeseja alterar dados de outra pessoa? (S/N) ");
                    scanf(" %c", &charseletor);
                    if(charseletor == 'n' || charseletor == 'N'){
                        break;
                    }
                }
            } else{
                printf("Ninguem foi cadastrado ainda!\n");
                break;
            }
            break;
        case 3:
            if(pessoa > 0){
                while(subseletor =! 0){
                        printf("[0] Cancelar\n");
                    for(j = 1; j <= pessoa; j++){
                        printf("[%d] ", j);
                        fputs(cadastro[j].nome, stdout);
                    }
                    printf("\n");
                    printf("Qual pessoa deseja excluir? ");
                    scanf(" %d", &subseletor);
                    if(subseletor == 0){
                        break;
                    } else if(subseletor > 0){
                        cadastro[subseletor].codigo -= 1000;
                        cadastro[subseletor].nome[50] = '0';
                        cadastro[subseletor].idade = 0;
                        cadastro[subseletor].sexo = '0';
                        cadastro[subseletor].peso = 0;
                        cadastro[subseletor].altura = 0;
                        pessoa--;
                        printf("Pessoa excluida com sucesso!\n");
                    }
                    printf("\nDeseja excluir outra pessoa? (S/N) ");
                        scanf(" %c", &charseletor);
                        if(charseletor == 'n' || charseletor == 'N'){
                            break;
                        }
                }
            } else{
                printf("Ninguem foi cadastrado ainda!\n");
                break;
            }
            break;
        case 4:
            if(pessoa > 0){
                while(subseletor =! 0){
                    printf("\n[0] Cancelar\n");
                    for(j = 1; j <= pessoa; j++){
                        printf("[%d] ", j);
                        fputs(cadastro[j].nome, stdout);
                    }
                    printf("\n");
                    printf("Qual pessoa deseja ver os dados? ");
                    scanf(" %d", &subseletor);
                    if(subseletor == 0){
                        break;
                    } else if(subseletor > 0){
                        printf("\nCodigo: %d\n", cadastro[subseletor].codigo);
                        printf("Nome: ");
                        fputs(cadastro[subseletor].nome, stdout);
                        printf("Idade: %d\n", cadastro[subseletor].idade);
                        printf("Sexo: %c\n", cadastro[subseletor].sexo);
                        printf("Peso e Altura: %.2f %.2f\n", cadastro[subseletor].peso, cadastro[subseletor].altura);
                    }
                    printf("\nDeseja ver dados de outra pessoa? (S/N) ");
                    scanf(" %c", &charseletor);
                    if(charseletor == 'n' || charseletor == 'N'){
                        break;
                    }
                }
            } else{
                printf("Ninguem foi cadastrado ainda!\n");
                break;
            }
        case 5:
            if(pessoa > 0){
                    printf("Todas pessoas cadastradas\n");
                    for(j = 1; j <= pessoa; j++){
                        printf("\n[%d] ", j);
                        puts(cadastro[j].nome);
                        printf("Idade: %d\n", cadastro[j].idade);
                        printf("Sexo: %c\n", cadastro[j].sexo);
                        printf("Peso e Altura: %.2f %.2f\n", cadastro[j].peso, cadastro[j].altura);
                    }
            } else{
                printf("Ninguem foi cadastrado ainda!\n");
                break;
            }
            break;
        default:
            printf("Por favor, selecione uma opção!\n");
            break;
        }
    }
    printf("Limite de pessoas atingido. Obrigado!\n");

    return 0;
}