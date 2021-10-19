#include <stdio.h>
#include <string.h>

#define MAX_BUF 256

char arr2[][20] = {
    "Mickey Mouse",
    "Pato Donald",
    "Minnie Mouse",
    "Pateta",
    "Ted Jensen",
    "João Araujo"
};
#define N sizeof(arr2) / sizeof(arr2[0])

void bubble(void* p, int tamanho, int n);
int compare(void* m, void* n);

int main(void) {
    puts("\nAntes de ordenar:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", arr2[i]);
    }

    bubble(arr2, 20, N);
    
    printf("\n\nArray ordenado\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", arr2[i]);
    }

    return 0;
}

void bubble(void* p, int tamanho, int n) {
    unsigned char buf[MAX_BUF];
    unsigned char* bp = p;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            int k = compare((void*)(bp + tamanho * (j - 1)), 
                            (void*)(bp + j * tamanho));

            if (k > 0) {
                memcpy(buf, bp + tamanho * (j - 1), tamanho);
                memcpy(bp + tamanho * (j - 1), bp + j * tamanho, tamanho);
                memcpy(bp + j * tamanho, buf, tamanho);
            }
        }
    }
}

int compare(void* m, void* n) {
    char* m1 = m;
    char* n1 = n;
    return (strcmp(m1, n1));
}
