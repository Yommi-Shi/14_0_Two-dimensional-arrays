#include <iostream>
#include <vector>

bool matrices_equal(std::vector<std::vector<int>> matrix_a, std::vector<std::vector<int>> matrix_b) {

    if (matrix_a.size() != matrix_b.size()) {
        return false;
    }

    for (int i = 0; i < matrix_a.size(); i++) {
        if (matrix_a[i].size() != matrix_b[i].size()) {
            return false;
        }
    }

    for (int i = 0; i < matrix_a.size(); i++) {
        for (int j = 0; j < matrix_a[i].size(); j++) {
            if (matrix_a[i][j] != matrix_b[i][j]) {
                return false;
            }
        }
    }

    return true;
}

std::vector<std::vector<int>> diagonal_matrix(std::vector<std::vector<int>> matrix_a) {

    for (int i = 0; i < matrix_a.size(); i++) {
        for (int j = 0; j < matrix_a[i].size(); j++) {
            if (i != j) {
                matrix_a[i][j] = 0;
            }
        }
    }
    return matrix_a;

}

int main() {
    std::cout << "===Matrices===" << std::endl;

    std::vector<std::vector<int>> matrix_a;
    std::vector<std::vector<int>> matrix_b;
    std::cout << "Enter matrix \'A\'" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::vector<int> row;
        for (int j = 0; j < 4; j++) {
            int element;
            std::cin >> element;
            row.push_back(element);
        }
        matrix_a.push_back(row);
    }

    std::cout << "Enter matrix \'B\'" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::vector<int> row;
        for (int j = 0; j < 4; j++) {
            int element;
            std::cin >> element;
            row.push_back(element);
        }
        matrix_b.push_back(row);
    }

    if (matrices_equal(matrix_a, matrix_b)) {
        matrix_a = diagonal_matrix(matrix_a);
        for (int i = 0; i < matrix_a.size(); i++) {
            for (int j = 0; j < matrix_a[i].size(); j++) {
                std::cout << matrix_a[i][j] << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Matrices are not equal";
    }

}
