#include <string>
#include <vector>
#include <numeric>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = accumulate(arr.begin(),arr.end(),double(0));
    answer = sum / arr.size();
    return answer;
}