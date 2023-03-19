#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

*/

int strToNums(char str[], int arr[], int size){
    char *p = strtok(str, ",");
    int count = 0;
    while(p && count<size){
        char *end;
        int n = strtol(p,&end,10);
        while(*end==' ') end++;
        if (*end != 0){
            fprintf(stderr, "Wrong input.\n");
            exit(1);
        }
        arr[count] = n;
        count++;
        p = strtok(NULL, ",");
    }
    return count;
}

void printArr(int arr[], int count){
    printf("Numbers: ");
    for(int i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inputString(char str[], int size){
    fgets(str, size, stdin);
    char *p = strchr(str,'\n');
    if (p) *p = 0;
}

int compareInt(const void *v1, const void *v2){
    int *i1 = (int*)v1;
    int *i2 = (int*)v2;
    return *i1 - *i2;
}

int main()
{
    const int SIZE_STR = 100, SIZE_ARR = 50;
    char str[SIZE_STR];
    printf("Comma separated numbers: ");
    inputString(str, SIZE_STR);
    int arr[SIZE_ARR];
    int count = strToNums(str, arr, SIZE_ARR);
    int num;
    printf("Number: ");
    scanf("%d", &num);
    // todo: must be structures
    qsort(arr, count, sizeof(int), compareInt);
    //printArr(arr, count);
    int from = 0, to = count - 1;
    while(from<to){
        int sum = arr[from] + arr[to];
        if (sum == num){
            printf("%d %d\n", arr[from], arr[to]); // must be indexes
            break;
        }
        if (sum<num){
            from++;
        }
        else {
            to--;
        }
    }
}