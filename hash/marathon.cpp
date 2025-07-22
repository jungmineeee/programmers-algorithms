// [프로그래머스] 완주하지 못한 선수
// 정답은 맞으나, 효율성 통과 못함.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(string s : participant){ // participant에 있는 애들 순회하면서
        auto it = find(completion.begin(), completion.end(), s); // 완주자 명단에 있는지 탐색
        if(it != completion.end()){ // 있으면
            *it = ""; // 명단에서 지우기
        }
        else{answer = s;} // 없으면 그 사람이 완주 못한사람.
    }
    return answer;
}

#ifdef LOCAL_TEST
#include <iostream>
int main() {
    vector<string> p = {"leo", "kiki", "eden"};
    vector<string> c = {"eden", "kiki"};

    cout << "완주하지 못한 선수: [" << solution(p, c) << "]" << endl;
    return 0;
}
#endif