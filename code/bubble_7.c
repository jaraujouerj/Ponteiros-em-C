#include <stdio.h>
#include <string.h>

#define MAX_BUF 256

long arr[] = { 3, 6, 1, 2, 3, 8, 4, 1, 7, 2};
#define N1 sizeof(arr) / sizeof(arr[0])
char arr2[][20] = { "Mickey Mouse",
                     "Pato Donald",
                     "Minnie Mouse",
                     "Pateta",
                     "Ted Jensen",
                     "João Araujo"
                   };
#define N2 sizeof(arr2) / sizeof(arr2[0])

void bubble(void* p, int tamanho, int N,
            int(*fptr)(const void*, const void*));
int compare_string(const void* m, const void* n);
int compare_long(const void* m, const void* n);

int main(void) {
    int i;
    puts("\nAntes de ordenar:\n");
    for (i = 0; i < N1; i++) { /* mostra os long ints */
        printf("%ld ", arr[i]);
    }

    puts("\n");

    for (i = 0; i < N2; i++) { /* mostra as strings */
        printf("%s\n", arr2[i]);
    }

    bubble(arr, 8, N1, compare_long); /* ordena os longs */
    bubble(arr2, 20, N2, compare_string); /* ordena as strings */
    
    puts("\n\nApós ordenar:\n");
    for (i = 0; i < N1; i++) { /* mostra os longs ordenados */
        printf("%ld ", arr[i]);
    }

    putchar('\n');

    for (i = 0; i < N2; i++) { /* mostra as strings ordenadas */
        printf("%s\n", arr2[i]);
    }

    return 0;
}

void bubble(void* p, int tamanho, int n,
            int(*fptr)(const void*, const void*)) {
    unsigned char buf[MAX_BUF];
    unsigned char* bp = p;

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            int k = fptr((void*)(bp + tamanho * (j - 1)), 
                         (void*)(bp + j * tamanho));

            if (k > 0) {
                memcpy(buf, bp + tamanho * (j - 1), tamanho);
                memcpy(bp + tamanho * (j - 1), bp + j * tamanho, tamanho);
                memcpy(bp + j * tamanho, buf, tamanho);
            }
        }
    }
}

int compare_string(const void* m, const void* n) {
    char* m1 = (char*)m;
    char* n1 = (char*)n;
    return (strcmp(m1, n1));
}

int compare_long(const void* m, const void* n) {
    long* m1, *n1;
    m1 = (long*)m;
    n1 = (long*)n;
    return (*m1 > *n1);
}
