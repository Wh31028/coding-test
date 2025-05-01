#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(arr,arr+26,0); //안 해도 되넹

    string input;
    cin>>input;
    for(char a : input){   //auto a 를 사용해도 됨
        int num = (int)a -97;
        arr[num]++;
    }

    for(int o : arr)
    {
        cout<< o << " ";
    }
}