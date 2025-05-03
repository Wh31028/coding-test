#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long A,B;
    cin>>A>>B;
    long long big = max(A,B);
    long long small = min(A,B);
    if(big==small || big-small ==1) cout<<"0";
    else{
       cout<<big-small-1<<"\n";
      for(long long i=small+1;i<big;i++){
            cout<<i<<" ";
        }
    }
}