/* Programa 2.1 de PTRTUT10.HTM 6/13/97 */

#include <stdio.h>

int meu_array[] = {1, 23, 17, 4, -5, 100};
int* ptr;

int main(void) {
    int i;
    ptr = &meu_array[0]; /* aponta nosso ponteiro para o primeiro
                            elemento do array */
    printf("\n\n");

    for (i = 0; i < 6; i++) {
        printf("meu_array[%d] = %d    ",i,meu_array[i]); /*<-- A */
        printf("ptr + %d = %d\n", i, *(ptr + i));        /*<-- B */
    }

    return 0;
}
