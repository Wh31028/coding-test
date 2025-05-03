#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];

    int sum = 0;
    for(int i=0;i<9;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+9);

    int ans1,ans2;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            int sum2 = sum;
            sum2 = sum2-arr[i]-arr[j];
            if(sum2==100){
                ans1 = i;
                ans2 = j;
            }
        }
    }

    for(int i=0;i<9;i++){
        if(i==ans1||i==ans2) continue;
        cout<<arr[i]<<"\n";
    }
    

}