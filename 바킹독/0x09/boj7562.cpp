#include <bits/stdc++.h>

using namespace std;

#define X second 
#define Y first
int T;
int board[301][301];

int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] = {-2,-1,1,2,2,1,-1,-2};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>T;

    for(int i=0;i<T;i++)
    {
        int l;
        int scx,scy;
        int ecx,ecy;
        cin>>l;
        cin>>scx>>scy;
        cin>>ecx>>ecy;
        for(int i=0;i<l;i++)
        {
            fill(board[i],board[i]+l,-1);
        }
        queue<pair<int,int>> Q;
        board[scy][scx] = 0;
        Q.push({scy,scx});

        while(board[ecy][ecx]== -1)
        {
            pair<int,int> cur = Q.front();
            Q.pop();

            for(int i=0;i<8;i++)
            {
                int nx = dx[i] + cur.X;
                int ny = dy[i] + cur.Y;

                if(nx<0 || nx>=l || ny<0 || ny>=l) continue;
                if(board[ny][nx] != -1) continue;

                board[ny][nx] = board[cur.Y][cur.X] + 1;
                Q.push({ny,nx});
            }
        }

        cout<<board[ecy][ecx]<<"\n";


    }

}