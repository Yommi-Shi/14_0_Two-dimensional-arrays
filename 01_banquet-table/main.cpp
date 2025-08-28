#include <iostream>
#include <vector>
#include <string>


int main() {
    std::cout << "===Banquet table===" << std::endl;

    std::vector<std::vector<std::string> > cutlery = {
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife", "dessert spoon"},
        {"fork", "spoon", "knife", "dessert spoon"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"},
        {"fork", "spoon", "knife"}
    };

    int dishes[12][1] = {
        {2}, {2}, {2}, {2}, {2},
        {3}, {3},
        {2}, {2}, {2}, {2}, {2}
    };

    int chairs[12][1] = {
        {1}, {1}, {1}, {1}, {1},
        {1}, {1},
        {1}, {1}, {1}, {1}, {1}
    };

    chairs[4][0] += 1;
    cutlery[9][1] = "";
    cutlery[6][1] = "";
    cutlery[9][1] = "spoon";
    dishes[6][0] -= 1;

}
