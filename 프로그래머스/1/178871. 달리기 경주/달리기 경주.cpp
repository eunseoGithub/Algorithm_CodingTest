#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> pos;
    pos.reserve(players.size() *2);
    
    int playerSize = players.size();
    
    for(int i = 0 ; i < playerSize;++i)
    {
        pos[players[i]] = i;
    }
    
    for(const string& name : callings)
    {
        int i = pos[name];
        if(i==0) continue;
        
        string front = players[i -1];
        
        swap(players[i], players[i-1]);
        
        pos[name] = i-1;
        pos[front] = i;
    }
    
    return players;
}