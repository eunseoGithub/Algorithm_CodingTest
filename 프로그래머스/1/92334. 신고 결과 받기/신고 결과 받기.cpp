#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    int n = id_list.size();
    
    unordered_map<string,int> idx;
    idx.reserve(n*2);
    for(int i = 0 ; i < n; i++)
    {
        idx[id_list[i]] = i;
    }
    
    unordered_set<string> uniq;
    uniq.reserve(report.size()*2);
    
    for(auto& r : report)
    {
        uniq.insert(r);
    }
    vector<int> reportedCnt(n,0);
    
    vector<pair<int,int>> edges;
    edges.reserve(uniq.size());
    
    for(auto &r : uniq)
    {
        int sp = r.find(' ');
        string a = r.substr(0, sp);
        string b = r.substr(sp+1);
        
        int u = idx[a];
        int v = idx[b];
        edges.push_back({u,v});
        reportedCnt[v]++;
    }
    
    vector<int> answer(n,0);
    for(auto &e : edges)
    {
        int u = e.first;
        int v = e.second;
        if(reportedCnt[v] >= k)
            answer[u]++;
    }
    
    return answer;
}