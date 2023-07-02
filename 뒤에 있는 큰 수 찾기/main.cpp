#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size());
    stack<int> sta;
    
    int last = numbers.size() - 1;
    for (int i = last; i >= 0; i--) {
        while(1) {
            if(sta.empty()) {
                answer[i] = -1;
                break;
            }
            if(sta.top() > numbers[i]) {
                answer[i] = sta.top();
                break;
            }
            sta.pop();
        }
        sta.push(numbers[i]);
    }
    return answer;
}