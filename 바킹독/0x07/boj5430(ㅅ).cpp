#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        string order, arrI;
        deque<int> D;
        bool reverseFlag = false;
        bool errorFlag =false;
        cin>>order;
        int n;
        cin>>n;
        cin>>arrI;
        arrI = arrI.substr(1,arrI.length()-2);
        stringstream sstream(arrI);
        string word;
        while(getline(sstream,word,','))
        {
            D.push_back(stoi(word));
        }

        for(int i=0;i<order.length();i++){
            if(order[i]=='R'){
                if(reverseFlag){
                    reverseFlag=false;
                }else{
                    reverseFlag=true;
                }
            }else if(order[i]=='D'){
                if(D.empty()){
                    errorFlag=true;
                    break;
                }
                if(reverseFlag){
                    D.pop_back();
                }else{
                    D.pop_front();
                }
            }
        }
        
        if(errorFlag){
            cout<<"error\n";
        }else{
            cout<<"[";
            while(!D.empty()){
                if(reverseFlag){
                    cout<<D.back();
                    D.pop_back();
                    if(!D.empty()) cout<<",";
                }else{
                    cout<<D.front();
                    D.pop_front();
                    if(!D.empty()) cout<<",";
                }
            }
            cout<<"]\n";
        }
    }
        
}
