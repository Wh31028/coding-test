#include <bits/stdc++.h>

using namespace std;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

char board[1000][1000];
int dist[1000][1000][2];
// dist[x][y][0] : 벽을 하나도 부수지 않고 (x,y)까지 오는데 걸리는 비용
// dist[x][y][1] : 벽을 하나만 부수고 (x,y)까지 오는데 걸리는 비용, (x,y)가 벽이라서 부수는 경우 포함

int N,M;

bool OOB(int x, int y){
  return x < 0 || x >= M || y < 0 || y >= N;
}

int bfs()
{
    for (int y = 0; y < N; y++)
        for (int x = 0; x < M; x++)
            dist[y][x][0] = dist[y][x][1] = -1;
    dist[0][0][0] = dist[0][0][1] = 1;
    queue<tuple<int,int,int>> q;
    q.push({0,0,0});
    while(!q.empty())
    {
        int x,y,broken;
        tie(y,x,broken) = q.front();
        if(x== M-1 && y == N-1) return dist[y][x][broken];
        q.pop();
        int nextdist = dist[y][x][broken] + 1;
        for (int dir = 0; dir < 4; ++dir) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(OOB(nx, ny)) continue;      
            if (board[ny][nx] == '0' && dist[ny][nx][broken] == -1) 
            {
                dist[ny][nx][broken] = nextdist;
                q.push({ny, nx, broken});
            }      
            // (nx, ny)를 부수는 경우
            if (!broken && board[ny][nx] == '1' && dist[ny][nx][1] == -1)
            {
                dist[ny][nx][1] = nextdist;
                q.push({ny, nx, 1});
            }      
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;


    for(int y=0;y<N;y++)
    {
        for(int x=0;x<M;x++)
        {
            cin >> board[y][x];
        }
    }

    cout<<bfs();
    return 0;
 

   
}