#include<iostream>

using namespace std;

bool VanyaWins()
{
	int actualValue;
	cin >> actualValue;
	return (actualValue % 3);
}

int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		cout << (VanyaWins() ? "First" : "Second") << "\n";
	}
	return 0;
}