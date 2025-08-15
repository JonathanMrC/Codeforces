#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string CheckPossibleSort()
{
    string possible = "YES";
    int size, wide;
    cin >> size >> wide;

    vector<int> box(size);
    for(auto &element : box) cin >> element;
    
    vector<int> Sortedbox(box);
    sort(Sortedbox.begin(), Sortedbox.end());
    
    if(wide == 1) //check if sorted
    {
        if(Sortedbox != box) 
        {
            possible = "NO";
        }
    }
    return possible;
}


int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << CheckPossibleSort() << "\n";
    }
    return 0;
}
