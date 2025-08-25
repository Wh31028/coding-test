#include <bits/stdc++.h>

using namespace std;

#define X second
#define Y first
int T;
int board[1001][1001];
int fire[1001][1001];
int human[1001][1001];

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int w,h;
        cin>>w>>h;

        for(int i=0;i<h;i++)
        {
            fill(fire[i],fire[i]+w,0);
            fill(human[i],human[i]+w,0);
        }

        queue<pair<int,int>> hu;
        queue<pair<int,int>> fi;

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                char c;
                cin>>c;
                if(c=='#')
                {
                    board[i][j] = -1;
                }
                else
                {
                    if(c == '@')
                    {
                        hu.push({i,j});
                        human[i][j]=1;
                    }
                    else if(c =='*')
                    {
                        fi.push({i,j});
                        fire[i][j] = 1;
                    }
                    board[i][j] = 0;
                } 
            }
        }


        while(!fi.empty())
        {
            pair<int,int> cur = fi.front();
            fi.pop();

            for(int i=0;i<4;i++)
            {
                int nx = dx[i] + cur.X;
                int ny = dy[i] + cur.Y;

                if(nx<0||nx>=w || ny<0 || ny>=h) continue;
                if(board[ny][nx] == -1 || fire[ny][nx] >0) continue;

                fire[ny][nx] = fire[cur.Y][cur.X] +1;
                fi.push({ny,nx});
            }
        }

        bool flag = false;
        while((!hu.empty()) && flag==false)
        {
            pair<int,int> cur = hu.front();
            hu.pop();

            for(int i=0;i<4;i++)
            {
                int nx = dx[i] + cur.X;
                int ny = dy[i] + cur.Y;

                if(nx<0||nx>=w || ny<0 || ny>=h)
                {
                    cout<<human[cur.Y][cur.X]<<"\n";
                    flag = true;
                    break;
                }
                if(board[ny][nx] == -1) continue;
                if(human[ny][nx]) continue;
                if(fire[ny][nx] != 0 && fire[ny][nx] <= human[cur.Y][cur.X] +1) continue;

                human[ny][nx] = human[cur.Y][cur.X] +1;
                hu.push({ny,nx});
            }
        }

        if(flag==false)
        {
            cout<<"IMPOSSIBLE\n";
        }



    }
}