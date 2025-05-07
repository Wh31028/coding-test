
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    int num;
    cin>>N>>M;

    deque<int> Q;
    for(int i=1;i<=N;i++) Q.push_back(i);

    int count = 0;
    for(int i=0;i<M;i++){
        cin>>num;
        int idx;
        for(int i=0;i<Q.size();i++){
            if(num==Q[i]) idx = i;
        }
        
        if(idx >(Q.size())/2){
            while(Q.front() != num){
                Q.push_front(Q.back());
                Q.pop_back();
                count++;
            }
        }else{
            while(Q.front() != num){
                Q.push_back(Q.front());
                Q.pop_front();
                count++;
            }
        }
        Q.pop_front(); 
    }
    cout<<count;
}