#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nlinhas = 5; /* Ambas nlinhas e ncols devem ser avaliadas */
    int ncols = 10;  /* ou lidas em tempo de execução */
    int** linhaptr;
    linhaptr = malloc(nlinhas * sizeof(int*));

    if (linhaptr == NULL) {
        puts("\nFalha ao alocar memória para ponteiros de linha.\n");
        exit(0);
    }

    printf("\n\n\nIndice\t Ponteiro(hex)\t Ponteiro(dec)\t Dif.(dec)");

    for (int linha = 0; linha < nlinhas; linha++) {
        linhaptr[linha] = malloc(ncols * sizeof(int));

        if (linhaptr[linha] == NULL) {
            printf("\nFalha ao alocar memória para linha[%d]\n", linha);
            exit(0);
        }

        printf("\n%d\t %p\t %ld", linha, linhaptr[linha], (long)linhaptr[linha]);

        if (linha > 0) {
            printf("\t %d", (int)(linhaptr[linha] - linhaptr[linha - 1]));
        }
    }

    return 0;
}
