#include <bits/stdc++.h>

using namespace std;

#define Y first
#define X second
int board[502][502];
bool vis[502][502];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int n,m;
int num;
int maxExtent=0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;

    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>board[i][j];
        }
    }


    for(int y=1;y<=n;y++){
        for(int x=1;x<=m;x++){
            if(vis[y][x]==1 || board[y][x] != 1) continue;
            num++;
            queue<pair<int,int>> Q;
            int extent = 1;
            vis[y][x] = 1;
            Q.push({y,x});
            while(!Q.empty()){
                pair<int,int> cur = Q.front(); 
                Q.pop();
                for(int i=0;i<4;i++){
                    int nx= cur.X + dx[i];
                    int ny = cur.Y + dy[i];
                    if(nx<=0||nx>m||ny<=0||ny>n) continue;
                    if(vis[ny][nx]==1 || board[ny][nx] != 1) continue;
                    extent++;
                    vis[ny][nx] = 1;
                    Q.push({ny,nx});
                }
            }
            if(maxExtent<extent) maxExtent = extent;
            

        }
    }
    cout<<num<<"\n"<<maxExtent;
    


}