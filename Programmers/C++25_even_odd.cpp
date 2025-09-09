#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    //cout << n << " is " << (n%2==0 ? "even":"odd");
    if (n%2 == 0)
    {
        cout << n << " is even";
    }else
    {
        cout << n << " is odd";
    }
    
    return 0;
}