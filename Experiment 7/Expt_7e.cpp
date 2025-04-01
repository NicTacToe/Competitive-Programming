#include <bits/stdc++.h>
using namespace std;

int smallest(vector<int>& nums, int k) {
  int n = nums.size();

  sort(nums.begin(), nums.end());
  return nums[k - 1];
}

int main() {
  vector<int> nums = {7, 10, 15, 12, 21, 9};
  int k = 3;

  cout << "Kth smallest element: " << smallest(nums, k) << endl;
  return 0;
}