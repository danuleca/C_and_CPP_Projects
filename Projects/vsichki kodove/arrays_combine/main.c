#include <stdio.h>
#include <math.h>

/*
 * arr1 = {1,2,3,4}
 * arr2 = {5,6,7}
 *
 * result = {1,5,2,6,3,7,4}
 */
int combineArrays(int arr1[], int size1, int arr2[], int size2, int result[], int resultSize) {

    int rmin = (int) ceil(resultSize / 2.0);
    int len1 = size1 > rmin ? rmin : size1;
    for (int i = 0; i < len1; i++) {
        int index = i < size2 ? i * 2 : size2 + i;
        result[index] = arr1[i];
    }
    int len2 = size2 > rmin ? rmin : size2;
    for (int i = 0; i < len2; i++) {
        int index = i < size1 ? i * 2 + 1 : size1 + i;
        result[index] = arr2[i];
    }
    return len1 + len2;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7};
    int result[6];
    int count = combineArrays(arr1, 5, arr2, 2, result, 6);
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
