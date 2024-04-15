#include <iostream>

using namespace std;

void PrintFibonacci(int n){
    int a = 0, b = 1, temp = 0;
    while(n--){
        cout << a << ' ';
        temp = a;
        a+=b;
        b = temp;
    }
}

//0 1 1 2 3 5 8 13


int main(){
    int n;
    cin >> n;
    PrintFibonacci(n);
    return 0;
}