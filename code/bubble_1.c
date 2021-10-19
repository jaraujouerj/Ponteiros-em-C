#include <stdio.h>

int arr[] = { 3, 6, 1, 2, 3, 8, 4, 1, 7, 2};
#define N sizeof(arr) / sizeof(arr[0])

void bubble(int a[], int n);

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

void bubble(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (a[j - 1] > a[j]) { 
                int t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
        }
    }
}
