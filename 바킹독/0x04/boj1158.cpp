#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,K;
    cin>>N>>K;

    list<int> L;
    for(int i=1;i<=N;i++){
        L.push_back(i);
    }

    cout<<"<";
    while(L.size()!=0){
        for(int i=0;i<K-1;i++){
            int num = L.front();
            L.pop_front();
            L.push_back(num);
        }
        int num = L.front();
        L.pop_front();
        cout<<num;
        if(L.size() !=0){
            cout<<", ";
        }
    }
    cout<<">";


}
