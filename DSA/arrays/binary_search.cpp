#include <iostream>
#include <bits/stdc++.h>

// Recursive
bool binary_search_rec(std::vector<int> arr, int target, int low, int high){
  if(low>high) return false;
  int mid = (low + high)/2;
  if(arr[mid]==target) return true;
  if(target>arr[mid]){
    binary_search_rec(arr, target, mid + 1, high);
  }
  return binary_search_rec(arr, target, low, mid - 1);
}

// Iterative
bool binary_search_iterative(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return true;

        if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return false;
}
int main(){
  std::vector<int> v = {2,3,4,5,6,7};
  std::cout << binary_search_rec(v, 8, 0, v.size()-1);

  return 0;
}
