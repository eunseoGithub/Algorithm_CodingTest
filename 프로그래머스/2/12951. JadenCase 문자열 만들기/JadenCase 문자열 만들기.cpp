#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
    bool isStart = true;
    
    for(char& ch : s)
    {
        if(ch == ' ')
        {
            isStart = true;
        }
        else
        {
            if(isStart)
            {
                ch = toupper(ch);
                isStart = false;
            }
            else
            {
                ch = tolower(ch);
            }
        }
    }
    
    return s;
}