#include <iostream>

using namespace std;

bool arrCompare(int arr1[], int arr2[], int len)
{
    for(int i=0;i<len;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cout << "Enter array length: ";
    int len;
    cin >> len;
    int *arr1 = new int[len];
    int *arr2 = new int[len];
    for(int i=0;i<len;i++)
    {
        cout << "Enter " << i+1 << " number: ";
        cin >> arr1[i];
    }
    for(int i=0;i<len;i++)
    {
        cout << "Enter " << i+1 << " number: ";
        cin >> arr2[i];
    }
    bool result = arrCompare(arr1,arr2,len);
    delete[] arr2;
    delete[] arr1;
    if(result) cout << "Not equal";
    else cout << "Equal";

}
