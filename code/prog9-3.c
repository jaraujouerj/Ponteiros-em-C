#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int** lptr;
    int* aptr;
    int* testptr;
    int k;
    int nlinhas = 5; /* Ambas nlinhas e ncols devem ser avaliadas */
    int ncols = 8;   /* ou lidas em tempo de execução */
    
    /* agora alocamos a memória para o array */
    aptr = malloc(nlinhas * ncols * sizeof(int));

    if (aptr == NULL) {
        puts("\nFalha ao alocar memória para o array");
        exit(0);
    }

    /* em seguida, alocamos espaço para os ponteiros para as linhas */
    lptr = malloc(nlinhas * sizeof(int*));

    if (lptr == NULL) {
        puts("\nFalha ao alocar memória para ponteiros");
        exit(0);
    }

    /* e agora nós 'apontamos' os ponteiros */
    for (k = 0; k < nlinhas; k++) {
        lptr[k] = aptr + (k * ncols);
    }

    /* Agora ilustramos como os ponteiros de linha são incrementados */
    printf("\n\nIlustrando como os ponteiros de linha são incrementados");
    printf("\n\nIndice\t Ponteiro(hex)\t Dif.(dec)");

    for (int lin = 0; lin < nlinhas; lin++) {
        printf("\n%d\t %p", lin, lptr[lin]);

        if (lin > 0) {
            printf("\t %ld", (lptr[lin] - lptr[lin - 1]));
        }
    }

    printf("\n\nE agora imprimimos o array\n");

    for (int lin = 0; lin < nlinhas; lin++) {
        for (int col = 0; col < ncols; col++) {
            lptr[lin][col] = lin + col;
            printf("%3d", lptr[lin][col]);
        }

        putchar('\n');
    }

    puts("\n");
    /* e aqui ilustramos que estamos, de fato, lidando com um array
     * bidimensional em um bloco contíguo de memória. */
    printf("E agora demonstramos que eles são contíguos na memória\n");
    testptr = aptr;

    for (int lin = 0; lin < nlinhas; lin++) {
        for (int col = 0; col < ncols; col++) {
            printf("%3d", *(testptr++));
        }

        putchar('\n');
    }

    return 0;
}
