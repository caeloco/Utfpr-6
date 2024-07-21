#include <stdio.h>

int main()
{
    int matriz[3][5]  = {100, 70, 40, 10, -20,
                         90, 60, 30, 0, -30,
                         80, 50, 20, -10, -40};
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}