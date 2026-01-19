#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i]>'9' || s[i] < '0')
            return false;
        i++;
        
    }
    if(i!=4 && i != 6)
        return false;
    return answer;
}