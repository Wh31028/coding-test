#include <bits/stdc++.h>

using namespace std;


int func2(int arr[],int N){
    int a[101];
    fill(a,a+101,0);  //int occur[101] = {}; 이렇게 초기화 해도 됨

    for(int i=0;i<N;i++){
        int num= arr[i];
        a[num]++;
        if(a[100-num]>0) return 1;
    }


    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int b[] = {4,13,63,87};
    cout<<func2(b,4);
}