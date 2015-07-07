/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 6, 2015, 11:21 PM
 * Purpose:  Homework 2 Savitch 4A
 */
 
//System Libraries
#include <iostream>  //I/O Library
#include <string> //string library
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

//Declare Variables Here
    string instctr, name, food, nmbr, adj, color, animal;
    //Prompt then have user enter their instructors name,
    //their name, a food, a number, an adjective, a color,
    //and an animal.
    cout << "Mad Lib\n";
    cout << "Please enter one word answers and press enter after "
            "each answer.\n";
    cout << "Pease enter the first or last name of your instructor: ";
    cin >> instctr;//user enters the name of their instructor
    cout << "Your name: ";
    cin >> name;//user enters their name
    cout << "A food: ";
    cin >> food;//user enters a food
    cout << "Pick a number between 100 and 120: ";
    cin >> nmbr;//user enters a number between 100 and 120
    cout << "Choose an adjective: ";
    cin >> adj;//user enters an adjective
    cout << "Pick a color: ";
    cin >> color;//user enters a color
    cout << "Name an animal: ";
    cin >> animal;//user enters an animal
    cout << endl;
    //Output the mad lib with users inputted answers.
    cout << "Dear Instructor " << instctr << ",\n";
    cout << endl;
    cout << "I am sorry that I am unable to turn in my homework at this time."
            " First, \n";
    cout << "I ate a rotten " << food << ", which made me turn "
            << color << " and extremely ill. I \n";
    cout << "came down with a fever of " << nmbr << ". Next, my "
            << adj << " pet \n";
    cout << animal << " must have smelled the remains of the " << food <<
            " on my homework, \n";
    cout << "because he at it. I am currently rewriting my homework "
            "and hope you \n";
    cout << "will accept it late.\n";
    cout << endl;
    cout << "Sincerely,\n";
    cout << name;
    //Exit stage right
    return 0;
}