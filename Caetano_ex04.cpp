#include <stdio.h>

int main()
{
    int matriz0[8][8], matriz1[8][8];

    printf("Digite os valores da Matriz0: \n");
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            scanf("%d", &matriz0[i][j]);
            if(matriz0[i][j] != 0) {
                printf("O valor digitado deve ser igual a 0\n");
                j--;
            }
        }
    }

    printf("Digite os valores da Matriz1: \n");
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            scanf("%d", &matriz1[i][j]);
            if(matriz1[i][j] != 1) {
                printf("O valor digitado deve ser igual a 1\n");
                j--;
            }
        }
    }

    printf("Matriz0: \n");
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%d ", matriz0[i][j]);
        }
        printf("\n");
    }

    printf("Matriz1: \n");
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    return 0;
}