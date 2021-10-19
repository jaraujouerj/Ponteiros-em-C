#include <stdio.h>
#include <string.h>

long arr[] = { 3, 6, 1, 2, 3, 8, 4, 1, 7, 2};
#define N sizeof(arr) / sizeof(arr[0])

void bubble(void* p, size_t tamanho, int n);
int compare(void* m, void* n);

int main(void) {
    puts("\nAntes de ordenar:\n");
    for (int i = 0; i < N; i++) {
        printf("%ld ", arr[i]);
    }

    bubble(arr, sizeof(long), N);
    
    printf("\n\nArray ordenado\n");
    for (int i = 0; i < N; i++) {
        printf("%ld ", arr[i]);
    }

    return 0;
}

void bubble(void* p, size_t tamanho, int n) {
    unsigned char buf[8];
    unsigned char* bp = p;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (compare((void*)(bp + tamanho * (j - 1)),
                        (void*)(bp + j * tamanho))) { /* 1 */
            /*  t = p[j - 1];    */
                memcpy(buf, bp + tamanho * (j - 1), tamanho);
            /*  p[j - 1] = p[j]; */
                memcpy(bp + tamanho * (j - 1), bp + j * tamanho, tamanho);
            /*  p[j] = t;        */
                memcpy(bp + j * tamanho, buf, tamanho);
            }
        }
    }
}

int compare(void* m, void* n) {
    long* m1, *n1;
    
    m1 = (long*)m;
    n1 = (long*)n;
    
    return (*m1 > *n1);
}
