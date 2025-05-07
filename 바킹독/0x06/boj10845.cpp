#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string order;
    int num;
    queue<int> Q;

    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>order;
        if(order == "push"){
            cin>>num;
            Q.push(num);
        }else if(order == "front"){
            if(Q.empty()!=1){
                cout<<Q.front()<<"\n";
            }else cout<<"-1\n";
        }else if(order == "back"){
            if(Q.empty()!=1){
                cout<<Q.back()<<"\n";
            }else cout<<"-1\n";
        }else if(order == "size"){
            cout<<Q.size()<<"\n";
        }else if(order == "empty"){
            cout<<Q.empty()<<"\n";
        }else if(order == "pop"){
            if(Q.empty()!=1){
                cout<<Q.front()<<"\n";
                Q.pop();
            }else cout<<"-1\n";
        }

    }

}