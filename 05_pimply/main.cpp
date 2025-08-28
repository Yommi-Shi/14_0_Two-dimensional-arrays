#include <iostream>


void initialization_bubble(bool bubbles[][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            bubbles[i][j] = true;
        }
    }
}

void displayBubbles(bool bubbles[][12]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (bubbles[i][j]) {
                std::cout << "o" << " ";
            } else {
                std::cout << "x" << " ";

            }
        }
        std::cout << std::endl;
    }

}

bool isValidCoordinates(int x, int y) {
    return x >= 0 && x < 12 && y >= 0 && y < 12;
}

void popBubbles(bool bubbles[][12], int start_x, int start_y, int end_x, int end_y) {
    if (!isValidCoordinates(start_x, start_y) || !isValidCoordinates(end_x, end_y)) {
        std::cout << "Error: incorrect coordinates!" << std::endl;
    } else {
        for (int i = start_x; i <= end_x; i++) {
            for (int j = start_y; j <= end_y; j++) {
                if (bubbles[i][j]) {
                    std::cout << "Pop!" << " ";
                }
                bubbles[i][j] = false;
            }
            std::cout << std::endl;
        }
    }

}

bool isAnyBubbleIntact(bool bubbles[][12]) {
    int count = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (!bubbles[i][j]) {
                count++;
            }
        }
    }
    if (count == 144) {
        return false;
    }
    return true;
}

int main() {
    std::cout << "===Pimply===" << std::endl;

    bool bubbles[12][12];

    initialization_bubble(bubbles);

    while (true) {
        displayBubbles(bubbles);
        int start_x, start_y, end_x, end_y;
        std::cout << "Enter the region origin coordinates (x, y):";
        std::cin >> start_x >> start_y;
        std::cout << "Enter region end coordinates (x, y):";
        std::cin >> end_x >> end_y;
        popBubbles(bubbles, start_x, start_y, end_x, end_y);
        if (!isAnyBubbleIntact(bubbles)) {
            displayBubbles(bubbles);
            std::cout << "All the bubbles are burst!";
            break;
        }
    }

}