#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int num = 1234567;
    
    int a = 0;
    int b = 1;
    
    for(int i = 2; i <= n; i++)
    {
        int c = (a+b) % num;
        a = b;
        b = c;
    }
    
    return b;
}