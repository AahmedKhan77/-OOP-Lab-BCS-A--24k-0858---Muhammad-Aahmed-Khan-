// Muhammad Aahmed Khan - 24k-0858
// TASK # 04

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter size of square matrix (N): ";
    cin >> N;

    int** matrix = new int*[N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
    }

    cout << "Enter elements of " << N << "x" << N << " matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int mainDiag = 0, secDiag = 0;
    for (int i = 0; i < N; i++) {
        mainDiag += matrix[i][i];
        secDiag  += matrix[i][N - i - 1];
    }

    cout << "\nMatrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of Main Diagonal = " << mainDiag << endl;
    cout << "Sum of Secondary Diagonal = " << secDiag << endl;

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
