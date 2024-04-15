
#include <iostream>

using namespace std;

string IsPosibleToOrder()
{
    string word, answer = "YES";
    cin >> word;
    if ("ca" == word.substr(0, 2) || "ca" == word.substr(1, 2))
        answer = "NO";
    return answer;
}

int main()
{
    int tests;
    cin >> tests;
    while(tests--)
    {
        cout << IsPosibleToOrder() << "\n";
    }
    return 0;
}