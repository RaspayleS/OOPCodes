#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real, imag;
    Complex()
    {
        real = imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend istream &operator>>(istream &, Complex &i)
    {
        cin >> i.real >> i.imag;
        return cin;
    }
    friend ostream &operator<<(ostream &, const Complex &o)
    {
        cout << o.real << " + " << o.imag << "i" << endl;
        return cout;
    }
    Complex operator+(Complex c2)
    {
        Complex res;
        res.real = real + c2.real;
        res.imag = imag + c2.imag;
        return res;
    }
    Complex operator*(Complex c2)
    {
        Complex res;
        res.real = real * c2.real;
        res.imag = imag * c2.imag;
        return res;
    }
};

int main()
{
    Complex c1, c2, res;

    cout << "Enter 1st complex number (e.g 2 3): ";
    cin >> c1;
    cout << "Enter 2nd complex number (e.g 5 8): ";
    cin >> c2;

    res = c1 + c2;
    cout << "Sum is " << res.real << " + " << res.imag << "i" << endl;

    res = c1 * c2;
    cout << "Product is " << res.real << " + " << res.imag << "i" << endl;
}