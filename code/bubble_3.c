#include <stdio.h>

int arr[] = {3, 6, 1, 2, 3, 8, 4, 1, 7, 2};
#define N sizeof(arr) / sizeof(arr[0])

void bubble(int* p, int n);
int compare(int* m, int* n);

int main(void) {
    puts("\nAntes de ordenar:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    bubble(arr, N);
    
    puts("\n\nApós ordenar:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubble(int* p, int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (compare(&p[j - 1], &p[j])) {
                int t = p[j - 1];
                p[j - 1] = p[j];
                p[j] = t;
            }
        }
    }
}

int compare(int* m, int* n) {
    return (*m > *n);
}
