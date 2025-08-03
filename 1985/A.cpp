#include<iostream>

using namespace std;

void SwitchFirstLetter()
{
	string first, second;
	cin >> first >> second;
	swap(first[0], second[0]);
	cout << first << ' ' << second << "\n";
}

int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		SwitchFirstLetter();
	}
	return 0;
}