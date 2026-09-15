#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> arr1;

    for(int i=0;i<s.size();i++)
    {
        if(arr1.empty())
        {
            if(s[i] == ')') return false;
            arr1.push_back(s[i]);
        }
        else
        {
            if(s[i] == ')') arr1.pop_back();
            else arr1.push_back(s[i]);     
        }
    }
    if(arr1.size() != 0) return false;

    return answer;
}