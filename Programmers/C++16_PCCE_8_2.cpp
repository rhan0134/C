#include <string>
#include <vector>

using namespace std;

//storage: 창고, num: 물건의 개수
string solution(vector<string> storage, vector<int> num) {
    int num_item = 0;
    vector<string> clean_storage(storage.size()); //정리한 창고
    vector<int> clean_num(num.size()); //정리한 창고의 물건의 개수
    
    for(int i=0; i<storage.size(); i++){ //창고 칸의 수만큼 반복(storage[i])
        int clean_idx = -1;
        for(int j=0; j<num_item; j++){//정리한 창고의 물건의 개수만큼 반복
            if(storage[i] == clean_storage[j]){ //만약 storage의 물건 == clean_num의 물건
                clean_idx = j;//해당 인덱스 반환
                break;
            }
        }

        if(clean_idx == -1){//일치하지 않는 경우
            clean_storage[num_item] = storage[i]; //물건 이름 추가하기(여기 수정)
            clean_num[num_item] = num[i]; //물건 개수 추가하기
            num_item += 1;//인덱스 +1
        }
        else{//일치한 경우
            clean_num[clean_idx] += num[i];//물건 개수 더하기
        }
    }
    
    // 아래 코드에는 틀린 부분이 없습니다.
    
    int num_max = -1;
    string answer = "";
    for(int i=0; i<num_item; i++){ //정리된 창고에서 개수가 가장 많은 물건의 이름을 반환
        if(clean_num[i] > num_max){
            num_max = clean_num[i];
            answer = clean_storage[i];
        }
    }
    return answer;
}