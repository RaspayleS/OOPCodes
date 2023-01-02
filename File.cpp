#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string id, name, branch;
    void getData()
    {
        cout << "Enter Your Id: ";
        cin >> id;
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Branch: ";
        cin >> branch;
    }
    void writeFile()
    {
        ofstream file("shruti.txt");
        file << "\nId: " << id << endl;
        file << "Name: " << name << endl;
        file << "Branch: " << branch << endl;
        file.close();
    }
    void readFile()
    {
        ifstream file("shruti.txt");
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
};
int main()
{
    Student stud;
    stud.getData();
    stud.writeFile();
    stud.readFile();
 return 0;
}
