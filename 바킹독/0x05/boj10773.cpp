#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin>>K;
    stack<int> S;
    for(int i=0;i<K;i++){
        int n;
        cin>>n;
        if(n!=0) S.push(n);
        else S.pop();
    }

    unsigned int sum = 0;
    while(S.empty()!=1){
        sum +=S.top();
        S.pop();
    }
    cout<<sum;
}