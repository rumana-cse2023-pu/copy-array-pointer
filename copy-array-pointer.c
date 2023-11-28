#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {

    int sourceArray[100];

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    int destinationArray[100];

    copyArray(sourceArray, destinationArray, size);

    printf("Copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
