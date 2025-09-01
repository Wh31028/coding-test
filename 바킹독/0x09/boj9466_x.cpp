#include <bits/stdc++.h>

using namespace std;


int T;
int board[100002];
int group[100002];
const int NOT_VISITED = 0;
const int CYCLE_IN = -1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>T;

    for(int i=0;i<T;i++)
    {
        int n;
        cin>>n;
        fill(group+1,group+n+1,0);

        for(int i=1;i<=n;i++)
            cin>>board[i];
        
        
        for(int i=1;i<=n;i++)
        {
            if( group[i] == NOT_VISITED)
            {
                int cur = i;
                while(true)
                {    
                    group[cur] = i;
                    cur = board[cur];
                    if(group[cur] == i)
                    {
                        while(group[cur] != CYCLE_IN)
                        {
                            group[cur] = CYCLE_IN;
                            cur = board[cur];
                        }
                        break;
                    }
                    else if(group[cur] != 0 ) break;
                }
        
            
            }
    
        }

        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(group[i] != CYCLE_IN) ans++;
        }
        cout<<ans<<"\n";

    }
}