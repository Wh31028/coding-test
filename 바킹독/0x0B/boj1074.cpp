#include <bits/stdc++.h>

using namespace std;

int func(int N,int r,int c)
{
    if(N==0) return 0;
    int half = 1<<(N-1); //if N==3 2^2

    if(r<half && c<half) return func(N-1,r,c);
    if(r<half && c>=half) return half*half + func(N-1,r,c-half);
    if(r>=half && c<half) return 2*half*half + func(N-1,r-half,c);
    return 3*half*half+func(N-1,r-half,c-half);


}


int N,r,c;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin>>N>>r>>c;

    cout<<func(N,r,c);
}