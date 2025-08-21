#include<iostream>
#include<vector>
#include<set>

using namespace std;

int longestConsecutive(vector<int>& nums) {
	set<int> numsSet(nums.begin(), nums.end());
	int longest = 0, next, lenght;

	for(auto element : nums)
	{
		if(!numsSet.count(element-1))
		{
			lenght = 0;
			next = element;
			while(numsSet.count(next))
			{
				++next;
				++lenght;
			}
			longest = max(lenght, longest);
		}
	}
	return longest;
}

int main()
{
	vector<int> test{0,3,2,5,4,6,1,1};

	cout << longestConsecutive(test);
	return 0;
}