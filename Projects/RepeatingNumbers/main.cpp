#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int parse_numbers(const string &str, int *& arr)
{
    istringstream iss(str);
    int num;
    int count = 0;
    while(iss >> num) count++;
    arr = new int[count];
    iss.clear();
    iss.str(str);
    count = 0;
    while(iss >> num) arr[count++] = num;
    return count;

}

int repeating_numbers(int *arr, int count)
{
    for(int i=0; i<count; i++)
    {
        for(int j=i+1;j<count; j++)
        {
            if(arr[i]==arr[j]) return i;
        }
    }
    return -1;
}

int repeating_numbers1(int *arr, int count)
{
    sort(&arr[0],&arr[count]);
    for(int i = 1; i<count; i++)
    {
        if(arr[i-1]==arr[i]) return i-1;
    }
    return -1;
}

int main()
{
    cout << "Enter numbers: ";
    string str;
    getline(cin,str);
    int *arr;
    int count = parse_numbers(str,arr);
    int index = repeating_numbers1(arr,count);
    if(index != -1) cout << arr[index] << endl;
}
