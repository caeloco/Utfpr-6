#include <stdio.h>

int main()
{
    int matriz[5][3], aux;

    printf("Digite os valores da Matriz: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            aux = matriz[i][j];
            if(matriz[i][j] % 2 != 0 || matriz[i][j] < 100) {
                printf("O valor digitado deve ser Par e maior que 100\n");
                j--;
            }
        }
    }


    printf("Matriz0: \n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}