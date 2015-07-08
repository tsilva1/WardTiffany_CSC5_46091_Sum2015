/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 7, 2015, 8:03 PM
 * Purpose:  Homework 3 Savitch 1A
 */
 
//System Libraries
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables here
    char plyr1, plyr2, ans;
	
    do
    {
	//Prompt users to enter Rock (r), Paper (p), or Scissors (s)
        cout << "Let's play Rock, Paper, Scissors!\n";
	cout << "For Rock enter 'R'\n";
        cout << "For Paper enter 'P'\n";
        cout << "For Scissors enter 'S'\n";
        cout << "Player 1: ";
	cin >> plyr1;
        cout << "Player 2: ";
        cin >> plyr2;
	
        //Output results based on input
        //Allow for capital and lower case answers
        //Player 1 = paper; Player 2 = rock.
	if ((plyr1 == 'P' || plyr1 == 'p') && (plyr2 == 'R' || plyr2 == 'r'))
            cout << "Paper covers rock! Player 1 wins.";
        //Player 1 = scissors; Player 2 = paper.
        else if ((plyr1 == 'S' || plyr1 == 's') && (plyr2 == 'P' || plyr2 == 'p'))
            cout << "Scissors cut paper! Player 1 wins.";
        //Player 1 = rock; Player 2 = scissors
        else if ((plyr1 == 'R' || plyr1 == 'r') && (plyr2 == 'S' || plyr2 == 's'))
            cout << "Rock breaks scissors! Player 1 wins.";
        //Player 1 = paper; Player 2 = scissors
        else if ((plyr1 == 'P' || plyr1 == 'p') && (plyr2 == 'S' || plyr2 == 's'))
            cout << "Scissors cut Paper! Player 2 wins.";
        //Player 1 = rock; Player 2 = paper
        else if ((plyr1 == 'R' || plyr1 == 'r') && (plyr2 == 'P' || plyr2 == 'p'))
            cout << "Paper covers Rock! Player 2 wins.";
        //Player 1 = scissors; Player 2 = rock
        else if ((plyr1 == 'S' || plyr1 == 's') && (plyr2 == 'R' || plyr2 == 'r'))
            cout << "Rock breaks scissors! Player 2 wins.";
        //Else, it's a draw
        else
            cout << "Draw! Nobody wins.\n";
        //Give users option to continue playing or end game
        cout << endl;
	cout << "Would you like to play again? (y/n): ";
        cin >> ans;
    } while (ans == 'y'||ans == 'Y');
    //Output if users choose to end game
    cout << "Good-Bye\n";
    
//Exit Stage Right!
return 0;
}