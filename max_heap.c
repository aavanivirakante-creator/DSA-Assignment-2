#include <stdio.h>
#define MAX 100

int heap[MAX], size = 0;

void insert(int value) {
    int i = size;
    heap[size++] = value;

    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[parent] < heap[i]) {
            int temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;
            i = parent;
        } else break;
    }
}

void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int main() {
    int values[] = {45, 72, 30, 90, 65, 50, 85};

    printf("Max Heap Insertion\n\n");
    for (int i = 0; i < 7; i++) {
        insert(values[i]);
        printf("After inserting %d: ", values[i]);
        display();
    }
    return 0;
}
