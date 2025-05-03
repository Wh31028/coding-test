#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int y_sum=0,m_sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        int num;
        cin>>num;

        y_sum+= 10+num/30*10;
        m_sum += 15+num/60*15;
    }

    if(y_sum>m_sum){
        cout<<"M "<<m_sum;
    }else if(y_sum<m_sum){
        cout<<"Y "<<y_sum;
    }else{
        cout<<"Y M "<<m_sum;
    }

}