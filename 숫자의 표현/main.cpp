#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 1;
    while (i <= n) {
        if (!(n % i)) {
            answer++;
        }
        i += 2;
    }
    return answer;
}