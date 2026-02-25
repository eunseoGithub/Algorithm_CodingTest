#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int h = park.size();
    int w = park[0].size();
    
    int r = -1, c = -1;
    for( int i = 0; i <h ; i++)
    {
        for(int j=0; j< w; j++)
        {
            if(park[i][j] == 'S')
            {
                r = i;
                c = j;
                break;
            }
        }
        if( r!=-1) break;
    }
    
    int routeSize = routes.size();
    
    for(int i = 0; i < routeSize; i++)
    {
        char d = routes[i][0];
        int dist = routes[i][2] - '0';
        
        int dr = 0;
        int dc = 0;
        
        if( d == 'N')
            dr = -1;
        else if(d == 'S')
            dr = 1;
        else if(d == 'W')
            dc = -1;
        else if(d == 'E')
            dc = 1;
        
        int nr = r;
        int nc = c;
        bool ok = true;
        
        
        for(int step=0; step < dist ; step++)
        {
            nr += dr;
            nc += dc;
            
            if(nr < 0 || nr >= h || nc < 0 || nc >=w)
            {
                ok = false;
                break;
            }
            
            if(park[nr][nc]=='X')
            {
                ok = false;
                break;
            }
        }
    
    if(ok)
    {
        r = nr;
        c = nc;
    }
    
    
    
    }
    return {r,c};
}