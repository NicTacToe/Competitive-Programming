#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& nums) {
  int n = nums.size();

  for (int i = 1; i < nums.size(); i++) {
    int key = nums[i];
    int j = i - 1;

    while (j >= 0 && nums[j] > key) {
      nums[j + 1] = nums[j];
      j--;
    }
    nums[j + 1] = key;
  }
}

int main() {
  vector<int> nums = {15, 12, 4, 6, 1};

  insertionSort(nums);

  cout << "Sorted Array: ";
  for (int elem : nums) {
    cout << elem << " ";
  }

  cout << endl;
  return 0;
}