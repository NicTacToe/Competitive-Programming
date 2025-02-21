#include <bits/stdc++.h>
using namespace std;

void zeroShift(vector<int>& nums) {
  int n = nums.size();
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] != 0) {
      nums[count] = nums[i];
      count++;
    }
  }

  while (count < n) {
    nums[count] = 0;
    count++;
  }
}

int main() {
    vector<int> nums = {1, 0, 3, 0, 5};
    
    zeroShift(nums);
    
    for (int num : nums) {
      cout << num << " ";
    }

    return 0;
}
