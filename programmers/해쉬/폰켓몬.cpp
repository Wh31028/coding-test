#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int type = 0;
    int allTypeNums= nums.size();
    
    map<int,int> numMap;
    for(auto x : nums)
    {
        if(numMap[x] == 0)
        {
            type++;
            numMap[x]++;
        }
    }
    if(type > allTypeNums/2)
        return allTypeNums/2;
    
    answer = type;
    
    return answer;
}