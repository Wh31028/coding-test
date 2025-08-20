#include <bits/stdc++.h>

using namespace std;


int N,M,H;

int board[101][101][101];
int days[101][101][101];

int dx[6] = {0,0,-1,1,0,0}; //위 아래 왼쪽, 오른쪽, 앞, 뒤
int dy[6] = {0,0,0,0,1,-1};
int dz[6] = {1,-1,0,0,0,0};


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>M>>N>>H;

    for(int z=0;z<H;z++)
    {
        for(int y=0;y<N;y++)
        {
            fill(days[z][y],days[z][y]+M,-1);
        }
    }
    
    queue<tuple<int,int,int>> Q;
    for(int z=0;z<H;z++)
    {
        for(int y=0;y<N;y++)
        {
            for(int x=0;x<M;x++)
            {
                cin>>board[z][y][x];
                if(board[z][y][x]==1)
                {
                    days[z][y][x] = 0;
                    Q.push({z,y,x});
                }
            }
        }
    }

    while(!Q.empty())
    {
        tuple<int,int,int> cur = Q.front();
        Q.pop();
        

        for(int i=0;i<6;i++)
        {
            int nx =  dx[i]+ get<2>(cur);
            int ny =  dy[i]+ get<1>(cur);
            int nz =  dz[i]+ get<0>(cur);

            if(nz<0||nz>=H || ny<0 || ny>=N || nx<0 || nx>M) continue;
            if(board[nz][ny][nx] == -1 || days[nz][ny][nx] != -1) continue;

            board[nz][ny][nx] = 1;
            days[nz][ny][nx] = days[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({nz,ny,nx});
        }
    }

    int max=0;
    for(int z=0;z<H;z++)
    {
        for(int y=0;y<N;y++)
        {
            for(int x=0;x<M;x++)
            {

                if(board[z][y][x]==0)
                {
                    cout<<-1;
                    return 0;
                }
                if(days[z][y][x]>max) max = days[z][y][x];
            }
        }
    }
    cout<<max;
}