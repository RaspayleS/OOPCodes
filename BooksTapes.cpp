#include <bits/stdc++.h>
using namespace std;

class Publication
{
public:
    string title;
    float price;
    void addPublication()
    {
        cin.ignore();
        cout << "\nEnter title of the publication: ";
        getline(cin, title);
        cout << "Enter price of publication: ";
        cin >> price;
    }
};

class Book : public Publication
{
public:
    int page_count;
    void addBook()
    {
        try
        {
            addPublication();
            cout << "Enter page count of a book: ";
            cin >> page_count;
            if (!(page_count > 0))
                throw(page_count);
        }
        catch (...)
        {
            cout << "\nInvalid page count!!\n";
            page_count = 0;
            addBook();
        }
    }
    void showBook()
    {
        cout << "\nTitle: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Page Count: " << page_count << " pages" << endl;
    }
};

class Tape : public Publication
{
public:
    float play_time;
    void addTape()
    {
        try
        {
            addPublication();
            cout << "Enter play time of a tape: ";
            cin >> play_time;
            if (!(play_time > 0))
                throw(play_time);
        }
        catch (...)
        {
            cout << "\nInvalid page count!!\n";
            play_time = 0;
            addTape();
        }
    }
    void showTape()
    {
        cout << "\nTitle: " << title << endl;
        cout << "Price: " << price << endl;
        cout << "Play Time: " << play_time << " min" << endl;
    }
};

int main()
{
    Book books[100];
    Tape tapes[100];
    int book_count = 0, tape_count = 0, choice;
    while (true)
    {
        cout << "\n-------------------------------\n"
             << " Publications Database System"
             << "\n-------------------------------\n"
             << "1. Add Book \n"
             << "2. Add Tape \n"
             << "3. Display Books \n"
             << "4. Display Tapes \n"
             << "5. Exit \n"
             << " \nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            books[book_count].addBook();
            book_count++;
            break;
        case 2:
            tapes[tape_count].addTape();
            tape_count++;
            break;
        case 3:
            cout << "\n-------------------------------\n"
                 << " All Available Books"
                 << "\n-------------------------------\n";
            for (int i = 0; i < book_count; i++)
                books[i].showBook();
            break;
        case 4:
            cout << "\n-------------------------------\n"
                 << " All Available Tapes"
                 << "\n-------------------------------\n";
            for (int i = 0; i < tape_count; i++)
                tapes[i].showTape();
            break;
        case 5:
            exit(0);
        default:
            cout << "\nInvalid choice!!\n";
            break;
        }
    }
    return 0;
}