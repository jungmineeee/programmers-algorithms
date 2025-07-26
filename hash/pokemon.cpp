#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums)
{
    unordered_map<int, int> pick;
    int answer = 0;
    for(auto n : nums){pick[n]++;} // 포켓몬 종류별로 쌍 생성
    for(auto p : pick){answer ++;} // 중복되지 않게 포켓몬 일단 고르기.
    
    if(nums.size()/2 > answer) return answer; // 중복되지 않는 포켓몬 다 골랐으면 max는 n/2로 한정됨.
    else return nums.size()/2;
    
    // 마지막 부분 조건문 없이도 min() 으로 해결 가능.
    // min((int)pick.size(), (int)nums.size() / 2);
}

#include <iostream>
int main() {
    vector<int> nums = {3, 1, 2, 3};
    
    cout << "가져갈 수 있는 포켓몬 수: " << solution(nums) << endl;
    return 0;
}