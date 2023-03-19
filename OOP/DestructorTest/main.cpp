#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

class Complex
{
private:
    double re_, im_;
public:
    // Constructor
    Complex(double re, double im): re_(re), im_(im)
    {
        cout << "Constructor : (" << re_
             << ", " << im_ << ")" << endl;
    }

    // Destructor
    ~Complex()
    {
        cout << "Destructor : (" << re_ << ", "
             << im_ << ")" << endl;
    }

    double normal()
    {
        return sqrt(re_*re_ + im_*im_);
    }

    void print()
    {
        cout << "|" << re_ <<" +j" << im_
             << " | = " << normal() << endl;
    }
};

// Driver code
int main()
{
    // buffer on stack
    unsigned char buf[100];

    Complex* pc = new Complex(4.2, 5.3);
    //Complex* pd = new Complex[2];
    Complex* pd = (Complex*)::operator new (sizeof(Complex)*2);

    // using placement new
    Complex *pe1 = new (pd) Complex(1, 2);
    Complex *pe2 = new (pd+1) Complex(3, 4);
    // use objects
    pc -> print();
    pd[0].print();
    pd[1].print();
    pe1->print();
    pe2->print();
    // Release objects
    // calls destructor and then release memory
    delete pc;

    //delete [] pd;

    pe1->~Complex();
    pe2->~Complex();
    operator delete(pd);
}
