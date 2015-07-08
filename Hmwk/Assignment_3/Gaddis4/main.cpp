/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 5, 2015, 9:22 PM
 * Purpose:  Homework 3 Gaddis 3
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
    int lngthA, wdthA, areaA, lngthB, wdthB, areaB;
    
    //Prompt user to enter the length of the first rectangle (inches)
    cout << "Please enter measurements in inches\n";
    cout << "Please enter the measurements of the first rectangle.\n";
    cout << "Length: ";
    cin >> lngthA;
    //Prompt user to enter the width of the first rectangle  (inches)
    cout << "Width: ";
    cin >> wdthA;
    //Prompt user to enter the length of the second rectangle  (inches)
    cout << endl;
    cout << "Now enter the measurements of the second rectangle.\n";
    cout << "Length: ";
    cin >> lngthB;
    //Prompt user to enter the width of the second rectangle  (inches)
    cout << "Width: ";
    cin >> wdthB;
    
    //Calculate areas
    areaA = lngthA * wdthA;
    areaB = lngthB * wdthB;
    
    //Output areas
    cout << endl;
    cout << "The area of the first rectangle is: " << areaA << " in^2\n";
    cout << "The area of the second rectangle is: " << areaB << " in^2\n";
    cout << endl;
    //Output results of which rectangle has a greater area (if/else)
    if (areaA > areaB)
        cout << "The first rectangle has a greater area.\n";
    else if (areaA < areaB)
        cout << "The second rectangle has a greater area.\n";
    else
        cout << "The areas of the two rectangles are the same.\n";
    
//Exit Stage Right!
return 0;
}