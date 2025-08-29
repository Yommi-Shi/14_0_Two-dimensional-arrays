#include <iostream>


bool matrices_equal(int matrix_a[][4], int matrix_b[][4]) {

    for (int i = 0; i < 4; i++) {
        if (matrix_a[i] != matrix_b[i]) {
            return false;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix_a[i][j] != matrix_b[i][j]) {
                return false;
            }
        }
    }

    return true;
}

void diagonal_matrix(int matrix_a[][4]) {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) {
                matrix_a[i][j] = 0;
            }
        }
    }

}

int main() {
    std::cout << "===Matrices===" << std::endl;

    int matrix_a[4][4];
    int matrix_b[4][4];
    std::cout << "Enter matrix \'A\'" << std::endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int element;
            std::cin >> element;
            matrix_a[i][j] = element;
        }
    }

    std::cout << "Enter matrix \'B\'" << std::endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int element;
            std::cin >> element;
            matrix_b[i][j] = element;
        }
    }

    if (matrices_equal(matrix_a, matrix_b)) {
        diagonal_matrix(matrix_a);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                std::cout << matrix_a[i][j] << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Matrices are not equal";
    }

}
