#include<iostream>
#include<vector>

using namespace std;

void GetDiff()
{
	int size = 0, stepsgreater = 0;
	
	cin >> size;
	
	vector<pair<int, int>> values(size);

	for(pair<int, int> &value : values) cin >> value.first;
	for(pair<int, int> &value : values) cin >> value.second;
	
	for(pair<int, int> &value : values) 
	{
		if(value.first > value.second)
			stepsgreater += value.first - value.second;
	}
	
	cout << stepsgreater+1 << "\n";
}

int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		GetDiff();
	}
	return 0;
}