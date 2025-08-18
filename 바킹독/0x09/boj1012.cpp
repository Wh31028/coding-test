#include <bits/stdc++.h>

using namespace std;

#define Y first 
#define X second
int M,N,K,T;
int board[51][51];
int insect[51][51];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    cin>>T;

    for(int i=0;i<T;i++)
    {
        for(int y=0;y<N;y++)
        {
            fill(board[y],board[y]+51,0);
            fill(insect[y],insect[y]+51,0);
        }
        
        cin>>M>>N>>K;
        for(int i=0;i<K;i++)
        {
            int x,y;
            cin>>x>>y;
            board[y][x] = 1;
        }
        int count=0;

        for(int y=0;y<N;y++)
        {
            for(int x=0;x<M;x++)
            {
                if(board[y][x]==1 && insect[y][x] == 0)
                {
            
                    count++;
                    insect[y][x] = 1;
                    queue<pair<int,int>> Q;
                    Q.push({y,x});
                    while(!Q.empty())
                    {
                        pair<int,int> cur = Q.front();
                        Q.pop();

                        for(int i=0;i<4;i++)
                        {
                            int nx = cur.X + dx[i];
                            int ny = cur.Y + dy[i];

                            if(nx<0 || nx>=M || ny<0 || ny>=N) continue;
                            if(insect[ny][nx]==1 || board[ny][nx] == 0 ) continue;
                            insect[ny][nx] = 1;
                            Q.push({ny,nx});
                        }

                    }
                }
            }
        }
        cout<<count<<"\n";
    }
    
}