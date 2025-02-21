#include <bits/stdc++.h>
using namespace std;

void snakeTraverse(const vector<vector<int>>& matrix) {
  int M = matrix.size();
  int N = matrix[0].size();

  for (int i = 0; i < M; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < N; j++) {
        cout << matrix[i][j] << " ";
      }
    } else {
      for (int j = N - 1; j >= 0; j--) {
        cout << matrix[i][j] << " ";
      }
    }
  }
}

int main() {
  vector<vector<int>> matrix = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
  };

  snakeTraverse(matrix);

  return 0;
}
