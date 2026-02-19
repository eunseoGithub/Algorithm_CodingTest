#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char first = 0;
    int same = 0;
    int diff = 0;
    
    for(char c : s)
    {
        if(same == 0)
        {
            first = c;
            same = 1;
            diff = 0;
            answer++;
        }
        else
        {
            if(c == first)
                same++;
            else
                diff++;
        }
        
        if(same == diff)
        {
            same = 0;
            diff = 0;
        }
    }
    
    
    return answer;
}