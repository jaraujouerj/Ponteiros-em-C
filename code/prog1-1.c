#include <stdio.h>

int j, k;
int* ptr;

int main(void) {
    j = 1;
    k = 2;
    ptr = &k;
    printf("j tem valor %d e está armazenado em %p\n", j, (void*)&j);
    printf("k tem valor %d e está armazenado em %p\n", k, (void*)&k);
    printf("ptr tem valor %p e está armazenado em %p\n", 
          (void*)ptr, (void*)&ptr);
    printf("O valor do inteiro apontado por ptr é %d\n", *ptr);
    return 0;
}
