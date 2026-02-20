#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> st;
    st.reserve(ingredient.size());
    
    int size = ingredient.size();
    for(int i = 0 ; i < size; i++)
    {
        st.push_back(ingredient[i]);
        int sz = (int)st.size();
        if(sz >= 4)
        {
            if(st[sz - 4] == 1 && st[sz-3] == 2 && st[sz-2] ==3 && st[sz-1]==1)
            {
                st.pop_back();
                st.pop_back();
                st.pop_back();
                st.pop_back();
                answer++;
            }
        }
    }
    return answer;
}