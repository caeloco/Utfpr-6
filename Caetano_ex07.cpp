#include <stdio.h>

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    int matriz1[3][3], matriz2[3][3], matriz3[3][3];
    char opcao;

    printf("Opcao 1 - somar matrizes \nOpcao 2 - subtrair matrizes \nOpcao 3 - multiplicar matrizes \nOpcao 4 - matriz oposta\nOpcao S - sair\n");
    scanf(" %c", &opcao);
    limparBuffer();
    do
    {
        if (opcao == '4')
        {
            printf("Digite os valores da Matriz 1: \n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    scanf("%d", &matriz1[i][j]);
                }
            }

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz3[i][j] = matriz1[i][j] * -1;
                }
            }

            printf("Matriz3: \n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%d ", matriz3[i][j]);
                }
                printf("\n");
            }

            printf("Opcao 1 - somar matrizes \nOpcao 2 - subtrair matrizes \nOpcao 3 - multiplicar matrizes \nOpcao 4 - matriz oposta\nOpcao S - sair\n");
            scanf(" %c", &opcao);
            limparBuffer();
            break;
        }

        printf("Digite os valores da Matriz 1: \n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
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
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
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
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }
        }

        else if (opcao == '2')
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
                }
            }
        }

        else if (opcao == '3')
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz3[i][j] = (matriz1[i][0] * matriz2[0][j]) + (matriz1[i][1] * matriz2[1][j]) + (matriz1[i][2] * matriz2[2][j]);
                }
            }
        }

        printf("Matriz3: \n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", matriz3[i][j]);
            }
            printf("\n");
        }

        printf("Opcao 1 - somar matrizes \nOpcao 2 - subtrair matrizes \nOpcao 3 - multiplicar matrizes \nOpcao 4 - matriz oposta\nOpcao S - sair\n");
        scanf(" %c", &opcao);
        limparBuffer();
    } while (opcao != 'S');

    return 0;
}