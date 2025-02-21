#include <bits/stdc++.h>
using namespace std;

bool sortCheck(vector<int> nums) {
  int n = nums.size();
  
  for (int i = 1; i < n; i++) {
    if (nums[i - 1] > nums[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  vector<int> nums1 = {1, 2, 3, 4, 5}; 
  vector<int> nums2 = {3, 4, 1, 5, 2};

  bool sorted1 = sortCheck(nums1);
  bool sorted2 = sortCheck(nums2);

  cout << (sortCheck(nums1) ? "The first array is sorted.\n" : "The second array isn't sorted.\n");
  cout << (sortCheck(nums2) ? "The second array is sorted.\n" : "The second array isn't sorted.\n");

  return 0;
}