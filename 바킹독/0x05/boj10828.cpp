#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    stack<int> S;
    cin>>N;
    for(int i=0;i<N;i++){
        string order;
        cin>>order;

        if(order == "push"){
            int n;
            cin>>n;
            S.push(n);
        }else if(order=="top"){
            if(S.empty()!=1){
                cout<<S.top()<<"\n";
            }else cout<<"-1\n";
        }else if(order=="size"){
            cout<<S.size()<<"\n";
        }else if(order=="empty"){
            cout<<S.empty()<<"\n";
        }else if(order=="pop"){
            if(S.empty()!=1){
                cout<<S.top()<<"\n";
                S.pop();
            }else  cout<<"-1\n";
        }
    }
}