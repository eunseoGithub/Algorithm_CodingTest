#include <iostream>
#include <string>
#include <vector>

using namespace std;

int recursion(const string& s, int l, int r, int* count) 
{
    (*count)++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1,count);
}

int isPalindrome(const string& s,int* count) {
    return recursion(s, 0, s.length() - 1, count);
}

int main() 
{
    int T = 1;
    cin >> T;
    vector<pair<int,int>> S;
    for (int i = 0; i < T; i++)
    {
        string tmp;
        cin >> tmp;
        int count = 0;
        int result = isPalindrome(tmp, &count);
        S.push_back({ result,count});
    }
    for (pair<int, int> p : S)
    {
        cout << p.first <<" " << p.second << "\n";
    }
}