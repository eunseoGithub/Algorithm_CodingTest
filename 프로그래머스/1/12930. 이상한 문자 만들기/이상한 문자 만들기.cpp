#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = s;
    int size = s.size();
    int idx=0;
    for(int i = 0 ; i < size; ++i)
    {
        if(answer[i] == ' ')
            idx = 0;
        else
        {
            if(idx % 2 == 0)
                answer[i] = (char)toupper((unsigned char)answer[i]);
            else
                answer[i] = (char)tolower((unsigned char)answer[i]);
            idx++;
        }
    }
    return answer;
}