#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    vector<Item> data;
    int code, quantity, cost;
    string name;
    bool operator==(const Item &item)
    {
        return code == item.code;
    }
    void addRecords()
    {
        int n;
        cout << "\nHow many records you want to add? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            Item item;
            cout << "\nEnter item code: ";
            cin >> item.code;
            cout << "Enter item name: ";
            cin >> item.name;
            cout << "Enter item quantity: ";
            cin >> item.quantity;
            cout << "Enter item cost: ";
            cin >> item.cost;
            data.push_back(item);
        }
    }
    void displayRecord(Item &item)
    {
        cout << endl;
        cout << "Item code: " << item.code << endl;
        cout << "Item name: " << item.name << endl;
        cout << "Item quantity: " << item.quantity << endl;
        cout << "Item cost: " << item.cost << endl;
    }
    void showRecords(string isSorted)
    {
        cout << "\n---------------------------------\n"
             << " All Records " << isSorted
             << "\n---------------------------------\n";
        for (int i = 0; i < data.size(); i++)
        {
            displayRecord(data[i]);
        }
    }
    void sortRecords()
    {
        sort(data.begin(), data.end(), [](Item i1, Item i2)
             { return i1.code < i2.code; });
    }
    void searchRecord()
    {
        cout << "\n---------------------------------\n"
             << " Search Records [by item code]"
             << "\n---------------------------------\n";
        Item item;
        cout << "\nEnter item code to search: ";
        cin >> item.code;
        auto it = find(data.begin(), data.end(), item);
        if (it != data.end())
        {
            int i = it - data.begin();
            displayRecord(data[i]);
        }
        else
        {
            cout << "\nItem not found!" << endl;
        }
    }
};

int main()
{
    Item it;
    it.addRecords();
    it.showRecords("[Default]");
    it.sortRecords();
    it.showRecords("[Sorted]");
    it.searchRecord();
    cout << endl;
    return 0;
}
