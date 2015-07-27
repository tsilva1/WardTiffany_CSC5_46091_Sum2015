/* 
 * File:   main.cpp
 * Author: GabrielJ
 * Savitch 7 Prob 10
 * Created on July 26, 2015, 3:42 PM
 * Tic Tac Toe
 */

#include <iostream>//I/O
using namespace std;// Standard Namespace

void printgmBoard( char[3][3] );
bool isGmOver( char[3][3] );
bool getTurn( bool &XsTurn, char input, char board[3][3] );

int main( ) {
    char gmboard[3][3] = {// outputs game board
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    bool XsTurn = true;
    cout << "~~~ Tic-Tac-Toe game ~~~" << endl;

    do {
        cout << "\nIt's now " << (XsTurn ? "X" : "O") << "'s turn.\n";
        printgmBoard(gmboard);
        do {
            char input;
            cout << "Enter an empty square number to place your mark: ";
            cin >> input;
            if (getTurn( XsTurn, input, gmboard )) {
                break;
            }
        } while (true);
    } while (!isGmOver( gmboard ));

    return 0;
}
void printgmBoard( char gmboard[3][3] ) {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            cout << gmboard[row][col] << (col == 2 ? "\n" : " ");
    return;
}

bool isGmOver( char gmboard[3][3] ) {
    for (int row = 0; row < 3; row++)
        if ((gmboard[row][0] == gmboard[row][1]) &&
                (gmboard[row][1] == gmboard[row][2])) { // check rows
            cout << gmboard[row][0] << " wins.\n";
            return true;
        }
    for (int col = 0; col < 3; col++)
        if ((gmboard[0][col] == gmboard[1][col]) && 
                (gmboard[1][col] == gmboard[2][col])) { // check columns
            cout << gmboard[0][col] << " wins.\n";
            return true;
        }
    if ((gmboard[0][0] == gmboard[1][1]) && 
            (gmboard[1][1] == gmboard[2][2])) { // check \ diagonal
        cout << gmboard[1][1] << " wins.\n";
        return true;
    }
    if ((gmboard[2][0] == gmboard[1][1]) && 
            (gmboard[1][1] == gmboard[2][0])) { // check / diagonal
        cout << gmboard[1][1] << " wins.\n";
        return true;
    }
    int unfilled = 0;
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (gmboard[row][col] >= '1' && gmboard[row][col] <= '9')
                unfilled++; // count unfilled squares
    if (unfilled == 0) {
        cout << "No more unfilled squares. Draw game.\n";
        return true;
    }
    return false;
}
bool getTurn( bool &XsTurn, char input, char gmboard[3][3] ) {
    if (input < '1' || input > '9') {
        cout << "Please enter a digit from 1 to 9." << endl;
        return false;
    }
    int intInput = input - '1';
    int row = (intInput / 3), col = intInput % 3;
    //cout << input << intInput << row << col << board[row][col] << endl;
    if (gmboard[row][col] == 'X' || gmboard[row][col] == 'O') {
        cout << "Square " << input << " is already filled." << endl;
        return false;
    }
    gmboard[row][col] = (XsTurn ? 'X' : 'O');
    XsTurn = !XsTurn;
    return true;
}