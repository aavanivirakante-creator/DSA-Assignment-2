#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; *a = *b; *b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p-1);
        quickSort(a, p+1, high);
    }
}

int main() {
    int a[] = {45,72,30,90,65,50,85};
    int n = 7;

    quickSort(a,0,n-1);

    printf("Quick Sort Output:\n");
    for (int i=0; i<n; i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
