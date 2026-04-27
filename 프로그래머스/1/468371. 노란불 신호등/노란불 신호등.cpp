#include <string>
#include <vector>

using namespace std;

long long getGCD(long long a, long long b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

long long getLCM(long long a, long long b)
{
    if(a == 0 || b == 0) return 0;
    return (a / getGCD(a, b)) * b;
}

int solution(vector<vector<int>> signals) {
    int n = signals.size();
    vector<int> cycles(n);
    long long totalLCM = 1;
    
    for(int i = 0; i < n; ++i)
    {
        cycles[i] = signals[i][0] + signals[i][1] + signals[i][2];
        totalLCM = getLCM(totalLCM, (long long)cycles[i]);
    }
    
    for(long long t = 1; t <= totalLCM; ++t)
    {
        bool allYellow = true;
        
        for(int i = 0 ; i < n; ++i)
        {
            int g = signals[i][0];
            int y = signals[i][1];
            int c = cycles[i];
            
            int pos = (t-1) % c;
            
            if(pos < g || pos >= g+y)
            {
                allYellow = false;
                break;
            }
        }
        
        if(allYellow)
            return (int)t;
    }
    return -1;
}