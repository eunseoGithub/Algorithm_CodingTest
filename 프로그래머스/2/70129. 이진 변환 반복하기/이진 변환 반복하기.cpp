#include <string>
#include <vector>
#include <bitset>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int zeroCount = 0;
    int convert = 0;
    
    while(s != "1")
    {
        int oneCount = 0;
        
        for(char c : s)
        {
            if( c == '1')
                oneCount++;
            else
                zeroCount++;
        }
        s = bitset<32>(oneCount).to_string();
        s.erase(0,s.find('1'));
        
        convert++;
    }
    
    
    return {convert,zeroCount};
}