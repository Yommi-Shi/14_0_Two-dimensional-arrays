#include <iostream>


void draw_board(char board[][3]) {
    for (int i = 0; i < 3; i++) {
        std::cout << "| ";
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " | ";
        }
        std::cout << std::endl;
        std::cout << "-------------";
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "===Tic-Tac-Toe===" << std::endl;

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    char gamer_name = 'X';

    for (int i = 0; i < 9; i++) {
        draw_board(board);
        std::cout << "player walks \'" << gamer_name << "\' ";
        int row;
        int col;
        std::cout << "enter coordinates " << std::endl;
        std::cin >> row >> col;

        if (board[row][col] != ' ' || row < 0 || row > 3 || col < 0 || col > 3) {
            std::cout << "Incorrect input" << std::endl;
            continue;
        }

        board[row][col] = gamer_name;

        for (int j = 0; j < 3; j++) {
            if ((board[j][0] != ' ' && board[j][0] == board[j][1] && board[j][1] == board[j][2]) ||
                (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])) {
                draw_board(board);
                std::cout << "The player " << gamer_name << " won!";
                return 0;
            }
        }

        gamer_name = (gamer_name == 'X') ? 'O' : 'X';
    }

    draw_board(board);

    std::cout << "The game ended in a draw." << std::endl;
}
