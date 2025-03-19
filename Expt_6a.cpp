#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int n) {
  int low = 0, high = n - 1, mid = -1;

  while (low <= high) {
    mid = (low + high) / 2;

    if (nums[mid] == n) {
      return mid;
    }
    
    else if (nums[mid] > n) {
      high = mid - 1;
    }

    else {
      low = mid + 1;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 7;

  int index = binarySearch(nums, n);

  if (index != -1) {
      cout << "First occurrence of " << n << " is at index " << index << endl;
  } else {
      cout << n << " is not found in the array" << endl;
  }

  return 0;
}