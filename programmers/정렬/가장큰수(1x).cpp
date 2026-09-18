#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

bool cmp(string a, string b)
{
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> numbers1;

    for(auto x : numbers)
    {
        numbers1.push_back(to_string(x));
    }
    sort(numbers1.begin(),numbers1.end(), cmp);
    
    if(numbers1.at(0) == "0") return "0";
    for(auto x : numbers1)
    {
        answer += x;
    }
    
    return answer;
}