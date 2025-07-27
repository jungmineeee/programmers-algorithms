#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(auto num: arr){
        if(answer.empty() || answer.back() != num){ //(1)처음에 넣는 숫자거나 (2) 바로 직전 숫자랑 다르면
            answer.push_back(num);
        }
    }
    return answer;
}

int main(){
    vector<int> arr = {1,1,3,3,0,1,1};
    vector<int> result = solution(arr);  // 반환값 받기

    for (int x : result) {
        cout << x << " "; // cout 은 벡터를 직접 출력하지 못함.
    }
    cout << endl;
    return 0;
}