#include<iostream>
#include<set>

using namespace std;

bool isAlphaNumeric(char &c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

void clean(string &test)
{
	string cleaned = "";
	for(auto character : test)
		if(isAlphaNumeric(character)) 
			cleaned+= tolower(character);
	test = cleaned;
}

bool isPalindrome(string s) {
	clean(s);

	int left = 0, right = s.size()-1;
	
	while(left <= right)
		if(s[left++] != s[right--])
			return false;
	return true;
}

int main()
{
	string test = "Was it a car or a cat I saw?";

	cout << isPalindrome(test);
	test = "tab a cat";

	cout << isPalindrome(test);
	
	return 0;
}