#include <iostream>
#include <cstring>

using namespace std;

// 2 1 1 2 3 3 2 2 2 1

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int parseNumbers(char str[], int arr[], int size){
    int count = 0;
    char *p = strtok(str, " ");
    while(p && count<size){
        char *end;
        int num = strtol(p, &end, 10);
        if (*end){
            cerr << "Invalid input.\n";
            return 1;
        }
        arr[count++] = num;
        p = strtok(nullptr, " ");
    }
    return count;
}

void getMaxEqualLenSeq(int arr[], int count, int &fromIndex, int &length){
    if (count<1) {
        length = -1;
        return;
    }
    int currIndex = 0;
    fromIndex = 0, length = 1;
    for(int i = 1; i<=count; i++){
        if (i==count || arr[i-1]!=arr[i]){
            int currLength = i - currIndex;
            if (currLength>length){
                length = currLength;
                fromIndex = currIndex;
            }
            currIndex = i;
        }
    }
    /*
    int currLength = i - currIndex;
    if (currLength>length){
        length = currLength;
        fromIndex = currIndex;
    }
    */
}

int main()
{
    const int STR_SIZE = 50, ARR_SIZE = 25;
    char str[STR_SIZE];
    cout << "Numbers: ";
    cin.getline(str,STR_SIZE);
    int arr[ARR_SIZE];
    int count = parseNumbers(str, arr, ARR_SIZE);
    //printArray(arr, count);
    int index, length;
    getMaxEqualLenSeq(arr, count, index, length);
    cout << "The maximum sequence of equal numbers is with length " << length << " and starts on index " << index << endl;
}
