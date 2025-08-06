#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    while(!progresses.empty()){
        for(size_t i = 0; i < progresses.size(); ++i){
            progresses[i] += speeds[i]; 
        }
        int count = 0;
        while(!progresses.empty() && progresses.front() >= 100){
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            count++;        
        }
        if(count > 0){
            answer.push_back(count);
        }
    }
    return answer;
}

int main(){
    vector<int> progresses = {95, 90, 99, 99, 80, 99};
    vector<int> speeds = {1, 1, 1, 1, 1, 1};
    vector<int> result = solution(progresses, speeds);  // 반환값 받기

    for (int x : result) {
        cout << x << " "; // cout 은 벡터를 직접 출력하지 못함.
    }
    cout << endl;
    return 0;
}