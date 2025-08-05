#include<iostream>
#include<set>

using namespace std;

void ExistIn()
{
    int size, valueToSearch, value;
    set<int> values;

    cin >> size >> valueToSearch;
    while(size--)
    {
        cin >> value;
        values.insert(value);
    }
    
    cout << (values.find(valueToSearch) != values.end() ? "YES" : "NO") << "\n";
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        ExistIn();
    }
    return 0;
}
