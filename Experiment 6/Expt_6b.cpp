#include <bits/stdc++.h>
using namespace std;

int linFirstOcc(vector<int>& nums, int n) {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == n) {
      return i;
    }
  }
  return -1;
}

int binFirstOcc(vector<int>& nums, int n) {
  int low = 0, high = n - 1, mid = -1;

  while (low <= high) {
    mid = (low + high) / 2;

    if (nums[mid] == n) {
      if (mid == 0 || nums[mid - 1] != n) {
        return mid;
      }
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
    vector<int> nums = {5, 10, 10, 10, 20};
    int n = 10;

    int linIndex = linFirstOcc(nums, n);
    int binIndex = binFirstOcc(nums, n);

    if (linIndex != -1) {
        cout << "First occurrence of " << n << " is at index " << linIndex << endl;
    } else {
        cout << n << " is not found in the array" << endl;
    }

    if (binIndex != -1) {
      cout << "First occurrence of " << n << " is at index " << binIndex << endl;
  } else {
      cout << n << " is not found in the array" << endl;
  }

    return 0;
}
