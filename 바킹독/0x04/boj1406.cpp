#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    int M;
    cin>>input;
    list<char> L;
    for(int i=0;i<input.length();i++){  
        L.push_back(input[i]);
    }

    cin>>M;

    list<char>::iterator cursor = L.end();

    for(int i=0;i<M;i++){

        char order;
        cin>>order;
        if(order=='P'){
            char c;
            cin>>c;
           L.insert(cursor,c); //가리키는 곳 앞에 삽입
        }else if(order == 'L'){
            if(cursor!= L.begin()) cursor--;
        }else if(order=='D'){
            if(cursor!=L.end()) cursor++;
        }else if(order=='B'){
            if(cursor!=L.begin()){
                cursor--;
                cursor = L.erase(cursor); //지운 다음 값 주소를 반환
            }
        }
    }
    
    for(auto x : L){
        cout<<x;
    }

}
