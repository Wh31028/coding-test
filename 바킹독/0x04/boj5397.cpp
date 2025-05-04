#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        string order;
        cin>>order;

        list<char> input;
        list<char>::iterator cursor = input.end();

        for(int i=0;i<order.length();i++){
            if(order[i] == '<'){
                if(cursor!=input.begin()) cursor--;
            }else if(order[i] == '>'){
                if(cursor!=input.end()) cursor++;
            }else if(order[i] =='-'){
                if(input.size()!=0 && cursor!=input.begin()){
                    cursor--;
                    cursor = input.erase(cursor);
                }
            }else{
                input.insert(cursor,order[i]);
            }
        }
        
        for(char x :input) cout<<x;
        cout<<"\n";
        
    }
}