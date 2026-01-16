#include <string>
#include <vector>

using namespace std;
int GCD(int a, int b)
{
    while(b != 0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int max = n>m ? n : m;
    int min = n<m ? n : m;
    int gcd = GCD(max,min);
    int lcd = n * m / gcd;
    answer.push_back(gcd);
    answer.push_back(lcd);
    
    return answer;
}