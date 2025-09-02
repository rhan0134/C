#include <iostream>

using namespace std;

int main(void) {
    int year, answer;
    string age_type;
    cin >> year >> age_type;

    if (age_type == "Korea") {
        answer = 2030-year + 1; //한국식 나이
    }
    else if (age_type == "Year") {
        answer = 2030 - year; //연 나이
    }

    cout << answer << endl;
    return 0;
}