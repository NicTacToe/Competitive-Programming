#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& nums) {
  int n = nums.size();

  for (int i = 0; i < n - 2; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        swap(nums[j], nums[j + 1]);
      }
    }
  }
}

int main() {
  vector<int> nums = {5, 1, 4, 2, 3};

  bubbleSort(nums);

  for (int elem : nums) {
    cout << elem << " ";
  }

  cout << endl;
  return 0;
}