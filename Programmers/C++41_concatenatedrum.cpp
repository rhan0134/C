#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string r1 = "";
    string r2 = "";
    
    for(int i=0; i < num_list.size(); i++)
    {
        if(num_list[i]%2 == 0)
        {
            r1 += to_string(num_list[i]);
        }else
        {
            r2 += to_string(num_list[i]);
        }
       
    }
    
    answer = stoi(r1) + stoi(r2);
    
    
    return answer;
}