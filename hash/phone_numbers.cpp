#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book){
    bool answer = true;
    sort(phone_book.begin(), phone_book.end()); // 정렬먼저
    for(int i = 0; i < phone_book.size();i++){
        if(phone_book[i+1].find(phone_book[i]) == 0){ // 조건문 변경
        // 기존: != npose --> 위치 상관없이 들어 있기만 하냐
        // 변경후: == 0  --> 접두어 위치인지.
            return false;
        }
    }    
    return true;
}

int main(){
    vector <string> phone_book = {"12","123","1235","567","88"};
    cout << solution(phone_book) <<endl;
    string a="12";
    string b="1234";
    //cout<<b.find(a)<<endl;
}