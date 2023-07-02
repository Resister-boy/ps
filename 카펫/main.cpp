#include <vector>
 
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum = brown + yellow;
    for (int height = 3; true; height++) {
        if (!(sum % height)) {
            int weight = sum / height;
            if (((height - 2) * (weight - 2)) == yellow) {
                answer.push_back(weight);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}