#include <bits/stdc++.h>
using namespace std;

void findLeaders(vector<int> nums) {
  int n = nums.size();
  
  int currLeader = nums[n - 1];
  cout << currLeader << " ";

  for (int i = n - 2; i >= 0; i--) {
    if (currLeader < nums[i]) {
      currLeader = nums[i];
      cout << currLeader << " ";
    }
  }
}

int main() {
  vector<int> nums = {16, 17, 4, 3, 5, 2};

  findLeaders(nums);

  return 0;
}