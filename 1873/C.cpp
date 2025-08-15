#include<iostream>
#include<vector>

using namespace std;

const vector<vector<char>> table {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};

int CalculatePoints()
{
    int points = 0;
    char shot = 0;
    for(int y = 0; y < table.size(); ++y)
    {
        for(int x = 0; x < table.size(); ++x)
        {
            cin >> shot;
            if(shot == 'X') 
            {
                points += table[y][x];
            } 
        }
    }

    return points;
}


int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        cout << CalculatePoints() << "\n";
    }
    return 0;
}
