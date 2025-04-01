#include <bits/stdc++.h>
using namespace std;

int main() {
  int nums[] = {5, 2, 9, 1, 5, 6};
  int n = sizeof(nums) / sizeof(nums[0]);

  sort(nums, nums + n);

  cout << "Sorted Array: ";
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }

  cout << endl;
  return 0;
}