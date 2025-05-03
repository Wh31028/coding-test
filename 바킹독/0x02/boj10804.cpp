#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[21];
    for(int i=1;i<21;i++) arr[i] = i;

    for(int i=0;i<10;i++){
        int A,B;
        cin>>A>>B;
        
        for(int i=0;i<(B-A+1)/2;i++){
            int temp = arr[A+i];
            arr[A+i] = arr[B-i];
            arr[B-i] = temp;
        }
    }

    for(int i=1;i<21;i++) cout<<arr[i]<<" ";
}