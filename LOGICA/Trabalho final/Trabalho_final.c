#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int fatorialFormacao (int);
int potenciaPoliglota (int);
double salarioBase (double);
double salarioTotal (double, int, int, double);

int main (){
    int TAM, seletor, funcionario = 1, subseletor, i, contador = 0, formacao, poliglota, error = 0, auxcontador = 0;
    double salarioInicial, salarioCalculado, media, total;
    char charseletor, stringseletor[50];

    setlocale(LC_ALL, "");

    printf("Quantos funcionários vc deseja cadastrar? ");
    scanf("%d", &TAM);
    TAM += 2;

    struct Funcionario{
        char nome[50];
        int estudo, linguas, cargo;
        double produtividade, salario;
    } colaborador[TAM];

    while(funcionario < TAM && seletor > 0){
        printf("\n[0] Sair\n[1] Cadastrar novo funcionário\n[2] Calcular salário\n[3] Alterar dados de um funcionário\n[4] Funcionários com salário maior que a média\n[5] Visualizar dados de um funcionário\n");
        printf("\nFuncionários cadastrados: %d de %d\n", contador, TAM-2);
        printf("\nO que deseja fazer? ");
        scanf(" %d", &seletor);
        fflush(stdin);
        switch (seletor)
        {
        case 0:
            printf("\nSalvo com sucesso!");
            break;

        case 1:
            if(contador < TAM-2){
                fflush(stdin);
                printf("Nome: ");
                fgets(colaborador[funcionario].nome, sizeof(colaborador[funcionario].nome), stdin);
                printf("Grau de estudo: ");
                scanf(" %d", &colaborador[funcionario].estudo);
                printf("Quantidade de línguas que fala: ");
                scanf(" %d", &colaborador[funcionario].linguas);
                printf("Cargo que ocupa: ");
                scanf(" %d", &colaborador[funcionario].cargo);
                printf("Índice de produtividade: ");
                scanf(" %lf", &colaborador[funcionario].produtividade);
                fflush(stdin);
                funcionario++;
                contador++;
                break;
            } else {
                printf("\nA quantidade total de funcionários cadastrados foi atingida!\n");
                break;
            }
        case 2:
            if(contador > 0){
                subseletor = 1;
                while(subseletor > 0){
                    printf("\n[0] Cancelar\n");
                    for(i = 1; i < funcionario; i++){
                        printf("[%d] ", i);
                        fputs(colaborador[i].nome, stdout);
                    }
                    printf("\nDe quem deseja calcular o salário? ");
                    scanf("%d", &subseletor);
                    if(subseletor == 0){
                        break;
                    } else{
                        formacao = fatorialFormacao(colaborador[subseletor].estudo);
                        poliglota = potenciaPoliglota(colaborador[subseletor].linguas);
                        salarioInicial = salarioBase(colaborador[subseletor].cargo);
                        salarioCalculado = salarioTotal(salarioInicial, formacao, poliglota, colaborador[subseletor].produtividade);
                        colaborador[subseletor].salario = salarioCalculado;
                        printf("\nO salário dele é: R$ %.2lf\n", salarioCalculado);
                    }
                }
            } else {
                printf("Nao há funcionários cadastrados ainda!\n");
                break;
            }
            break;

            case 3:
            if(contador > 0){
                subseletor = 1;
                fflush(stdin);
                while(subseletor =! 0){
                    printf("\nCancelar\n");
                    for(i = 1; i < funcionario; i++){
                        fputs(colaborador[i].nome, stdout);
                    }
                    printf("\nDe quem deseja alterar os dados? ");
                    fgets(stringseletor, sizeof(stringseletor), stdin);
                    if(strcmp(stringseletor, "Cancelar\n") == 0){
                        break;
                    }
                    fflush(stdin);
                    printf("\n");
                    for(i = 1; i < funcionario; i++){
                        if(strcmp(stringseletor, colaborador[i].nome) == 0){
                            while(subseletor > 0){
                                printf("[0] Sair\n[1] Nome\n[2] Grau de estudo\n[3] Quantidade de línguas que fala\n[4] Cargo que ocupa\n[5] Índice de produtividade\n");
                                printf("\nQual dado deseja alterar? ");
                                fflush(stdin);
                                scanf("%d", &subseletor);
                                switch (subseletor)
                                {
                                case 0:
                                    break;

                                case 1:
                                    fflush(stdin);
                                    printf("Nome: ");
                                    fgets(colaborador[i].nome, sizeof(colaborador[i].nome), stdin);
                                    break;
                                
                                case 2:
                                    printf("Grau de estudo: ");
                                    scanf(" %d", &colaborador[i].estudo);
                                    break;
                                
                                case 3:

                                    printf("Quantidade de línguas que fala: ");
                                    scanf(" %d", &colaborador[i].linguas);
                                    break;
                                
                                case 4:
                                    printf("Cargo que ocupa: ");
                                    scanf(" %d", &colaborador[i].cargo);
                                    break;
                                
                                case 5:
                                    printf("Índice de produtividade: ");
                                    scanf(" %lf", &colaborador[i].produtividade);
                                    break;
                                }
                            }
                        formacao = fatorialFormacao(colaborador[i].estudo);
                        poliglota = potenciaPoliglota(colaborador[i].linguas);
                        salarioInicial = salarioBase(colaborador[i].cargo);
                        salarioCalculado = salarioTotal(salarioInicial, formacao, poliglota, colaborador[i].produtividade);
                        colaborador[i].salario = salarioCalculado;
                        printf("\nO novo salário é: R$ %.2lf\n", colaborador[i].salario);
                        } else{
                            printf("\nNão encontrei esse funcionário!\n");
                        }
                    }
                }
            } else {
                printf("Não há funcionários cadastrados ainda!\n");
                break;
            }
            break;
        
        case 4:
            auxcontador = contador;
            if(contador > 0){
                for(i = 1; i < funcionario; i++){
                    if(colaborador[i].salario < 100){
                        printf("Salário não calculado: ");
                        fputs(colaborador[i].nome, stdout);
                        auxcontador--;
                    } else {
                        total += colaborador[i].salario;
                        media = total / auxcontador;
                    }
                }
                for(i = 1; i < funcionario; i++){
                    if(colaborador[i].salario >= media){
                        printf("\n");
                        fputs(colaborador[i].nome, stdout);
                        printf("Tem um salário de: R$ %.2lf, sendo acima da média.\n", colaborador[i].salario);
                    }
                    }
            } else {
                printf("Não há funcionários cadastrados ainda!\n");
                break;
            }
            break;
        
        case 5:
            if(contador > 0){
                subseletor = 1;
                while(subseletor > 0){
                    printf("\n[0] Cancelar\n");
                    for(i = 1; i < funcionario; i++){
                        printf("[%d] ", i);
                        fputs(colaborador[i].nome, stdout);
                    }
                    printf("\nDe quem deseja ver os dados? ");
                    fflush(stdin);
                    scanf(" %d", &subseletor);
                    if(subseletor == 0){
                        break;
                    } else{
                        printf("Nome: ");
                        fputs(colaborador[subseletor].nome, stdout);
                        printf("Grau de estudo: %d\n", colaborador[subseletor].estudo);
                        printf("Quantidade de línguas que fala: %d\n", colaborador[subseletor].linguas);
                        printf("Cargo que ocupa: %d\n", colaborador[subseletor].cargo);
                        printf("Índice de produtividade: %.1lf\n", colaborador[subseletor].produtividade);
                        if(colaborador[subseletor].salario > 500){
                            printf("Salário: R$ %.2lf\n", colaborador[subseletor].salario);
                        } else {
                            printf("Salário nao calculado ainda!\n");
                        }
                    }
                }
            } else {
                printf("Não há funcionários cadastrados ainda!\n");
                break;
            }
            break;

        default:
            break;
        }
    }

    return 0;
}

int fatorialFormacao (int numero){
    int i, resultado;
    resultado = numero;
    for(i = numero-1; i > 0; i--){
        resultado *= i;
    }
    return resultado;
}

int potenciaPoliglota (int linguas){
    return pow(linguas, 3);
}

double salarioBase (double nivel){
    double salarioBase = 1000, i;
    for(i = nivel-1; i > 0; i--){
        salarioBase += 500;
    }
    return salarioBase;
}

double salarioTotal (double salarioBase, int formacao, int poliglota, double indiceProd){
    double salario;
    if(indiceProd > 0.7){
        salario = (salarioBase + (formacao*100) + (poliglota*100) + (salarioBase*indiceProd));
    } else if(indiceProd <= 0.7 && indiceProd >= 0.4){
        salario = (salarioBase + (formacao*100) + (poliglota*100));
    } else{
        salario = (salarioBase + (formacao*100) + (poliglota*100) - (salarioBase*(0.4 - indiceProd)));
    }
    return salario;
}
