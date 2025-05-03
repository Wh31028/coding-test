#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int num;
    int max = -1;
    int maxidx = -1;
    for(int i=0;i<9;i++){
        cin>>num;
        if(num>max){
            max = num;
            maxidx = i+1;
        }
    }
    cout<<max<<'\n'<<maxidx;
}