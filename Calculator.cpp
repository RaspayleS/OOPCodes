#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    char oper;
    while (true)
    {
        cout << "Enter any two number: ";
        cin >> num1 >> num2;
        cout << "Enter any operator (+, -, *, /, %): ";
        cin >> oper;
        switch (oper)
        {
        case '+':
            cout << "sum is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "difference is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Product is: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Quotient is: " << num1 / num2 << endl;
            break;
        case '%':
            cout << "Remainder is: " << num1 % num2 << endl;
            break;
        default:
            cout << "Invalid Operator! ";
            break;
        }
    }
    return 0;
}
