#include <bits/stdc++.h>

using namespace std;

#define Y first 
#define X second 

int M,N;

int board[1001][1001];
int day[1001][1001];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int maxDay = 0;
bool flag = false;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>M>>N;

    queue<pair<int,int>> Q;

    for(int y=0;y<N;y++)
    {
        for(int x=0;x<M;x++)
        {
            cin>>board[y][x];
            if(board[y][x]==1)
            {
                day[y][x]=1;
                Q.push({y,x});
            }
        }
    }

    while(!Q.empty())
    {
        pair<int,int> cur = Q.front();
        Q.pop();

        for(int i=0;i<4;i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if(nx<0 || nx >=M || ny<0 || ny>=N) continue;
            if(day[ny][nx]>0 || board[ny][nx] == -1) continue;

            board[ny][nx] = 1;
            day[ny][nx] = day[cur.Y][cur.X]+1;
            Q.push({ny,nx});

        }

    }

    for(int y=0;y<N;y++)
    {
        for(int x=0;x<M;x++)
        {
            if(maxDay<day[y][x]) maxDay = day[y][x];
            if(board[y][x] == 0)
            {
                flag = true;
                break;
            }
        }
    }

    if(flag) cout<<-1;
    else cout<<maxDay-1;

}