#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char &l : s)
    {
        if(l == ' ')
            continue;
        if(l<='Z' && l+n> 'Z')
        {
            l = (l+n - 'Z') + 'A' -1;   
            continue;
        }
        if(l<='z' & l+n > 'z')
        {
            l = (l+n -'z') + 'a' -1;
            continue;
        }
        l = l + n;
    }
    return s;
}