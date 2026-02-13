#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> student(n+2,1);
    
    for(int l : lost) student[l]--;
    
    for(int r : reserve) student[r]++;
    
    for(int i = 1; i <= n ; i++)
    {
        if(student[i]==0)
        {
            if(student[i-1] == 2)
            {
                student[i-1]--;
                student[i]++;
            }
            else if(student[i+1] == 2)
            {
                student[i+1]--;
                student[i]++;
            }
        }
    }
    
    for(int i = 1; i <= n ; i++)
    {
        if(student[i] >=1) answer++;
    }
    
    return answer;
}