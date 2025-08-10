#include<iostream>
#include<map>

using namespace std;

char MostOf()
{
	string input;

	cin >> input;

	map<char, int> dictionary;
	for(char value : input)
	{
		dictionary[value]++;
	}

	return (dictionary['A'] > dictionary['B'] ? 'A' : 'B');
}

int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		cout << MostOf() << '\n';
	}
	return 0;
}