#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int size = goal.size();
    int card1Index = 0;
    int card2Index = 0;
    for(int i = 0 ; i < size;++i)
    {
        if(goal[i] == cards1[card1Index])
        {
            card1Index++;
        }
        else if(goal[i] == cards2[card2Index])
        {
            card2Index++;
        }
        else
        {
            return "No";
        }
    }
    return "Yes";
}