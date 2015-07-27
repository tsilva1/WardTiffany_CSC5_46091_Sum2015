/* 
 * File:   main.cpp
 * Author: GabrielJ
 * Savitch Ch7 Prob 5
 * Created on July 26, 2015, 2:26 PM
 * This program reads in an array of integers and outputs a two column list
 */

#include <iostream>// I/O
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
using namespace std;//Stadard Namespace

int main()
{
    string input = "-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";
    stringstream ss(input);

    const int SPACING = 3;

    const size_t SIZE = 50;
    int myArray[SIZE] = { 0 };

    int count = -1;

    //fills the array with integers
    while (ss >> myArray[++count]);//NULL statement

    //create pointers to the beginning and end of the array
    int *beg = myArray;
    int *end = myArray + count;


    //Sorts the array
    sort(beg, end, greater<int>());

    int current = myArray[0];
    count = 1;
    
    cout<<"  N"<<"  "<<"count"<<endl;// Outputs the header
    
    //counts the number of each value in the array
    while (++beg != end)
    {

        if (current != *beg)
        {
            cout << setw(SPACING) << current << setw(SPACING) << count << endl;
            current = *beg;
            count = 0;
        }

        ++count;
    }

    //outputs the final value
    cout << setw(SPACING) << current << setw(SPACING) << count << endl;
    
    cin.ignore();
    return 0;
}