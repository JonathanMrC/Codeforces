#include<iostream>

using namespace std;

int main()
{
	int testCases, a, b;
	cin >> testCases;
	while(testCases--)
	{
		cin >> a >> b;
		cout << (b - a) << "\n";
	}
	return 0;
}