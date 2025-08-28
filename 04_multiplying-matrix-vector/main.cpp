#include <iostream>


void multiplying_matrix_vector(float matrix_a[][4], float array_b[4], float matrix_c[][4]) {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            float element_m = matrix_a[i][j];
            float element_a = array_b[j];
            matrix_c[i][j] = element_m * element_a;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matrix_c[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "===Multiplying a matrix by a vector===" << std::endl;

    float matrix_a[4][4];
    float array_b[4];
    float matrix_c[4][4];

    std::cout << "Enter matrix \'A\'" << std::endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            float element;
            std::cin >> element;
            matrix_a[i][j] = element;
        }
    }

    std::cout << "Enter array \'B\'" << std::endl;

    for (int i = 0; i < 4; i++) {
        float element;
        std::cin >> element;
        array_b[i] = element;
    }

    std::cout << "Multiplying a matrix by a vector" << std::endl;
    multiplying_matrix_vector(matrix_a, array_b, matrix_c);
}