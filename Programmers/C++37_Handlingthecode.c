#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    int mode = 0;
    
    for(int i=0; i < code.length(); i++)
    {
        if(code[i] == '1')
        {
            mode = 1-mode;
        }
        else
        {
            if((i%2 == 0 && mode == 0) || (i%2 !=0 && mode == 1))
            {
                answer += code[i];
            }
        }
    }
    
    if(answer.empty() == true)
    {
        answer += "EMPTY";
    }
    
    return answer;
}