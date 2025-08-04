#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int count = 0;
    cin>>n;

    while(n--)
    {
        string input;
        cin>>input;

        stack<char> S;

        for(int i=0;i<input.length();i++)
        {
            if(S.empty()) S.push(input[i]);
            else if(S.top()==input[i]) S.pop();
            else S.push(input[i]);
        }

        if(S.empty()) count++;
    }

    cout<<count;

}