#include <bits/stdc++.h>

using namespace std;
//바킹독님 배열로 짠 코드 참고 해야할 듯
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[7];
    fill(arr,arr+7,0);
    for(int i=0;i<3;i++){
        int num;
        cin>>num;
        arr[num]++;
    }
    int idx=0;
    int flag=0;
    for(int i=1;i<7;i++){
        if(arr[i]==3){
            cout<<10000+i*1000;
            flag=1;
            break;
        }else if(arr[i]==2){
            cout<<1000+i*100;
            flag=1;
            break;
        }else if(arr[i]==1){
            idx=i;
        }
    }
    if(flag==0) cout<<idx*100;

}