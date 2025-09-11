#include <bits/stdc++.h>

using namespace std;


int N;

void Hanoi(int n,int a,int b)
{
    if(n == 1)
    {
        cout<<a<<" "<<b<<"\n";
        return;
    }

    Hanoi(n-1,a,6-a-b);
    cout<<a<<" "<<b<<"\n";
    Hanoi(n-1,6-a-b,b);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin>>N;

    cout << (1<<N) - 1 << '\n';

    Hanoi(N,1,3);

}