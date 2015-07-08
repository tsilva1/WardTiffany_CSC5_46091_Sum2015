/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 5, 2015, 7:33 PM
 * Purpose:  Homework 3 Gaddis 2
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
    int number;
    
    //Prompt user to enter a number between 1 and 10
    cout << "Please enter a number between 1 and 10: ";
    cin >> number;
    
    //Display Roman Numeral for number entered by user
    switch (number)
    {
        case 1: cout << "The Roman Numeral for 1 is: I\n";
        break;
        case 2: cout << "The Roman Numeral for 2 is: II\n";
        break;
        case 3: cout << "The Roman Numeral for 3 is: III\n";
        break;
        case 4: cout << "The Roman Numeral for 4 is: IV\n";
        break;
        case 5: cout << "The Roman Numeral for 5 is: V\n";
        break;
        case 6: cout << "The Roman Numeral for 6 is: VI\n";
        break;
        case 7: cout << "The Roman Numeral for 7 is: VII\n";
        break;
        case 8: cout << "The Roman Numeral for 8 is: VIII\n";
        break;
        case 9: cout << "The Roman Numeral for 9 is: IX\n";
        break;
        case 10: cout << "The Roman Numeral for 10 is: X\n";
        break;
        //If user did not enter a number between 1 and 10:
        default: cout << "You did not enter a number between 1 and 10.\n";
    }

//Exit Stage Right!
return 0;
}