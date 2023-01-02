#include <bits/stdc++.h>
using namespace std;

int main()
{
    typedef map<string, int> mapType;
    mapType pMap;
    pMap.insert(make_pair("Maharashtra", 125));
    pMap.insert(make_pair("Uttar Pradesh", 225));
    pMap.insert(make_pair("Bihar", 120));
    pMap.insert(make_pair("West Bengal", 100));
    pMap.insert(make_pair("Madhya Pradesh", 90));

    cout << "\nAvailable States:\n\n";
    for (auto &it : pMap)
        cout << it.first << endl;

    string state;
    cout << "\nEnter state to know it's Population: ";
    getline(cin, state);

    for (auto &it : pMap)
    {
        if (it.first == state)
        {
            cout << "\n" << it.first << " => " << it.second << "\n" << endl;
            exit(0);
        }
    }
    cout << "\nNo Results Found!\n" << endl;
    return 0;
}

