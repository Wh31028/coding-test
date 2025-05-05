#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int i = 1;
    stack<int> S;
    list<char> L;
    
    cin>>n;
    while(i<=n || S.empty()!=1){
        int num;
        cin>>num;
        while(num>=i){
            S.push(i);
            L.push_back('+');
            i++;
        }
        if(S.top()!=num){
            L.push_back('N');
            break;
        }
        S.pop();
        L.push_back('-');
    }

    if(L.back() =='N') cout<<"NO";
    else for(char x : L) cout<<x<<"\n";

}
