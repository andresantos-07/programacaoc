#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int opcao;
    int numeroSecreto, palpite;
    char regras[40] = "Não pode,não pode,não pode!!!";

    // Menu do jogo
    printf("***Menu Principal***\n");

    printf("1. Iniciar Jogo\n");

    printf("2. Ver Regras\n");

    printf("3. Sair\n");

    printf("***Escolha uma opção:*** ");

    scanf("%d", &opcao);

    // Função do jogo
    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;

        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite)
        {
            printf("Você acertou!!\n");
            printf("O número secreto é %d\n", numeroSecreto);
        }
        else
        {
            printf("Você errou!!\n");
            printf("O número secreto é %d\n", numeroSecreto);
        }
        break;

    case 2:
        printf("Regras do Jogo: %s\n", regras);
        break;

    case 3:
        printf("Saindo do Jogo\n");
        break;

    default:
        printf("Opção inválida,tente novamente!!\n");
    }
