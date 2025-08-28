#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> cpr) {
    vector<int> answer = {0, 0, 0, 0, 0};
    vector<string> basic_order = {"check", "call", "pressure", "respiration", "repeat"};

    for(int i=0; i < 5; i++){ //5 => cpr.size()
        for(int j=0; j< 5; j++){ // 5 => basic_order.size()
            if(cpr[i] == basic_order[j]){
                answer[i] = j+1;
                break;
            }
        }
    }

    return answer;
}