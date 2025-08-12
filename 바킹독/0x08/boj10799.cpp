#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> S;
    string input;
    cin>>input;
    int count = 0;
    for(int i=0;i<input.length();i++)
    {
        if(input[i]=='(')
        {   
            if(!S.empty() && S.top()==')') S.pop();
            S.push(input[i]);
        }else
        {
            if(S.top()=='('){
                S.pop();
                count+= S.size();
                S.push(input[i]);
            }else if(S.top()==')'){
                count+=1;
                S.pop();
                S.pop();
                S.push(')');
            }
        }
    }
    cout<<count;

}


// ()가 나오면 ( 가지고 있는 만큼 더하고
// )가 나오면 +1