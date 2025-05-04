#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,a,x;
    cin>>n;
    int arr[1000001] = {};

    for(int i=0;i<n;i++){
        cin>>a;
        arr[a]++;
    }
    cin>>x;

    int count =0;

    for(int i=0;i<=x/2&&x-i<1000001;i++){
        if(arr[i]>0&&arr[x-i]>0&&i!=x-i){
            count++;
        }
    }

    cout<<count;


}
