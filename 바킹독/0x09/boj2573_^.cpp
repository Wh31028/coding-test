#include <bits/stdc++.h>

using namespace std;

int N,M;

int arr[301][301];
int arr2[301][301];
int vis[301][301];

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

#define Y first
#define X second

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>M;

    queue<pair<int,int>> Q;
    queue<pair<int,int>> Q2;
    queue<pair<int,int>> Q3;
    for(int y=0;y<N;y++)
    {
        for(int x=0;x<M;x++)
        {
            cin>>arr[y][x];
            if(arr[y][x]) Q.push({y,x});
        }
    }
    int ans =0;
    while(!Q.empty())
    {
        ans++;
        while(!Q.empty())
        {
            pair<int,int> cur = Q.front();
            Q2.push(Q.front());
            Q.pop();

            for(int i=0;i<4;i++)
            {
                int nx = dx[i] + cur.X;
                int ny = dy[i] + cur.Y;

                if(nx<0||nx>=M||ny<0||ny>=N) continue;
                if(arr[ny][nx] > 0) continue;

                arr2[cur.Y][cur.X] +=1;
            }
        }

        while(!Q2.empty())
        {
            pair<int,int> cur = Q2.front();
            Q2.pop();

            arr[cur.Y][cur.X] = arr[cur.Y][cur.X] - arr2[cur.Y][cur.X];
            arr2[cur.Y][cur.X] = 0;
            if(arr[cur.Y][cur.X] <= 0 ) arr[cur.Y][cur.X] = 0;
            else
            {
                Q.push({cur.Y,cur.X});
                

            } 
        }

        for(int i=0;i<N;i++) fill(vis[i],vis[i]+M,0);
        int flag = 0;
        for(int y=0;y<N;y++)
        {
            for(int x=0;x<M;x++)
            {
                if(flag==1&& arr[y][x]>0 && vis[y][x]==0 )
                {
                    cout<<ans;
                    return 0;
                }
                if(arr[y][x] > 0&&flag==0)
                {
                    flag=1;
                    Q3.push({y,x});
                    vis[y][x] = 1;
                    while(!Q3.empty())
                    {
                        pair<int,int> cur = Q3.front();
                        Q3.pop();

                        for(int i=0;i<4;i++)
                        {
                            int nx = dx[i] + cur.X;
                            int ny = dy[i] + cur.Y;

                            if(nx<0||nx>=M||ny<0||ny>=N) continue;
                            if(arr[ny][nx] ==0 ||vis[ny][nx]>0) continue;

                            vis[ny][nx] = 1;
                            Q3.push({ny,nx});
                        }
                    }
                } 
                

            }
        }


    }
    cout<<0;
    

}