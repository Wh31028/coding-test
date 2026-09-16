#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> q;
    
    for(int i=0;i<priorities.size();i++)
    {
        q.push(i);
    }
    
    for(int i=0;i<priorities.size();i++)
    {
        int high = 0;
        int pos = 0;
        for(int i=0;i<q.size();i++)
        {
            if(priorities[q.front()] > high)
            {
            high = priorities[q.front()];
            pos = i;
            } 
            q.push(q.front());
            q.pop();
        }
        answer++;
        cout<<high<<" "<<pos<<"\n";
        
        for(int i=0;i<pos;i++)
        {
            q.push(q.front());
            q.pop();
        }
        if(q.front() == location)
        {
            return answer;
        }
        q.pop();
        
    }
    
    
    return answer;
}