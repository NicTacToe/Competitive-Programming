#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> nums) {
  int n = nums.size();

  if (n < 2) {
    cout << "Not enough elements for second largest." << endl;
    return -1;
  }

  int max1 = nums[0];
  int max2 = -1;

  for (int i = 1; i < n; i++) {
    if (nums[i] > max1) {
      max2 = max1;
      max1 = nums[i];
    } else if (nums[i] > max2 && nums[i] != max1) {
      max2 = nums[i];
    }
  }

  if (max2 == -1) {
    cout << "No distinct second largest number." << endl;
    return -1;
  }

  return max2;
}

int main() {
  vector<int> nums1 = {1, 2, 3, 4, 5};
  vector<int> nums2 = {1, 3, 5, 2, 4};

  int max1 = getSecondLargest(nums1);
  int max2 = getSecondLargest(nums2);

  if (max1 != -1) {
    cout << "Second largest number: " << max1 << endl;
  } else {
    cout << "No distinct second largest number." << endl;
  }

  if (max2 != -1) {
    cout << "Second largest number: " << max2 << endl;
  } else {
    cout << "No distinct second largest number." << endl;
  }

  return 0;
}