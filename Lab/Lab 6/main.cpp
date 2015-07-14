/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 9, 2015, 10:32 PM
 * Purpose:  Retirement Calculator
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f; //Investment Rate -> see Calif Muni Bonds
    float savReq;        //Savings required at retirement
    float pDep=0.20f;    //Of your gross Salary -> Percentage Deposited 
    float deposit;       //Yearly deposit in $'s
    float savings=0;     //Initial Savings at start of Employment
    int year=0;        //Start at year 0
    int yy=18;
    float savBGYR=0;
    float savEYR=0;
    
    //Calculate required savings
    savReq=salary/invRate; //Required Savings
    deposit=pDep*salary;   //Deposit based salary
    
    //Header
    cout<<"Retirement Calculator\n";
    cout<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"$" <<salary<< " = Salary $'s\n";
    cout<<(invRate*100)<<"% = Investment Rate -> See Muni Bonds\n";
    cout<<(pDep*100)<<"% = Deposit as a % of Salary\n";
    cout<<fixed<<setprecision(0);
    cout<<"$"<<savReq<<" = Amount needed to retire $'s\n";
    cout<<endl;
    
    //Header of and first line for table
    cout<<"                 Beginning of Yr  End of Yr  End of Yr\n";
    cout<<"Year    Date         Savings       Interest   Deposit\n";
    cout<<setw(3)<<year++<<setw(9)<<"06/01/"<<yy++<<setw(15)<<savings
                <<setw(14)<<savings<<setw(11)<<deposit<<endl;
    //Loop to calculate when Retirement is possible
    do{
        //Create table to show loop calculations
        deposit=pDep*salary; //Deposit based salary
        savBGYR=(savings+=deposit)+=savEYR;
        savEYR=(savBGYR*invRate);
        
        cout<<setw(3)<<year++<<setw(9)<<"06/01/"<<yy++<<setw(15)<<
                savBGYR<<setw(14)<<savEYR
                <<setw(11)<<deposit<<endl;
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the results
    cout<<endl;
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}