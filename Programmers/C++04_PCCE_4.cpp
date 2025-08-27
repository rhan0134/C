#include <iostream>

using namespace std;

int main(void) {
    string code;
    cin >> code;
    string last_four_words = code.substr(code.size()-4, 4); //substr(시작위치, 길이)

    if(last_four_words == "_eye")
    {
        cout << "Ophthalmologyc";
    }
    else if(last_four_words == "head") //"head"뒤에 s를 붙이면("head"s) std::sting을 의미 => 의도를 더 명확히 표현(C++14 이후에 추가된 문자열 리터럴 접미사)
    {
        cout << "Neurosurgery";
    }
    else if(last_four_words == "infl")
    {
        cout << "Orthopedics";
    }
    else if(last_four_words == "skin")
    {
        cout << "Dermatology";
    }
    else
    {
        cout << "direct recommendation";
    }
    
    return 0;
}