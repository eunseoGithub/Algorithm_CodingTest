#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int size = sizes.size();
    int maxW = 0;
    int maxH = 0;
    for(int i = 0 ; i < size;i++)
    {
        if(sizes[i][0] < sizes[i][1])
        {
            int tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        if(sizes[i][0] > maxW)
            maxW = sizes[i][0];
        if(sizes[i][1] > maxH)
            maxH = sizes[i][1];
    }
    answer = maxH * maxW;
    return answer;
}