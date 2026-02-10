#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    
    int size = nums.size();
    
    vector<int> sum;
    
    for(int i = 0 ; i < size-2 ;++i)
    {
        for(int j = i+1; j < size-1; ++j)
        {
            for(int k = j+1; k< size; ++k)
            {
                if(((nums[i] + nums[j] + nums[k]) % 2)!=0)
                {
                    sum.push_back(nums[i] + nums[j] + nums[k]);
                }
            }
        }
    }
    int sumSize = sum.size();
    
    for(auto a : sum)
    {
        bool isPrime = true;
        for(int i = 2; i <a; i++)
        {
           if(a%i == 0)
               isPrime = false;
        }
        if(isPrime)
            answer++;
    }
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}