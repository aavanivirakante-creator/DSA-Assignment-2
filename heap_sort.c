#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

void heapify(int a[], int n, int i) {
    int largest = i, left = 2*i+1, right = 2*i+2;

    if (left < n && a[left] > a[largest]) largest = left;
    if (right < n && a[right] > a[largest]) largest = right;

    if (largest != i) {
        swap(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    for (int i = n/2-1; i >= 0; i--)
        heapify(a, n, i);

    for (int i = n-1; i > 0; i--) {
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
}

int main() {
    int a[] = {45,72,30,90,65,50,85};
    int n = 7;

    heapSort(a,n);

    printf("Heap Sort Output:\n");
    for (int i=0; i<n; i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
