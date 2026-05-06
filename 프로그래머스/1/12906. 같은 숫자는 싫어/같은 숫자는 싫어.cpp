#include <vector>
#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> s;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(!s.empty() && s.top() == arr[i])
        {
            s.pop();
        }
        s.push(arr[i]);
    }
    vector<int> answer;
    for(int i = s.size()-1; i >= 0; i--)
    {
        answer.push_back(s.top());
        s.pop();
    }
    reverse(answer.begin(), answer.end());
    return answer;
}