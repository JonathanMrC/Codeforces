#include<iostream>

using namespace std;

void ArrayColoring()
{
    int size, value, pair = 0, odd = 0;
    cin >> size;
    while(size--)
    {
        cin >> value;
        if(value & 1) ++odd;
        else ++pair;
    }
    cout << (odd & 1 ? "NO" : "YES") << "\n";
}

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        ArrayColoring();
    }
    return 0;
}