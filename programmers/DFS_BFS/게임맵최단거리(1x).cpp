#include<bits/stdc++.h>
#include<vector>
using namespace std;

int dist[101][101];

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    int n = maps.size();
    int m = maps[0].size();
    
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    queue<pair<int, int>> q;
    
    q.push({0, 0});
    dist[0][0] = 1;
    
    while (!q.empty()) 
    {
      auto [x, y] = q.front();
      q.pop();

      for (int i = 0; i < 4; i++) 
      {
          int nx = x + dx[i];
          int ny = y + dy[i];

          if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
          if (maps[ny][nx] == 0) continue;
          if (dist[ny][nx] != 0) continue; 

          dist[ny][nx] = dist[y][x] + 1;
          q.push({nx, ny});
      }
  }

     answer = dist[n - 1][m - 1];
     return answer == 0 ? -1 : answer;
    
}