#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersect(vector<int>& nums1, vector<int>& nums2) {
  int n1 = nums1.size();
  int n2 = nums2.size();

  vector<int> result;
  int i = 0, j = 0;

  while (i < n1 && j < n2) {
    if (nums1[i] < nums2[j]) {
      i++;
    } 
    else if (nums1[i] > nums2[j]) {
      j++;
    }
    else {
      result.push_back(nums1[i]);
      i++;
      j++;
    }
  }

  return result; 
}

int main() {
  vector<int> nums1 = {1, 2, 3, 4, 5, 6};
  vector<int> nums2 = {4, 5, 6, 7, 8, 9};

  vector<int> intersect = findIntersect(nums1, nums2);

  cout << "Intersection: ";
  for (int num : intersect) {
    cout << num << " ";
  }

  cout << endl;
  return 0;
}