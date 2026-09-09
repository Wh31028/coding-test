#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> participant = {"leo", "kiki", "eden"};
  vector<string> completion = {"eden", "kiki"};

  map<string, int> result_map;

  for (auto x : participant)
    result_map[x]++;

  for (auto x : completion)
    result_map[x]--;

  for (auto x : result_map) {
    if (x.second != 0)
      cout<< x.first;
  }

  return 0;
}
