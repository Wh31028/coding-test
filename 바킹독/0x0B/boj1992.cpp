#include <bits/stdc++.h>

using namespace std;

int N;
char board[65][65];

bool check(int n,int y,int x)
{

    for(int ny=0;ny<n;ny++)
    {
        for(int nx=0;nx<n;nx++)
        {
            if(board[y+ny][x+nx]!=board[y][x])
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
        cout<<board[y][x];
    }else
    {
        cout<<"(";
        func(n/2,y,x);
        func(n/2,y,x+n/2);
        func(n/2,y+n/2,x);
        func(n/2,y+n/2,x+n/2);
        cout<<")";
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(int y=0;y<N;y++)
    {
        cin>>board[y];
    }

    func(N,0,0);
}