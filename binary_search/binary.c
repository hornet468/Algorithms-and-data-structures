#include "binary_search.h"
#include <stdio.h>

int main() {
    int array[] = {2, 3, 4, 10, 40};  // Відсортований масив
    int size = sizeof(array) / sizeof(array[0]);
    int target = 10;

    int result = binary_search(array, size, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}