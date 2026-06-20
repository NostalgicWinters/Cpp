#include <bits/stdc++.h>
using namespace std;

int main() {
  pair<int, int> p = {1, 2};
  cout << p.first << ", " << p.second << endl;

  vector<int> v = {1, 2, 3, 4};
  v.push_back(5);
  v.emplace_back(6);

  // for (auto i : v) {
  //   cout << i << endl;
  // }

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }

  cout << endl;

  cout << v.back() << endl;

  v.erase(v.begin() + 4);
  v.erase(v.begin(), v.begin() + 3); // [start, end)
  v.insert(v.begin(), 1);

  for (auto it : v) {
    cout << it;
  }
  cout << endl;

  list<int> lst;
  lst.emplace_back(2);
  lst.emplace_front(1);

  for (auto it : lst) {
    cout << it;
  }
  cout << endl;

  // Deque is same as list

  return 0;
}
