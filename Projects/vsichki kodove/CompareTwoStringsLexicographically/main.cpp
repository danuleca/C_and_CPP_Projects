#include <iostream>
#include <string>

using namespace std;


int compString(const string &s1, const string &s2)
{
    int size = min(s1.size(), s2.size());
    for(int i = 0; i<size; i++){
        int r = s1[i] - s2[i];
        if (r) return r;
    }
    return s1.size()-s2.size();
}

int compString(const char *s1, const char *s2){
    while(true){
        int r = *s1 - *s2;
        if (r) return r;
        if (*s1==0 && *s2==0) return 0;
        s1++;
        s2++;
    }
}


int main()
{
    const int SIZE = 50;
    cout << "First string: ";
    string str1;
    getline(cin, str1);
    //char str1[SIZE];
    //cin.getline(str1, SIZE);
    cout << "Second string: ";
    string str2;
    getline(cin, str2);
    //char str2[SIZE];
    //cin.getline(str2, SIZE);
    int r = compString(str1, str2);
    if (r<0) cout << "First\n";
    else if (r>0) cout << "Second\n";
    else cout << "Equal\n";
}
