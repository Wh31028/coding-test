#include <bits/stdc++.h>

using namespace std;

int N;

char board[6155][6155];

void func(int n,int y,int x)
{
    if(n==3)
    {
        board[y-1][x+1] = '*';
        board[y-1][x-1] = '*';
        board[y-2][x] = '*';
        for(int i=0;i<5;i++) board[y][x-2+i] = '*';
        return;
    }

    func(n/2,y,x-n/2);
    func(n/2,y,x+n/2);
    func(n/2,y-n/2,x);
}

int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    cin>>N;

    func(N,N-1,N-1);
    
    for(int y=0;y<N;y++)
    {
        for(int x=0;x<N*2;x++)
        {
            if(board[y][x] == 0) cout<<" ";
            else cout<<board[y][x];
        }
        cout<<"\n";
    }
    return 0;
}
