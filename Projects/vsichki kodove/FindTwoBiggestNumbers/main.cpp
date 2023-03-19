#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <limits>

using namespace std;

void findNMaxNumbers(int arr[], int size, int n){
    int end = min(size, n);
    for(int i = 0; i<end; i++){
        int index = i;
        for(int j=i+1; j<size; j++){
            if (arr[index]<arr[j]) index = j;
        }
        if (index!=i){
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
}

void findTwoMaxNumbers(int arr[], int size, int& max1, int& max2)
{
    max1 = numeric_limits<int>::min();
    max2 = numeric_limits<int>::min();
    for(int i=0; i<size; i++)
    {

        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2) max2 = arr[i];

        /*
        int t = arr[i];
        if (t>max1) swap(t, max1);
        if (t>max2) swap(t, max2);
        */
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << "\n" << endl;
}
int parseNumbers(string str, int*& nums)
{
    int count = 0, num;
    istringstream iss(str);
    while(iss >> num) count++;
    nums = new int[count];
    count = 0;
    iss.clear();
    iss.str(str);
    while(iss >> num) nums[count++] = num;
    return count;
}


int main()
{
    string str;
    cout << "Enter numbers: ";
    getline(cin,str);
    int *arr;
    int count = parseNumbers(str,arr);
    printArray(arr,count);
    delete[] arr;
    int max1, max2;
    findTwoMaxNumbers(arr, count, max1, max2);
    cout << "Max1: " << max1 << "\n" << "Max2: " << max2 << "\n" << endl;
    //findNMaxNumbers(arr,count, 2);
    //cout << "Max1: " << arr[0] << "\n" << "Max2: " << arr[1] << "\n" << endl;
}
