#include <stdio.h>
#include <stdlib.h>

#define COLS 5

typedef int ArrayLinha[COLS];
ArrayLinha* lptr;

int main(void) {
    int nlinhas = 10;
    lptr = malloc(nlinhas * COLS * sizeof(int));

    for (int lin = 0; lin < nlinhas; lin++) {
        for (int col = 0; col < COLS; col++) {
            lptr[lin][col] = 42;
        }
    }

    return 0;
}
