#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(const auto& cmd : commands)
    {
        int i = cmd[0];
        int j = cmd[1];
        int k = cmd[2];
        vector<int> tmp(array.begin() + (i-1),array.begin() + j);
        sort(tmp.begin(),tmp.end());
        answer.push_back(tmp[k-1]);
        
    }
    return answer;
}