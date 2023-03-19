#include <iostream>
#include <sstream>

using namespace std;

int parse_numbers(string &str, int *& arr)
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

void max_subsequence(int *arr, int count, int &max_from, int &max_to)
{
    int max_len = 1;
    int from = 0;
    for(int i=1; i<=count; i++)
    {
        if(i==count || arr[i-1]>=arr[i])
        {
            int len =  i - from;
            if(max_len<=len)
            {
                max_len = len;
                max_to = i;
                max_from = from;
            }
            from = i;
        }
    }
}

int main()
{
    string str;
    cout << "Enter numbers: ";
    getline(cin, str);
    int *arr;
    int count = parse_numbers(str,arr);
    int from, to;
    max_subsequence(arr,count,from,to);
    for(int i=from; i<to; i++)
    {
        cout << arr[i] << " ";
    }
}
