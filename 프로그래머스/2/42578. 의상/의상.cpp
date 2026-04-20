#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string, int> count;
    
    
    for(const auto& cloth : clothes)
    {
        count[cloth[1]]++;
    }
    answer = 1;
    for(const auto& cloth : count)
    {
        answer *= (cloth.second + 1);
    }
    answer -= 1;
    return answer;
}