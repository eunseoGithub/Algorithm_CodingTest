#include <bits/stdc++.h>
using namespace std;


string SolvePassword(string N)
{
    string answer;
    list<char> T;
    auto iter = T.begin();
    for (char n : N)
    {
        if (n == '<')
        {
            if(iter != T.begin())
                iter--;
        }
        else if (n == '>')
        {
            if (iter != T.end())
                iter++;
        }
        else if (n == '-')
        {
            if (iter != T.begin())
            {
                --iter;
                iter = T.erase(iter);
            }
                
        }
        else
        {
            iter = T.insert(iter, n);
            iter++;
        }
    }
    for (char n : T)
    {
        answer += n;
    }
    return answer;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    vector<string> password;
    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        password.push_back(SolvePassword(tmp));
    }
    for (string n : password)
    {
        cout << n << endl;
    }
    

    
    return 0;
}