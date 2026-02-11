#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int rollStart = 0;
    int index = 0;
    int size = section.size();
    while(index < size)
    {
        rollStart = section[index] + m-1;
        answer++;
        if(rollStart >= n)
            break;
        
        bool foundNext = false;
        for(int i = index + 1; i < size ; i++)
        {
            if(section[i] > rollStart)
            {
                index = i;
                foundNext = true;
                break;
            }
        }
        if(!foundNext) break;
    }
    return answer;
}