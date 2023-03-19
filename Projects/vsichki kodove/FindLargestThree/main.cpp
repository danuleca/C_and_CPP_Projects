#include <iostream>
#include <climits>
#include <limits>

using namespace std;

int main()
{
    cout << "Enter how many numbers: ";
    int n;
    cin >> n;
    //int first = INT_MIN, sec = INT_MIN, trd = INT_MIN;
    /*
    int first = numeric_limits<int>::min();
    int sec = first;
    int trd = first;
    */
    cout << "How many largest numbers: ";
    int l;
    cin >> l;
    int *arr = new int[l];
    for(int i = 0; i<l; i++) arr[i] = numeric_limits<int>::min();
    for(int i=0;i<n;i++)
    {
        cout << "Number " << i+1 << ": ";
        int num;
        cin >> num;
        /*
        if(num > first)
        {
            trd = sec;
            sec = first;
            first = num;
        }
        else if(num > sec)
        {
            trd = sec;
            sec = num;
        }
        else if(num > trd)
        {
            trd = num;
        }
        */
        /*
        if (num>first) swap(num, first);
        if (num>sec) swap(num, sec);
        if (num>trd) swap(num, trd);
        */
        for(int i = 0; i<l; i++){
            if (num>arr[i]){
                for(int j=l-1; j>i; j--){
                    arr[j] = arr[j-1];
                }
                arr[i]=num;
                break;
            }
        }
    }
    //cout << first << ", " << sec << " and " << trd << endl;
    cout << "Largest numbers: " << arr[0];
    for(int i = 1; i<l; i++){
        cout << ", " << arr[i];
    }
    cout << endl;
    delete[] arr;
}
