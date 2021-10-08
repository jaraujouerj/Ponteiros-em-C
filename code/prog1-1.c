/* Programa 1.1 de PTRTUT10.TXT 6/10/97 */
#include <stdio.h>

int j, k;
int* ptr;

int main(void) {
    j = 1;
    k = 2;
    ptr = &k;
    printf("\n");
    printf("j tem valor %d e está armazenado em %p\n", j, (void*)&j);
    printf("k tem valor %d e está armazenado em %p\n", k, (void*)&k);
    printf("ptr tem valor %p e está armazenado em %p\n", ptr, (void*)&ptr);
    printf("O valor do inteiro apontado por ptr é %d\n", *ptr);
    
    return 0;
}
