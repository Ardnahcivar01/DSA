#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex()
    {
        real = imag = 0;
    }
    Complex(float a = 0, float b = 0)
    {
        real = a;
        imag = b;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
} ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+" << c.imag << "i" << endl;
    return out;
}
istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real part :";
    in >> c.real;
    cout << "\n Enter imag part :";
    in >> c.imag;
    return in;
}

int main()
{
    Complex c1;
    cout << "Enter a Complex number :";
    cin >> c1;
    cout << "you enterd :";
    cout << c1;
    return 0;
}
