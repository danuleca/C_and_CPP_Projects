#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

const int SIZE = 100000000;
const int TIMES = 10;

int sumIntPtr(int **arr){
    int result = 0;
    for(int i=0;i<SIZE;i++)
    {
        result+=*arr[i];
    }
    return result;
}

int sumInt(int *arr){
    int result = 0;
    for(int i=0;i<SIZE;i++)
    {
        result+=arr[i];
    }
    return result;
}

void shuffle(int **arr){
    for(int i=0;i<SIZE;i++){
        int index = SIZE - (rand()*10000) % SIZE - 1;
        swap(arr[i], arr[index]);
    }
}

int main()
{
    srand(time(NULL));
    int *arr = new int[SIZE];
    for(int i = 0; i<SIZE; i++){
        arr[i] = rand() % 100;
    }
    int **arrPtr = new int*[SIZE];
    for(int i = 0; i<SIZE; i++){
        arrPtr[i] = &arr[i];
    }
    {
        auto t1 = chrono::high_resolution_clock::now();
        int sum = 0;
        for(int i = 0; i<TIMES; i++){
            sum += sumInt(arr);
        }
        auto t2 = chrono::high_resolution_clock::now();
        auto result = chrono::duration_cast<chrono::microseconds>(t2 - t1);
        cout << "Cache duration: " << result .count() << " us, Sum: " << sum << "\n";
    }
    {
        auto t1 = chrono::high_resolution_clock::now();
        int sum = 0;
        for(int i = 0; i<TIMES; i++){
            sum += sumIntPtr(arrPtr);
        }
        auto t2 = chrono::high_resolution_clock::now();
        auto result = chrono::duration_cast<chrono::microseconds>(t2 - t1);
        cout << "Sequential Pointer duration: " << result .count() << " us, Sum: " << sum << "\n";
    }
    {
        shuffle(arrPtr);
        auto t1 = chrono::high_resolution_clock::now();
        int sum = 0;
        for(int i = 0; i<TIMES; i++){
            sum += sumIntPtr(arrPtr);
        }
        auto t2 = chrono::high_resolution_clock::now();
        auto result = chrono::duration_cast<chrono::microseconds>(t2 - t1);
        cout << "Not sequential pointer duration: " << result .count() << " us, Sum: " << sum << "\n";
    }
}
