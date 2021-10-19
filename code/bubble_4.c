#include <stdio.h>

int arr[] = { 3, 6, 1, 2, 3, 8, 4, 1, 7, 2};
#define N sizeof(arr) / sizeof(arr[0])

void bubble(int* p, int n);
int compare(void* m, void* n);

int main(void) {
    puts("\nAntes de ordenar:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    bubble(arr, N);
    
    printf("\n\nArray ordenado\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubble(int* p, int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (compare((void*)&p[j - 1], (void*)&p[j])) {
                int t = p[j - 1];
                p[j - 1] = p[j];
                p[j] = t;
            }
        }
    }
}
int compare(void* m, void* n) {
    int* m1, *n1;
    m1 = (int*)m;
    n1 = (int*)n;
    return (*m1 > *n1);
}
