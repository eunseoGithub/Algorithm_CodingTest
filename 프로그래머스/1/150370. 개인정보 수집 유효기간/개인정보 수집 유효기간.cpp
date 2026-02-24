#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

static int Todays(const string& date)
{
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8,2));
    return (year* 12 * 28) + (month * 28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<string,int> termMap;
    for(string term : terms)
    {
        string sub = term.substr(0,1);
        int subMonth = stoi(term.substr(2));
        termMap[sub] = subMonth;
    }
    int todayDays = Todays(today);
    
    int i = 0;
    for(string date : privacies)
    {
        
        int startDays = Todays(date.substr(0,10));
        string term = date.substr(11,1);
        
        int months = termMap[term];
        
        if(todayDays >= startDays + months * 28)
        {
            answer.push_back(i +1);
        }
        i++;
        
    }
 
    return answer;
}