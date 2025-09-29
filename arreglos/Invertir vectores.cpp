#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> addMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

vector<vector<int>> subtractMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    return result;
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Ingrese las dimensiones de la primera matriz (filas columnas): ";
    cin >> rowsA >> colsA;
    cout << "Ingrese las dimensiones de la segunda matriz (filas columnas): ";
    cin >> rowsB >> colsB;

    vector<vector<int>> A(rowsA, vector<int>(colsA));
    vector<vector<int>> B(rowsB, vector<int>(colsB));

    cout << "Ingrese los elementos de la primera matriz:\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:\n";
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> B[i][j];
        }
    }

    cout << "Primera Matriz:\n";
    printMatrix(A);
    cout << "Segunda Matriz:\n";
    printMatrix(B);

    if (rowsA == rowsB && colsA == colsB) {
        cout << "Suma de matrices:\n";
        printMatrix(addMatrices(A, B));

        cout << "Resta de matrices:\n";
        printMatrix(subtractMatrices(A, B));
    } else {
        cout << "Las matrices no tienen las mismas dimensiones para la suma o resta.\n";
    }

    if (colsA == rowsB) {
        cout << "Multiplicación de matrices:\n";
        printMatrix(multiplyMatrices(A, B));
    } else {
        cout << "Las matrices no tienen dimensiones compatibles para la multiplicación.\n";
    }

    return 0;
}
