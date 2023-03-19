#include <iostream>
#include <sstream>
#include <limits>
#include <algorithm>

using namespace std;

int parse_numbers(const string &str, int *&arr)
{
    istringstream iss(str);
    int count = 0;
    int num;
    while(iss >> num) count++;
    arr = new int[count];
    count = 0;
    iss.clear();
    iss.str(str);
    while(iss >> num) arr[count++] = num;
    return count;
}


int main()
{
    cout << "Enter sum of pairs: ";
    int sum;
    cin >> sum;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Enter numbers: ";
    string str;
    getline(cin, str);
    int *arr;
    int count = parse_numbers(str,arr);
    /*
    for(int i=0;i<count;i++)
    {
        int num = sum - arr[i];
        for(int j=i+1;j<count;j++)
        {
            if(arr[j]==num) cout << arr[i] << " " << num << "\n";
        }
    }
    */
    sort(arr, arr + count);
    int index = 2;
    for(int i = 2; i<count; i++){
        if (arr[index-2] == arr[index-1] && arr[index-1] == arr[i]) continue;
        arr[index] = arr[i];
        index++;
    }
    int from = 0, to = index-1;
    while(from<to){
        int temp = arr[from] + arr[to];
        if (temp < sum) from++;
        else if (temp > sum) to--;
        else {
            cout << arr[from] << " " << arr[to] << "\n";
            from++;
            to--;
        }
    }
}
