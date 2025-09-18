#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int r1 = 1;
    int r2 = 0;
    
    for(int i=0; i < num_list.size(); i++)
    {
        r1 *= num_list[i];
        r2 += num_list[i];
    }
    
    if(r1 < r2*r2)
    {
        answer = 1;
    }else
    {
        answer = 0;
    }
    
    return answer;
}