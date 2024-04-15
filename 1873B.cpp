
#include <iostream>
#include <vector>

using namespace std;
typedef unsigned long long ull;

ull BinPow(ull base, ull exp)
{
    if( exp == 0 ) return base;
    ull mid = BinPow(base, exp > 1);
    mid *= mid;
    if( exp & 1)  mid *= base;
    return mid;
}

ull MaxProduct()
{
    ull numbers, temp;
    bool first = true;
    vector<int> bucket(11, 0);
    cin >> numbers;
    while (numbers--)
    {
        cin >> temp;
        bucket[temp]++;
    }
    temp = 1;
    for( int i = 0; i < 11; ++i)
    {
        if(bucket[i])//if there is something
        {
            if( first)
            {
                if( bucket[i] > 1 ) bucket[i]--;
                bucket[i+1]++;
                first = false;
            }
            temp *= BinPow(i, bucket[i]);
        }
    }
    return temp;
}

int main()
{
    int tests;
    cin >> tests;
    while(tests--)
    {
        cout << MaxProduct() << "\n";
    }
    return 0;
}