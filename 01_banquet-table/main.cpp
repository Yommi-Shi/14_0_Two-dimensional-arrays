#include <iostream>


int main() {
    std::cout << "===Banquet table===" << std::endl;

    int cutlery[2][6] = {{4, 3, 3, 3, 3, 3}, {4, 3, 3, 3, 3, 3}};

    int dishes[2][6] = {{3, 2, 2, 2, 2, 2}, {3, 2, 2, 2, 2, 2}};

    int chairs[2][6] = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};

    chairs[0][4] += 1;
    cutlery[1][2] -= 1;
    cutlery[1][0] -= 1;
    cutlery[1][2] += 1;
    dishes[1][0] -= 1;

}
