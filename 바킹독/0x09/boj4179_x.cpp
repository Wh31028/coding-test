#include <bits/stdc++.h>

using namespace std;

#define Y first 
#define X second 

int R,C;

string board[1001];
int fire[1001][1001];
int ji[1001][1001];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int,int>> Q1;
    queue<pair<int,int>> Q2;
    cin>>R>>C;
    
    for(int i=0;i<R;i++)
    {
        fill(fire[i],fire[i]+C,-1);
        fill(ji[i],ji[i]+C,-1);
    }

    for(int y=0;y<R;y++)
    {
        cin>>board[y];
        for(int x=0;x<C;x++)
        {
            if(board[y][x]=='F') 
            {
                Q1.push({y,x});   
                fire[y][x] =0;
            }
            if(board[y][x]=='J')
            {
                Q2.push({y,x});
                ji[y][x] = 0;
            }
        }
    }
    
    while(!Q1.empty())
    {
        pair<int,int> cur = Q1.front();
        Q1.pop();

        for(int i=0;i<4;i++)
        {
            int nx = dx[i] + cur.X;
            int ny = dy[i] + cur.Y;

            if(nx<0 || nx>=C || ny<0 || ny>=R) continue;
            if(board[ny][nx] == '#' || fire[ny][nx] >= 0) continue;

            fire[ny][nx] = fire[cur.Y][cur.X] + 1;
            Q1.push({ny,nx});
        }
    }

    while(!Q2.empty())
    {
        pair<int,int> cur = Q2.front();
        Q2.pop();
        for(int i=0;i<4;i++)
        {
            int nx = dx[i] + cur.X;
            int ny = dy[i] + cur.Y;

            if(nx<0 || nx>=C || ny<0 || ny>=R)
            {
                cout<<ji[cur.Y][cur.X]+1;
                return 0;
            }
            if(board[ny][nx] == '#' || ji[ny][nx]>=0) continue;
            if(fire[ny][nx] != -1 && fire[ny][nx] <= ji[cur.Y][cur.X]+1) continue;

            ji[ny][nx] = ji[cur.Y][cur.X]+1;
            Q2.push({ny,nx});
        }
    }

    cout<<"IMPOSSIBLE";

}