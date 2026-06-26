#include <bits/stdc++.h>
using namespace std;

int main() {
  //[---------------------------------------------------------]
  //[ Pairs--> Pair of two different values                   ]
  //[---------------------------------------------------------]

  pair<int, int> p = {1, 2};
  cout << p.first << ", " << p.second << endl;

  //Nested Pairs
  pair<int, pair<int,int>> p2 = {1, {2,3}}
  cout << p.first << ", " << p2.second.first << ", " << p2.second.second << endl;
  // Array of pairs
  pair<int,int> arr[] = {{1,2},{3,4}};

  cout << arr[0].first << "," << arr[0].second << ", " << arr[1].first << ", " << arr[1].second << endl; 

  //[---------------------------------------------------------]
  //[ Vectors --> Dynamic Array                               ]
  //[---------------------------------------------------------]

  vector<int> v = {1, 2, 3, 4};
  v.push_back(5);  //Pushes an element at the end
  v.emplace_back(6); //Same as push_back but is faster in general
  // for each loop
  for (auto i : v) {
    cout << i << endl;
  }
  vector <int> v2(v1); // Copy of v1 into v2
                            
  vector <int> v3(5, 100) // {100, 100, 100, 100, 100} 
  // Using iterators
  // v.begin()--> Points to the first element's memory address
  // v.end()--> points to the address just after the last element
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) { 
    cout << *(it) << " ";
  }

  cout << endl;

  cout << v.back() << endl; // Used to get the last element

  v.erase(v.begin() + 4); // Used to delete elements
  v.erase(v.begin(), v.begin() + 3); // [start, end)
  
  v.insert(v.begin(), 1); // Inserts an element at a given position
  v.insert(v.begin(), 2, 100) // Inserts 2 hundreds at the start of the vector

  cout << v.size() << endl; // Returns the size of the data structure

  v.pop_back(); // Removes last element
  v.swap(v3) // Swaps v1 and v3
  cout << v.empty() // Checks if the vector is empty or not
  v.clear() // Erases the entire Vector

  //[---------------------------------------------------------]
  //[ List--> Similar to vector but has front operations too  ]
  //[---------------------------------------------------------]

  list<int> lst;
  lst.emplace_back(2);
  lst.emplace_front(1); // Pushes element from the front
    
  cout << lst.front() << endl; // returns front of the list

  // For each loop
  for (auto it : lst) {
    cout << it;
  }
  cout << endl;

  //[---------------------------------------------------------]
  //[ Deque is same as list                                   ]
  //[---------------------------------------------------------]

  Deque<int> dq;



  return 0;
}
