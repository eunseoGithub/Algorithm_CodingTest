#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
string solution(string s) {
    string answer = "";
    vector<char> tmp;
    int size = s.size();
    for(int i = 0; i<size; i++)
    {
        tmp.push_back(s[i]);
    }
    sort(tmp.begin(),tmp.end());
    for(int i = size-1; i>=0; --i)
    {
        answer+=tmp[i];
    }
    cout << answer << endl;
    return answer;
}