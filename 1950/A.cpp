#include<iostream>

using namespace std;

void StarPeakOrNone()
{
    int a, b, c;
    cin >> a >> b >> c;
    string answer = "NONE";
    if(a < b)
    {
        if(b < c)
        {
            answer = "STAIR";
        }
        else if(b > c)
        {
            answer = "PEAK";
        }
    }
    cout << answer << "\n";
}

int main()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        StarPeakOrNone();
    }
    return 0;
}