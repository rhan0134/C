#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer1 = 0;
    int answer2 = 0;
    
    answer1 = stoi(to_string(a) + to_string(b));
    answer2 = 2 * a * b;
    
    return max(answer1, answer2);
}