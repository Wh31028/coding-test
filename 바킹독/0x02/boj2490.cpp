#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0;i<3;i++){
        int cnt = 0;
        for(int i=0;i<4;i++){
            int num;
            cin>>num;
            if(num==1) cnt++;
        }

        if(cnt==3) cout<<"A\n";
        else if(cnt==2) cout<<"B\n";
        else if (cnt ==1) cout<<"C\n";
        else if (cnt==4) cout<<"E\n";
        else cout<<"D\n";
    }
}