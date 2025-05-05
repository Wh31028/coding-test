#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    stack<int> S;
    stack<int> idx;
    vector<int> V;

    //바킹독 풀이 참조
    // stack<pair<int,int>> tower;

    // tower.top().first;
    // tower.top().second;

    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        if(S.empty()!= 1 && num > S.top()){
            while(S.empty()!= 1 &&num>S.top()){
                S.pop();
                idx.pop();
            }
            if(S.empty()) V.push_back(0);
            else V.push_back(idx.top());

            S.push(num);
            idx.push(i+1);
        }else if(S.empty()!= 1 && num < S.top()){
            V.push_back(idx.top());
            S.push(num);
            idx.push(i+1);
        }
        else{
            S.push(num);
            V.push_back(0);
            idx.push(i+1);
        }
    }
    for(int x: V) cout<<x<<" ";
}
