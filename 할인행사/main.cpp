#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int len = discount.size();
    map<string, int> wantMap;
    
    for (int i = 0; i < want.size(); i++) {
        wantMap[want[i]] = number[i];
    }
    
    for (int i = 0; i + 9 < len; i++) {
        int count = 0;
        map <string, int> tmpMap(wantMap);
        for (int j = i; j < i + 10; j++) {
            tmpMap[discount[j]]--;
        }
        for (int k = 0; k < want.size(); k++) {
            if (tmpMap[want[k]] <= 0)
                tmpMap[want[k]] = 0;
            count += tmpMap[want[k]];
        }
        if (!count)
            answer++;
    }    
    return answer;
}