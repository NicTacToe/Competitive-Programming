#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int>& nums) {
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if ((mid == 0 || nums[mid] > nums[mid - 1]) && (mid == nums.size() - 1 || nums[mid] > nums[mid + 1])) {
      return mid;
    }

    if (mid > 0 && nums[mid - 1] > nums[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
}

int main() {
  vector<int> nums = {2, 5, 10, 4, 16, 7};

  int index = peakElement(nums);

  cout << "Peak element is " << nums[index] << " at index " << index << endl;
  return 0;
}