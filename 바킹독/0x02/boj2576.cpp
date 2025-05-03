#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = -1;
    int min = 101;

    for(int i=0;i<7;i++){
        int num;
        cin>>num;
        if(num%2!=0){
            sum+=num;
            if(num<min) min = num;
        }
        
    }
    if(sum!=-1){
        cout<<sum+1<<"\n";
        cout<<min;
    }else cout<<sum;
  

}