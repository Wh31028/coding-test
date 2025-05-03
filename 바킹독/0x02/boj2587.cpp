#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int mean = 0;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
        mean+=arr[i];
    }

    sort(arr,arr+5);
    cout<<mean/5<<"\n";
    cout<<arr[2];

}