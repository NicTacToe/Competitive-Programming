#include <iostream>
#include <vector>
using namespace std;

void transposeMatrix(const vector<vector<int>>& matrix, vector<vector<int>>& transposed) {
  int rows = matrix.size();
  int cols = matrix[0].size();

  transposed.resize(cols, vector<int>(rows));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      transposed[j][i] = matrix[i][j];
    }
  }
}

void printMatrix(const vector<vector<int>>& matrix) {
  for (const auto& row : matrix) {
    for (int elem : row) {
      cout << elem << " ";
    }
    cout << endl;
  }
}

int main() {
  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
  };

  vector<vector<int>> transposed;

  transposeMatrix(matrix, transposed);

  cout << "Original Matrix:" << endl;
  printMatrix(matrix);

  cout << "Transposed Matrix:" << endl;
  printMatrix(transposed);
  
  return 0;
}