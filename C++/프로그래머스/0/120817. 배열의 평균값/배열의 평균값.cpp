#include <string>
#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double sum = accumulate(numbers.begin(),numbers.end(),double(0));
    answer = sum / numbers.size();
    
    return answer;
}