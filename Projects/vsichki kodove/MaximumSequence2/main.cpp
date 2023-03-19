#include <iostream>
#include <cstring>
#include <string>
#include <sstream>

using namespace std;

// 2 1 1 2 3 3 2 2 2 1

int parse_numbers(char str[], int arr[], int size)
{
    char *p = strtok(str, " ");
    int count = 0;
    while(p && count<size)
    {
        char *end;
        int num = strtol(p, &end, 10);
        if(*end!=0)
        {
            cerr << "Invalid input!\n";
            exit(1);
        }
        arr[count] = num;
        count++;
        p = strtok(nullptr, " ");
    }
    return count;
}

int parse_numbers(string str, int arr[], int size)
{
    istringstream iss(str);
    int count = 0;
    int num;
    iss >> num;
    while(iss && count < size)
    {
        arr[count++] = num;
        iss >> num;
    }
    return count;
}

void find_max_sequence(int arr[], int count, int &from_index, int &length)
{
    int current_idx = 0;
    from_index = 0;
    length = 1;
    for(int i=1; i<=count; i++)
    {
        if(i==count || arr[i-1]!=arr[i])
        {
            int current_len = i - current_idx;
            if (current_len>length)
            {
                length = current_len;
                from_index = current_idx;
            }
            current_idx = i;
        }
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    //const int STR_SIZE = 100;
    const int ARR_SIZE = 50;
    cout << "Numbers: ";
    //char str[STR_SIZE];
    //cin.getline(str,STR_SIZE);
    string str;
    getline(cin,str);
    int arr[ARR_SIZE];
    int count = parse_numbers(str, arr, ARR_SIZE);
    printArray(arr,count);
    cout << endl;
    int from_index;
    int length;
    find_max_sequence(arr, count, from_index, length);
    cout << "Starts from " << from_index << "\n";
    cout << "Length is " << length << "\n";
}
