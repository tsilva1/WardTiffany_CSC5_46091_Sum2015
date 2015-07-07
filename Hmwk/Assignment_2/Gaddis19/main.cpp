/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 7, 2015, 12:51 AM 
 * Purpose: Homework 2 Gaddis 19 
 */ 

//System Libraries 
#include <iostream> //I/O Library
#include <string> //string library
#include <iomanip>
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    //Declare Variables
    //loan = Loan amount borrowed
    //months = Length of loan in months
    float loan, months, rate;
    //Prompt user to enter their loan information
    cout << "Please enter your loan information to calculate "
            "monthly payments.\n";
    cout << "Loan amount: $ ";
    cin >> loan;
    cout << "Length of Loan (in months): ";
    cin >> months;
    cout << "Interest rate of loan: % ";
    cin >> rate;
    
    //Calculate the intermediate value
    //temp = Intermediate value found in Monthly Payment equation
    float temp = 1.0f;
    float onePlsi = (1 + (rate / 100)); 
    for(int mos = 1; mos <= months; mos++){ 
        temp *= onePlsi; 
    } 
     
    //Calculate monthly payment
    //rate = Interest rate
    //payment = monthly payments
    //cost = total cost of interest
    //total = total of loan after interest
    float pymt, cost, total;
    pymt = (rate/100) * temp * loan / (temp - 1); 
    pymt = static_cast<int> (pymt * 100) / 100.0f; 
    total = months * pymt;
    cost = total - loan; 
     
    //Output the results
    //Set to two decimal points
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 
    cout << endl;
    cout << "The following is a summary of your loan and monthly payments:\n";
    cout<<"Loan Amount:          $"<<setw(8)<<loan*1.0f<<endl; 
    cout<<"Monthly Interest Rate: "<<setw(8)<<rate<<"%"<<endl; 
    cout<<"Number of Payments:    "<<setw(8)<<static_cast<int>(months)<<endl; 
    cout<<"Monthly Payment:      $"<<setw(8)<<pymt<<endl; 
    cout<<"Amount Paid Back:     $"<<setw(8)<<total<<endl; 
    cout<<"Interest Paid:        $"<<setw(8)<<cost<<endl; 
     
    //Exit stage right! 
    return 0; 
} 