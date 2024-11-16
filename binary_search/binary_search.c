#include "binary_search.h"
#include <stdio.h>

int binary_search(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid;  // Повертаємо індекс знайденого елемента
        } else if (array[mid] < target) {
            left = mid + 1;  // Шукаємо в правій частині
        } else {
            right = mid - 1;  // Шукаємо в лівій частині
        }
    }

    return -1;  // Якщо елемент не знайдено
}