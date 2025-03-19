#include <bits/stdc++.h>
using namespace std;

bool pairSum(vector<int>& nums, int n) {
  int i = 0, j = nums.size() - 1;
  bool found = false;

  while (i < j) {
    int sum = nums[i] + nums[j];

    if (sum == n) {
      cout << nums[i] << " " << nums[j] << endl;
      found = true;
      i++;
      j--;
    } 

    else if (sum < n) {
      i++;
    } 

    else {
      j--;
    }
  }

  return found;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = 7;

  bool isPair = pairSum(nums, n);

  if (isPair) {
      cout << "True";
  } else {
      cout << "False";
  }

  return 0;
}
