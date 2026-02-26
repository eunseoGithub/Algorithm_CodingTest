#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    char separator = ' ';
    istringstream iss(s);
    string strBuf;
    
    vector<int> num;
    
    while(getline(iss,strBuf,separator))
    {
        num.push_back(stoi(strBuf));
    }
    sort(num.begin(),num.end());
    answer = to_string(num[0]) + ' ' + to_string(num[num.size()-1]);
    
    return answer;
}