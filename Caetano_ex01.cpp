#include <stdio.h>

int main()
{
    int matriz[4][4]  = {20, 21, 22, 23,
                         24, 25, 26, 27,
                         28, 29, 30, 31,
                         32, 33, 34, 35};
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}