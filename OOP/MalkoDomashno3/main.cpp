#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *data;
    size_t length;

public:
    String(const char *data)
        : length(strlen(data))
    {
        this->data = new char[length];
        for(size_t i=0; i<length;i++)
        {
            this->data[i] = data[i];
        }
    }

    String(const String &other)
        : length(other.length)
    {
        this->data = new char[other.length];
        for(size_t i=0; i<length;i++)
        {
            data[i] = other.data[i];
        }
    }

    friend void swap(String &str, String &other)
    {
        std::swap(str.data, other.data);
        std::swap(str.length, other.length);
    }

    String &operator=(String str)
    {
        swap(*this, str);
        return *this;
    }

    /*String &operator=(const String &other)
    {

        if(this != &other)
        {
            delete[] this->data;
            this->data = new char [length];
            strcpy(data, other.data);
            this->length = other.length;
        }
        return *this;
    }*/

    ~String()
    {
         delete[] this->data;
    }

    const char *getCString() const
    {
        return this->data;
    }

    size_t getlength() const
    {
        return this->length;
    }
};

int main()
{
    String myString("Test message");

    cout << "Expected: Test message, got: " << myString.getCString() << endl;

    String stringFromCopyConstructor(myString);
    cout << "Expected: Test message, got: " << stringFromCopyConstructor.getCString() << endl;

    String string("Test message 2");

    string = myString;
    cout << "Expected: Test message, got: " << string.getCString() << endl;
    cout << "Expected: Test message, got: " << myString.getCString() << endl;
}
