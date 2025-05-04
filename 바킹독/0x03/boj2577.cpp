#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A,B,C,sum;
    cin>>A>>B>>C;

    sum = A*B*C;
    int arr[10] = {};
    for(int i=to_string(sum).length()-1;i>=0;i--){
        int n = sum/pow(10,i);
        sum = sum % (int)pow(10,i);
        arr[n]++;
    }

    for(int x : arr) cout<<x<<"\n";


}
