#include <bits/stdc++.h>

using namespace std;

#define Y first
#define X second
string board[102];
int dis[102][102];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int n,m;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for(int y=0;y<n;y++){
            cin>>board[y];
        }

    for(int y=0;y<n;y++) fill(dis[y],dis[y]+m,-1);
   
    queue<pair<int,int>> Q;
    Q.push({0,0});
    dis[0][0] = 0;

    while(!Q.empty())
    {
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int i=0;i<4;i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if(board[ny][nx]!='1' || dis[ny][nx]!=-1) continue;
            Q.push({ny,nx});
            dis[ny][nx] = dis[cur.Y][cur.X]+1;
        }
    }
    cout<<dis[n-1][m-1]+1;
}