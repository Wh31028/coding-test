#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> array = {1, 5, 2, 6, 3, 7, 4};
  vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
  vector<int> answer;

  for (auto x : commands) {
    vector<int> array2(array);

    int a = x.back();
    x.pop_back();
    int b = x.back();
    x.pop_back();
    int c = x.back();
    x.pop_back();

    sort(array2.begin() + c - 1, array2.begin() + b);

    answer.push_back(array2.at(c + a - 2));
  }

  return 0;
}

// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//     vector<int> answer;
//     vector<int> temp;

//     for(int i = 0; i < commands.size(); i++) {
//         temp = array;
//         sort(temp.begin() + commands[i][0] - 1, temp.begin() +
//         commands[i][1]); answer.push_back(temp[commands[i][0] +
//         commands[i][2]-2]);
//     }

//     return answer;
// }
