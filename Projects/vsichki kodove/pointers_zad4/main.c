#include <stdio.h>

int array_sum(const int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int n = *(arr + i);
        if (n % 2 == 1) sum += n;
    }
    return sum;
}

int main() {
    int size = 6;
    int arr[] = {1, 2, 3, 7, 6, 6};
    int sum = array_sum(arr, size);
    printf("%d", sum);
}
