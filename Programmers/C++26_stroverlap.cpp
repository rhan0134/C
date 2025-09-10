#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    //answer = my_string.replace(s,overwrite_string.size(),overwrite_string);
    for(int i=s; i < s + overwrite_string.length(); i++)
    {
        my_string[i] = overwrite_string[i-s];
    }
    
    answer = my_string;
    
    return answer;
}