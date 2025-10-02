#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 0; i < numLog.size()-1; i++)
    {
        if(numLog[i+1] - numLog[i] == 1)
        {
            answer += 'w';
        }else if(numLog[i+1] - numLog[i] == -1)
        {
            answer += 's';
        }else if(numLog[i+1] - numLog[i] == 10)
        {
            answer += 'd';
        }else if(numLog[i+1] - numLog[i] == -10)
        {
            answer += 'a';
        }
    }
    
    return answer;
}

/**
#include <string>
#include <vector>
#include <map>
using namespace std;

map <int, string> m = { {1, "w"}, {-1, "s"}, {10, "d"}, {-10, "a"} };
string solution(vector<int> numLog) {
    string answer = "";
    for (int i = 1; i < numLog.size(); i++)
        answer += m[numLog[i] - numLog[i - 1]];
    return answer;
}
**/