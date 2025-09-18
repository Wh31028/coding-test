#include <bits/stdc++.h>

using namespace std;

int cz,cm,cp;

int board[2188][2188];

void func(int n,int y,int x)
{  
    if(n==1)
    {
        if(board[y][x]==0) cz++;
        if(board[y][x]==1) cp++;
        if(board[y][x]==-1)cm++;

        return;
    }

    int temp = board[y][x];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp != board[y+i][x+j])
            {
                for(int ny=0;ny<n;ny+=n/3)
                {
                    for(int nx =0;nx<n;nx+=n/3)
                    {
                        func(n/3,y+ny,x+nx);
                    }
                }
                return;
            }

        }
    }

    if(temp==0) cz++;
    if(temp==1) cp++;
    if(temp==-1)cm++;


}


int N;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>N;

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>board[i][j]; 

    func(N,0,0);

    cout<<cm<<"\n"<<cz<<"\n"<<cp;
}

