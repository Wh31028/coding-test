#include <bits/stdc++.h>

using namespace std;

#define X second
#define Y first

int board[202][202];
int vis[32][202][202];
int K,W,H;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int hdx[8] = {1,2,2,1,-1,-2,-2,-1};
int hdy[8] = {-2,-1,1,2,2,1,-1,-2};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>K>>W>>H;

    for(int y=0;y<H;y++)
    {
        for(int x=0;x<W;x++)
        {
            cin>>board[y][x];
        }
    }

    queue<tuple<int,int,int>> Q;
    

    Q.push({0,0,0});
    vis[0][0][0] = 1;


    while(!Q.empty()) 
    {
        int vk,vy,vx;
        tie(vy,vx,vk) = Q.front();
        Q.pop();

        if(vk <K)
        {
            for(int i=0;i<8;i++)
            {
                int nx = hdx[i] + vx;
                int ny = hdy[i] + vy;

                if(nx<0||nx>=W ||ny<0||ny>=H) continue;
                if(board[ny][nx]==1) continue;
                if(vis[vk+1][ny][nx]>0) continue;

                vis[vk+1][ny][nx] = vis[vk][vy][vx]+1;
                Q.push({ny,nx,vk+1});
            }
        }
        

        for(int i=0;i<4;i++)
        {
            int nx = dx[i] + vx;
            int ny = dy[i] + vy;

            if(nx<0||nx>=W ||ny<0||ny>=H) continue;
            if(board[ny][nx]==1) continue;
            if(vis[vk][ny][nx]>0) continue;

            vis[vk][ny][nx] = vis[vk][vy][vx]+1;
            
            Q.push({ny,nx,vk});
        }

    }

    int ans = 1000000;
    
    for(int i=0;i<=K;i++)
    {
        if(vis[i][H-1][W-1]) ans = min(ans,vis[i][H-1][W-1]);
    }
    if(ans != 1000000 ) cout<<ans-1;
    else cout<<-1;
}