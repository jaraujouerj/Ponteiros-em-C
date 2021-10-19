#include <stdio.h>
#define LINHAS 5
#define COLUNAS 10

int multi[LINHAS][COLUNAS];

int main(void) {

    for (int lin = 0; lin < LINHAS; lin++) {
        for (int col = 0; col < COLUNAS; col++) {
            multi[lin][col] = lin * col;
        }
    }

    for (int lin = 0; lin < LINHAS; lin++) {
        for (int col = 0; col < COLUNAS; col++) {
            printf("\n%d ", multi[lin][col]);
            printf("%d ", *(*(multi + lin) + col));
        }
    }

    return 0;
}
