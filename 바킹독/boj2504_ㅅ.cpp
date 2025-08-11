#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> S;
    stack<int> count;
    string input;
    bool flag= true;
    int ans = 0;
    cin>>input;

    S.push(input[0]);
    for(int i=1;i<input.length();i++)
    {
        if(input[i]=='('||input[i]=='[')
        {   
            if(input[i-1]=='('||input[i-1]=='['){
                count.push(ans);
                ans=0;
            } 
            S.push(input[i]);
        }else if(input[i]==')')
        {
            if(input[i-1]=='('){
                S.pop();
                ans+=2;
            }else if(!S.empty() && S.top()=='('){
                ans*=2;
                S.pop();
                ans+= count.top();
                count.pop();
            }else{
                flag= false;
                break;
            }
        }else if(input[i]==']')
        {
            if(input[i-1]=='['){
                S.pop();
                ans+=3;
            }else if(!S.empty() &&S.top()=='['){
                ans*=3;
                S.pop();
                ans+= count.top();
                count.pop();
            }else{
                flag= false;
                break;
            }
        }
    }
    if(!S.empty()) flag=false;
    
    if(flag){
        cout<<ans;
    }else{
        cout<<0;
    }
    
}


//() 2
// [] 3
// (x) 2*x
// [x] 3*x
// XY X + Y
