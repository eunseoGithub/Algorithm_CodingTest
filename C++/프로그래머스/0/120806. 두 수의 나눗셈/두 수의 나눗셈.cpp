#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float num = (float)num1 / (float)num2;
    answer = num*1000;
    return answer;
}