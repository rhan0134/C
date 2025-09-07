#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(int i=0; i < str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'a' + (str[i] - 'A');
        }else
        {
            str[i] = 'A' + (str[i] - 'a');
        }
    }
    
    cout << str;
    
    return 0;
}