#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int size = arr1.size();
    for(int i = 0 ; i < size ; i++)
    {
        vector<int> tmp;
        int tmpSize = arr1[i].size();
        for(int k = 0 ; k < tmpSize;k++)
        {
            tmp.push_back(arr1[i][k]+arr2[i][k]);
        }
        answer.push_back(tmp);
    }
    return answer;
}