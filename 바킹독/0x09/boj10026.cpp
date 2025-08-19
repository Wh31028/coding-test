#include <bits/stdc++.h>

using namespace std;

#define X second
#define Y first
int N;
string board[101];
int blindness[101][101];
int see[101][101];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>board[i];
    }

    int count = 0;
    for(int y=0;y<N;y++)
    {
        for(int x=0;x<N;x++)
        {
            if(see[y][x] == 0)
            {
                count++;
                queue<pair<int,int>> Q;
                Q.push({y,x});
                see[y][x]=1;

                while(!Q.empty())
                {
                    pair<int,int> cur = Q.front();
                    Q.pop();

                    for(int i=0;i<4;i++)
                    {
                        int nx = dx[i] + cur.X;
                        int ny = dy[i] + cur.Y;

                        if(nx<0||nx>=N || ny<0 || ny>=N) continue;
                        if(see[ny][nx]== 1 || board[ny][nx] != board[cur.Y][cur.X]) continue;

                        see[ny][nx] = 1;
                        Q.push({ny,nx});
                    }

                }
            }
        }
    }
    cout<<count<<" ";

    int blindCount = 0;
    for(int y=0;y<N;y++)
    {
        for(int x=0;x<N;x++)
        {
            if(blindness[y][x] == 0)
            {
                blindCount++;
                queue<pair<int,int>> Q;
                Q.push({y,x});
                blindness[y][x]=1;

                while(!Q.empty())
                {
                    pair<int,int> cur = Q.front();
                    Q.pop();

                    for(int i=0;i<4;i++)
                    {
                        int nx = dx[i] + cur.X;
                        int ny = dy[i] + cur.Y;

                        if(nx<0||nx>=N || ny<0 || ny>=N) continue;
                        if(blindness[ny][nx]== 1) continue;
                        if(board[cur.Y][cur.X]=='B' && board[ny][nx] != 'B') continue;
                        if((board[cur.Y][cur.X]=='R'|| board[cur.Y][cur.X]=='G') && board[ny][nx] == 'B') continue;

                        blindness[ny][nx] = 1;
                        Q.push({ny,nx});
                    }

                }
            }
        }
    }
    cout<<blindCount;
}