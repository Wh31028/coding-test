#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    
    for(int i=0;i<2;i++){
        for(int j=1;j<3;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // sort(arr, arr+3);

    for(int x : arr) cout<<x<<" ";



}