#include <bits/stdc++.h>

using namespace std;

const int MAX_IDX = 1000005;
char dat[MAX_IDX];
int nxt[MAX_IDX],pre[MAX_IDX];
int unused = 1;
int tail = 0;


void insert(int addr, char c){
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr]!=-1){
        pre[nxt[addr]] =unused;
    }
    nxt[addr] = unused;
    unused++;
}

void traverse()
{
    int cur = nxt[0];

    while(cur != -1)
    {
        cout<<dat[cur];
        cur = nxt[cur];
    }
    cout<<"\n";
}
void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] !=-1){
     pre[nxt[addr]] = pre[addr];
    }
  }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(nxt,nxt+MAX_IDX,-1);
    fill(pre,pre+MAX_IDX,-1);
    string input;
    int M;
    cin>>input;
    cin>>M;
    int cur;
    for(int i=0;i<input.length();i++){
        cur = unused;
         insert(i,input[i]);
    }


    for(int i=0;i<M;i++){

        char order;
        cin>>order;
        if(order=='P'){
            char c;
            cin>>c;
           insert(cur,c);
           cur = nxt[cur];
        }else if(order == 'L'){
            if(cur!= 0) cur= pre[cur];
        }else if(order=='D'){
            if(nxt[cur]!=-1) cur = nxt[cur];
        }else if(order=='B'){
            if(cur!= 0){
                erase(cur);
                cur = pre[cur];
            }
        }
    }

    traverse();
}