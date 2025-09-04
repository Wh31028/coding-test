#include <bits/stdc++.h>

using namespace std;

int board[200001];
int N,K;


bool OutOfBounds(int cur)
{
    if(cur<0 || cur >100000) return false;

    return true;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin>>N>>K;


    queue<int> Q;

    fill(board,board+200001,-1);
    Q.push(N);
    board[N] = 0;

    while(!Q.empty())
    {
        int cur = Q.front();
        Q.pop();

        if(cur*2 < 200001 && board[cur*2] == -1)
        {
            board[2*cur] = board[cur];
            Q.push(2*cur);
        }

        for(int nxt : {cur-1,cur+1})
        {
            if(nxt < 0 or nxt >= 2000001 or board[nxt] != -1) continue;
            board[nxt] = board[cur]+1;
            Q.push(nxt);      
        }
        
    }
        
    cout<<board[K];
        

 


}


