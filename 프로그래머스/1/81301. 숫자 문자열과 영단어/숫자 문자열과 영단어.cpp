#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string s) {
    int answer = 0;
    int size = s.length();
    string number[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int numberCount[10]= {4,3,3,5,4,4,3,5,5,4};
    vector<int> total;
    for(int i = 0 ; i<size;i++)
    {
        if(s[i]>='a')
        {
            string sub = s.substr(i,2);
            for(int j = 0 ; j<10;j++)
            {
                string numSub = number[j].substr(0,2);
                if(sub == numSub)
                {
                    total.push_back(j);
                    i =  i + numberCount[j] -1;
                    break;
                }
            }
        }
        else
        {
            total.push_back(s[i] - '0');
        }
    }
    int totalSize = total.size() -1;
    for(int i = totalSize; i >=0; i--)
    {
        answer += total[i] * pow(10,totalSize - i);   
    }
    return answer;
}