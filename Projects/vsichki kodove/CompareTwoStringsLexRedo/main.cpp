#include <iostream>

using namespace std;
const int SIZE = 100;

int compareStrings(const string &str1, const string &str2)
{
    int size = min(str1.size(), str2.size());
    for(int i=0; i<size; i++)
    {
        int r = str1[i] - str2[i];
        if(r!=0) return r;
    }
    return str1.size()-str2.size();
}

int compareStrings(const char *str1, const char *str2)
{
    while(true)
    {
        int r = *str1 - *str2;
        if(r!=0) return r;
        if(*str1==0 && *str2==0) return 0;
        str1++;
        str2++;
    }
}


int main()
{
    cout << "First string: ";
    string str1;
    getline(cin,str1);
    cout << "Second string: ";
    string str2;
    getline(cin,str2);
    int result = compareStrings(str1,str2);
    if(result<0) cout << "First\n";
    else if(result>0) cout << "Second\n";
    else cout << "Equal\n";

    cout << "First string: ";
    char str3[SIZE];
    cin.getline(str3,SIZE);
    cout << "Second string: ";
    char str4[SIZE];
    cin.getline(str4,SIZE);
    int result2 = compareStrings(str3,str4);
    if(result2<0) cout << "First\n";
    else if(result2>0) cout << "Second\n";
    else cout << "Equal\n";

}
