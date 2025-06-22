#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int escolhaJogador, escolhaComputador;
    srand(time(0));

    /* Regras do jogo:
     Pedra ganha de tesoura; Tesoura ganha de papel; Papel ganha de pedra.*/

    // Menu de entradas
    printf("*** Jogo Jokempô ***\n");

    printf("Escolha uma opção:");

    printf("1. Pedra\n");

    printf("2. Papel\n");

    printf("3. Tesoura\n");

    printf("Escolha:");

    scanf("%d", &escolhaJogador);

    // Limitação para computador escolher 1, 2 ou 3.
    escolhaComputador = rand() % 3 + 1;

    // Escolha do jogador.
    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;

    case 2:
        printf("Jogador: Papel\n");
        break;

    case 3:
        printf("Jogador: Tesoura\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    // Escolha do computador.
    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;

    case 2:
        printf("Computador: Papel\n");
        break;

    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    // Lógica da comparação.
    if (escolhaComputador == escolhaJogador)
    {
        printf("Jogo empatou!\n");
    }
    else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("*** Parabéns,você ganhou! ***\n");
    }
    else
    {
        printf("*** Você perdeu! ***\n");
    }

    return 0;
}
