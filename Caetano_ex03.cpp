#include <stdio.h>

int main()
{
    int matriz[6][4];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 1; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 1; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}