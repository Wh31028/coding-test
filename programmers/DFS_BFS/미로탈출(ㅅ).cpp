#include <bits/stdc++.h>
#include <string>
#include <vector>

#define Y first 
#define X second

using namespace std;

int solution(vector<string> maps) {
    int answer = 0;
    
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    int n = maps.size();
    int m = maps[0].size();
    int board[101][101] = {0};
    queue<pair<int,int>> q;
    queue<pair<int,int>> q2;
    
    for(int y=0;y<n;y++)
    {
        for(int x=0;x<m;x++)
        {
            if(maps[y][x]== 'S') 
            {
                q.push({y,x});
                board[y][x]= 1;
                cout<<maps[y][x]<<" "<<y<<" "<<x<<"\n";
            }
        }
    }    
    
    int count =0;
    while(!q.empty() && count == 0)
    {
        pair<int,int> cur =  q.front();
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx<0 || nx >=m || ny<0 || ny>=n) continue;
            if(maps[ny][nx] == 'X') continue;
            if(maps[ny][nx] == 'L')
            {
                q2.push({ny,nx});
                count = board[cur.Y][cur.X];
                cout<<count<<"L\n";
                break;
            }
            if(board[ny][nx] > 0) continue;
            q.push({ny,nx});
            board[ny][nx]= board[cur.Y][cur.X] +1;
        }     
    }
     memset(board, 0, sizeof(board));
    
    while(!q2.empty())
    {
        pair<int,int> cur =  q2.front();
        q2.pop();
        
        for(int i=0;i<4;i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            
            if(nx<0 || nx >=m || ny<0 || ny>=n) continue;
            if(maps[ny][nx] == 'X') continue;
            if(maps[ny][nx] == 'E')
            {
                
                count += board[cur.Y][cur.X] + 1;
                return count;
            }
            if(board[ny][nx] > 0) continue;
            
            
            q2.push({ny,nx});
            board[ny][nx]= board[cur.Y][cur.X] +1;
        }     
    }
    
    return -1;
}