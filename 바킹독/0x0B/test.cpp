#include <bits/stdc++.h>

using namespace std;

void func(int a)
{
    if(a==0) return;
    func(a-1);
}

int main()
{
    func(100000);
    cout<<"done";
    //만약 실행이 에러가 난다면 stack 메모리 제한을 풀어야함.
}