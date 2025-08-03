#include <iostream>

using namespace std;

void aPlusB()
{
	int array;
	cin >> array;
	cout << (array%10) + (array/10) << "\n"; 
}

int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		aPlusB();
	}

	return 0;
}