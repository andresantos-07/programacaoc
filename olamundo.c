# include <stdio.h>
int main ()
{
    int dia;

    printf("Entre com o valor do dia:\n");
    scanf("%d", &dia);

    switch (dia)
    {

    case 1:
        printf("Domingo\n", dia);
        break;

    case 2:
        printf("Segunda-feira\n", dia);
        break;

    case 3:
        printf("Terça-feira\n", dia);
        break;

    case 4:
        printf("Quarta-feira\n", dia);
        break;

    case 5:
        printf("Quinta-feira\n", dia);
        break;

    case 6:
        printf("Sexta-feira\n", dia);
        break;

    case 7:
        printf("Sábado\n", dia);
        break;

    default:
        printf("Dia inválido!\n", dia);
    }
  return 0;
}
