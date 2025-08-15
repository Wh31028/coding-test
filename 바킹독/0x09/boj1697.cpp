#include <bits/stdc++.h>

using namespace std;

int board[100001];
int dx[3] = {-1,1};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,K;

    cin>>N>>K;

    queue<int> Q;

    Q.push(N);
    if(N==K){
        cout<<0;
        return 0;
    }
    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();

        for(int i=0;i<3;i++)
        {
            int nx = 0;
            if(i==2)  nx = 2 * cur;
            else      nx = dx[i]+cur;

            if(nx<0 || nx >100000) continue;
            if(nx==K)
            {
                cout<<board[cur]+1;
                return 0;
            }
            if(board[nx]>0) continue;

            Q.push(nx);
            board[nx] = board[cur] + 1;
        }

    }


}