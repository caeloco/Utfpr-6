#include <stdio.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int matriz1[2][2], matriz2[2][2], matriz3[2][2];
    char opcao;

    printf("Opcao 1 - somar matrizes \nOpcao 2 - subtrair matrizes \nOpcao S - sair\n");
        scanf(" %c", &opcao);
        limparBuffer();
    do
    {

        printf("Digite os valores da Matriz 1: \n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d", &matriz1[i][j]);
                if (matriz1[i][j] % 2 != 0)
                {
                    printf("O valor digitado deve ser Par\n");
                    j--;
                }
            }
        }

        printf("Digite os valores da Matriz 2: \n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d", &matriz2[i][j]);
                if (matriz2[i][j] % 2 == 0)
                {
                    printf("O valor digitado deve ser Impar\n");
                    j--;
                }
            }
        }

        if (opcao == '1')
        {
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
        }
        else if (opcao == '2')
        {
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
        }

        printf("Matriz3: \n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ", matriz3[i][j]);
            }
            printf("\n");
        }

        printf("Opcao 1 - somar matrizes \nOpcao 2 - subtrair matrizes \nOpcao S - sair\n");
        scanf(" %c", &opcao);
        limparBuffer();
    } while (opcao != 'S');

    return 0;
}