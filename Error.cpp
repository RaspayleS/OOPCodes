#include <bits/stdc++.h>
using namespace std;

class Error
{
public:
    string error;
    Error(string e)
    {
        error = e;
    }
    string show_error()
    {
        return error;
    }
};

int main()
{
    try
    {
        int age, income;
        string city, vehicle;

        cout << "Enter your age: ";
        cin >> age;
        if (!(age >= 18 && age <= 55))
            throw Error("Invalid age criteria!!");

        cout << "Enter your income: ";
        cin >> income;
        if (!(income >= 50000 && income <= 100000))
            throw Error("Invalid income criteria!!");

        cout << "Enter your city: ";
        cin >> city;
        if (!(city == "Pune" || city == "Mumbai" || city == "Banglore" || city == "Chennai"))
            throw Error("Invalid city criteria!!");

        cout << "Enter type of vehicle (2-wheeler/4-wheeler): ";
        cin >> vehicle;
        if (!(vehicle=="4-wheeler"))
            throw Error("Invalid vehicle criteria!!");
        
        cout << "Age: " << age << endl;
        cout << "Income: " << income << endl;
        cout << "City: " << city << endl;
        cout << "Vehicle: " << vehicle << endl;
    }
    catch (Error &e)
    {
        cout << e.show_error() << endl;
    }
    return 0;
}
