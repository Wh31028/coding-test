#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    string input;

    while(true)
    {   
        int count = 0;
        stack<char> s;
        getline(cin,input);
        bool flag = false;

        if(input.length()==1&& input ==".") break;

        for(int i=0;i<input.length();i++)
        {
            if(input[i] == ')')
            {
                if (s.empty()) {
                    flag = true;
                } else {
                    while(s.top()!='(')
                    {
                        s.pop();
                        if(s.size()==0 || s.top() == '['){
                            flag = true;
                            break;
                        }
                    }
                }
                if(flag==false) s.pop();
                count--;
            }else if(input[i]==']')
            {
                if (s.empty()) {
                    flag = true;
                } else {
                    while(s.top()!='[')
                    {
                        s.pop();
                        if(s.size()==0 || s.top() == '('){
                            flag = true;
                            break;
                        }
                        
                    }
                }
                if(flag==false) s.pop();
                count--;
            }else if(input[i]=='('||input[i]=='['){
                count++;
                s.push(input[i]);
            }else
            {
                s.push(input[i]);
            }
        }
        if(count!=0) flag=true;

        if(flag== true){
            cout<<"no\n";
        }else{
            cout<<"yes\n";
        }

    }


}

