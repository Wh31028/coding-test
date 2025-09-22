#include <bits/stdc++.h>

using namespace std;

int N;

char board[2189][2189];

void func(int n,int y,int x)
{
    if(n==3)
    {
        for(int ny=0;ny<n;ny++)
        {
            for(int nx=0;nx<n;nx++)
            {
                if(nx==n/2 && ny==n/2) continue;
                else board[y+ny][x+nx]= '*';
            }
        }
        return;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==1 && i==1) continue;
            func(n/3,y+n/3*i,x+n/3*j);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    cin>>N;

    func(N,0,0);
    
    for(int y=0;y<N;y++)
    {
        for(int x=0;x<N;x++)
        {
            if(board[y][x] == 0) cout<<" ";
            else cout<<board[y][x];
            
        }
        cout<<"\n";
    }


}