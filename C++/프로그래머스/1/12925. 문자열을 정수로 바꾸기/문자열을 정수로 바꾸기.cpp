#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string sub1 = s.substr(0,1);
    if(sub1 == "+" || sub1 == "-")
    {
        string sub2 = s.substr(1);
        int num = stoi(sub2);
        if(sub1 == "+")
            answer = num;
        else
            answer = num * -1;
    }
    else
    {
        answer = stoi(s);
    }
    return answer;
}