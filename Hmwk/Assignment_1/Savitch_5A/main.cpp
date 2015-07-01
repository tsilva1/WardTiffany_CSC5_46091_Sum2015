/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 29, 2015, 6:27 PM
 * Purpose:  Homework 1 Savitch 5A
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main() {

    //Declare Variables Here (given by book)
    float width, length, totalLength;

    //Prompt then input width (ft)
    cout << "Press return after entering a number.\n";
    cout << "Please enter measurements in feet.\n";
    cout << "Enter the width of the area needed to be fenced:\n";
    cin >> width;
    //Prompt then input length (ft)
    cout << "Enter the length of the area needed to be fence:\n";
    cin >> length;
    //Calculate the total length of fence needed to enclose the area (ft))
    totalLength = 2 * (width + length);
    //Output answer of fence needed to user
    cout << "In order to fence an area that is ";
    cout << width;
    cout << " ft x ";
    cout << length;
    cout << " ft,\n";
    cout << "you need a total of ";
    cout << totalLength;
    cout << " ft of fence.\n";

//Exit Stage Right!
return 0;
}