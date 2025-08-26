#include <iostream>

using namespace std;

int main(void) {
    int number;
    cin >> number;

    int answer = 0;

    //반복을 고쳐줘야함
    //1. number의 범위: 10 <= number <= 2,000,000,000 => 5까지만 돌려주면 됨
    //  - 이 방법은 쓸데없는 반복이 들어가게 됨
    //2. for문을 while 문으로 바꾸어 number가 0이 되면 빠져나오는 코드로 바꾸기(for문에서 number를 바꾸는 것보다 안정적)
    //  - while(number != 0)
    //  - while(number)
    for (int i = 0; i < 5; i++) { 
        answer += number % 100;
        number /= 100;
    }
    cout << answer << endl;
    return 0;
}