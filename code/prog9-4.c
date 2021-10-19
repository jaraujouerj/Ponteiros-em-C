#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

const int X_DIM = 16;
const int Y_DIM = 5;
const int Z_DIM = 3;

int main(void) {
    /* primeiro separamos a memória para o próprio array */
    char* espaco = malloc(X_DIM * Y_DIM * Z_DIM * sizeof(char));
    
    /* em seguida, alocamos espaco de uma matriz de ponteiros,
     * cada um para eventualmente apontar para o primeiro
     * elemento de um array bidimensional de ponteiros */
    char*** Arr3D = malloc(Z_DIM * sizeof(char**));

    /* e para cada um deles atribuímos um ponteiro para um
     * array recém-alocado de ponteiros para uma linha */
    for (int z = 0; z < Z_DIM; z++) {
        Arr3D[z] = malloc(Y_DIM * sizeof(char*));

        /* e para cada espaco neste array colocamos um
         * ponteiro para o primeiro elemento de cada
         * linha no espaço do array originalmente alocado */

        for (int y = 0; y < Y_DIM; y++) {
            Arr3D[z][y] = espaco + (z * (X_DIM * Y_DIM) + y * X_DIM);
        }
    }

    /* E, agora verificamos cada endereço em nosso array 3D
     * para ver se a indexação do ponteiro Arr3d é conduzida
     * de maneira contínua */
    for (int z = 0; z < Z_DIM; z++) {
        printf("Localização do array %d é %p\n", z, *Arr3D[z]);

        for (int y = 0; y < Y_DIM; y++) {
            ptrdiff_t diff;
            printf(" Array %d e linha %d iniciam em %p ", z, y, Arr3D[z][y]);
            diff = Arr3D[z][y] - espaco;
            printf("diff = %3ld ", diff);
            printf("z = %d y = %d\n", z, y);
        }
    }

    return 0;
}
