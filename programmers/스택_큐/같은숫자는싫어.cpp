#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    vector<int> tmp;

    
    int tmpNum = arr.back();
    tmp.push_back(tmpNum);
    arr.pop_back();
    int arrSize = arr.size();
    for(int i =0; i< arrSize;i++)
    {   
        if(tmpNum != arr.back())
        {
            tmp.push_back(arr.back());
        }
        tmpNum = arr.back();
        arr.pop_back();
    }
    
    int tmpSize = tmp.size();
    for(int i=0; i< tmpSize; i++)
    {
        answer.push_back(tmp.back());
        tmp.pop_back();
    }
    
    

    return answer;
}