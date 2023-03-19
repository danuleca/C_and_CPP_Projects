#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isArrayInWave(int arr[], int n)
{
    for(int i=2; i<n; i++)
    {
        if(arr[i-2] <= arr[i-1] && arr[i-1] <= arr[i] || arr[i-2] >= arr[i-1] && arr[i-1] >= arr[i]) return false;
    }
    return true;
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
    bool result = isArrayInWave(arr,count);
    if(result) cout << "Yes" << endl;
    else cout << "No" << endl;
}
