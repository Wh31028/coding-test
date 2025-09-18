#include <bits/stdc++.h>

using namespace std;

int board[129][129];
int N;
int ans[2];

bool check(int n,int y,int x)
{
    int ch = board[y][x];
    for(int ty=0;ty<n;ty++)
    {
        for(int tx=0;tx<n;tx++)
        {
            if(board[y+ty][x+tx] != ch)
            {
                return false;
            }
                
        }
    }
    return true;
}

void func(int n,int y,int x)
{

    if(check(n,y,x))
    {
        ans[board[y][x]]++;
        return;
    }else
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                func(n/2,y+i*n/2,x+j*n/2);
            }
        }
    }

}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(int y=0;y<N;y++)
    {
        for(int x=0;x<N;x++)
        {
            cin>>board[y][x];
        }
    }
  
    func(N,0,0);

    cout<<ans[0]<<"\n"<<ans[1];
}