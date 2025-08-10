#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BestPresent()
{
	int size;
	cin >> size;
	vector<int> container(size);
	for(auto &value : container) cin >> value;
	
	sort(container.begin(), container.end());
	
	container[0]++;//one more time the greates value
	
	size = 1;
	for(auto value : container) size*=value;

	cout << size << "\n";
}

int main()
{
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		BestPresent();
	}
	return 0;
}