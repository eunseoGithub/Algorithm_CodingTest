#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int count = 0;
    while(count < n)
    {
        if(count%2==0)
            answer+="수";
        else
            answer+="박";
        count++;
    }
    return answer;
}