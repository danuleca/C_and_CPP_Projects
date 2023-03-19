#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int SIZE = 100;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int parseNumbers(string str, int arr[], int size)
{
    istringstream iss(str);
    int count = 0;
    int num;
    iss >> num;
    while(iss && count < size)
    {
        arr[count++] = num;
        iss >> num;
    }
    return count;
}

bool isArraySorted(int arr[], int size)
{
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}

int main()
{
    int arr[SIZE];
    string str;
    cout << "Enter numbers: ";
    getline(cin, str);
    int count = parseNumbers(str,arr,SIZE);
    bool result = isArraySorted(arr, count);
    if(result) cout << "Yes" << endl;
    else cout << "No" << endl;
}
