#include <iostream>
#include <vector>
using namespace std;

void transposeMatrix(const vector<vector<int>>& matrix, vector<vector<int>>& transposed) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Resize the transposed matrix to have the correct dimensions
    transposed.resize(cols, vector<int>(rows));

    // Perform the transpose
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
    // Define a 3x3 matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Create an empty matrix to store the transposed result
    vector<vector<int>> transposed;

    // Transpose the matrix
    transposeMatrix(matrix, transposed);

    // Print the original matrix
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    // Print the transposed matrix
    cout << "Transposed Matrix:" << endl;
    printMatrix(transposed);

    return 0;
}