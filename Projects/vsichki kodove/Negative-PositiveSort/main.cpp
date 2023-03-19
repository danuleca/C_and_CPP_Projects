#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void negativePositiveSortInPlace(int* arr, int size)
{
    /*
    for(int i=1;i<size;i++)
    {
        int temp = arr[i];c
        if(temp>=0) continue;
        int j=i-1;
        while(j>=0 && arr[j]>0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    */
    for(int i=0; i<size; i++)
    {
        for(int j=1; j<size-i; j++)
        {
            if(arr[j]<=0 && arr[j-1]>=0)
            {
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

int * negativePositiveSort(int* arr, int size)
{
    int *result = new int[size];
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<0) result[count++] = arr[i];
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i]>=0) result[count++] = arr[i];
    }
    return result;
}

int parseNumbers(const string &str, int *& arr)
{
    istringstream iss(str);
    int num;
    int count = 0;
    while(iss >> num) count++;
    arr = new int[count];
    iss.clear();
    iss.str(str);
    //iss = istringstream(str);
    count = 0;
    while(iss >> num) arr[count++] = num;
    return count;
}

int main()
{
    cout << "Enter numbers: ";
    string str;
    getline(cin,str);
    int *arr;
    int count = parseNumbers(str,arr);
    /*int* result = negativePositiveSort(arr, count);
    for(int i=0;i<count;i++)
    {
        cout << result[i] << " ";
    }
    delete[] result;
    delete[] arr;*/
    negativePositiveSortInPlace(arr, count);
    for(int i=0; i<count; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;

}
