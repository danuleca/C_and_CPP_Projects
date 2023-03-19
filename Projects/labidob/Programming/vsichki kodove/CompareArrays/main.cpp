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
    const int SIZE = 100;
    cout << "Enter array length: ";
    int len;
    cin >> len;
    int arr1[SIZE];
    int arr2[SIZE];
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
    if(result) cout << "Not equal";
    else cout << "Equal";

}
