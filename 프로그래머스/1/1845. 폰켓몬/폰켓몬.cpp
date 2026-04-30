#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    map<int,int> po;
    for(auto& pocketmon : nums)
    {
        po[pocketmon]++;
    }
    
    answer = po.size();
    if(answer > (nums.size()/2))
        answer = nums.size()/2;
    return answer;
}