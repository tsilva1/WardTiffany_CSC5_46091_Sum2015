    /* 
    * File:   main.cpp
    * Author: Tiffany Ward
    * Created on June 27, 2015, 11:05 PM
    * Purpose:  Homework 1 Savitch 2
    */

    //System Libraries
    #include <iostream>  //I/O Library
    using namespace std; //std namespace -> iostream

    //User Libraries

    //Global constants

    //Function Prototypes

    //Execution Begins Here!
    
    int main() {

    //Declare Variables Here
    //qrtr=number of quarters
    //dime=number of dimes
    //nickel=number of nickels
    float qrtr, dime, nickel, total;

    //Prompt then input number of quarters
    cout << "Enter number of quarters." <<endl;
    cin >> qrtr;
    //Prompt then input number of dimes
    cout << "Enter number of dimes." <<endl;
    cin >> dime;
    //Prompt then input number of nickels
    cout << "Enter number of nickels." <<endl;
    cin >> nickel;
    
    //Calculate total value of coins entered
    total = (qrtr * 25) + (dime * 10) + (nickel * 5);
    //Output the results
    cout << "That is a total of " << total << " cents." << endl;
    
    
    //Exit Stage Right!
    return 0;
    }
