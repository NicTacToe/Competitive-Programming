#include <bits/stdc++.h>
using namespace std;

void arrayRotate(vector<int> &nums) {
  int n = nums.size();
  int temp = nums[0];

  for (int i = 0; i < n - 1; i++) {
    nums[i] = nums[i + 1];
  }

  nums[n - 1] = temp;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};

  arrayRotate(nums);

  for (int num: nums) {
    cout << num << " ";
  }

  return 0;
}