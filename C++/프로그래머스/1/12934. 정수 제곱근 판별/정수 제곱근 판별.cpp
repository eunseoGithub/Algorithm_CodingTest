#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long r = (long long)sqrt((long double)n);
    if(r*r == n)
        return (r+1)*(r+1);
    else
        return -1;
    
    
}