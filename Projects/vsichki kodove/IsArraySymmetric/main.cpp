#include <iostream>
#include <string>
#include <sstream>

using namespace std;
//const int SIZE = 100;

int parseNumbers(const string & str, int *& arr)
{
    istringstream iss(str);
    int num;
    int count = 0;
    while(iss >> num) count++;
    arr = new int[count];
    count = 0;
    iss.clear();
    iss.str(str);
    while(iss >> num)
    {
        arr[count++] = num;
    }
    return count;
}

bool isArraySymmetrical(int arr[], int count)
{
    /*
    int newLenght = count/2;
    for(int i=0;i<newLenght;i++)
    {
        if(arr[i]!=arr[(count-i)-1]) return false;
    }
    */
    int from = 0, to = count - 1;
    while(from<to){
        if (arr[from]!=arr[to]) return false;
        from++;
        to--;
    }
    return true;
}

int main()
{
    cout << "Enter the numbers: ";
    string str;
    getline(cin, str);
    int *arr;
    int count = parseNumbers(str,arr);
    int result = isArraySymmetrical(arr,count);
    delete[] arr;
    if(result) cout << "Yes\n";
    else cout << "No\n";
}
