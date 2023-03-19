#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string x = "10";
    int y = 20;
    istringstream iss(x);
    int r;
    iss >> r;
    cout << (r+y) << endl;
}
