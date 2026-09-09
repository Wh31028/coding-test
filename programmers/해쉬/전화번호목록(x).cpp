#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    unordered_map<string,int> answerMap;

    for(auto x: phone_book)
    {
        if(answerMap[x])
        {
            answer=false;
            return answer;
        }
        for(int i=1;i<x.size();i++)
        {
            if(answerMap[x.substr(0,i)] == 2)
            {
                answer=false;
                return answer;
            }
            answerMap[x.substr(0,i)] = 1;
        }

        answerMap[x] = 2;
    }
    
    
    
    return answer;
}