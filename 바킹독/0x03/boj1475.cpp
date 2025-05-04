#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    int arr[10] = {};

    while(N>0){
        arr[N%10]++;
        N = N/10;
    }

    int max = (arr[6]+arr[9])/2+(arr[6]+arr[9])%2;
    for(int i=0;i<10;i++){
        if(i==6 || i==9) continue;
        if(arr[i]>max) max = arr[i];
    }

    cout<<max;

}