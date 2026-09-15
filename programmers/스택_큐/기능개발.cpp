#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    vector<int> tmp;
    for(int i=0;i<progresses.size(); i++)
    {
        if( ((100-progresses[i])%speeds[i] ) >0 ) 
        {
            tmp.push_back((100-progresses[i])/speeds[i] + 1);
        }else
        {
            tmp.push_back((100-progresses[i])/speeds[i]);
        }
        cout<< tmp[i]<<"\n";
    }
    
    int tmpCount = 1;
    int tmpDays= tmp[0];
    for(int i=1;i<progresses.size(); i++)
    {
        if(tmpDays >= tmp[i])
        {
            tmpCount++;
        }else
        {
            answer.push_back(tmpCount);
            tmpDays=tmp[i];
            tmpCount=1;
        }   
    }
    if(tmp.empty() != 1) answer.push_back(tmpCount);
    
    return answer;
}