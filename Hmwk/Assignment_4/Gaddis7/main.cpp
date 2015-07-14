/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 13, 2015, 2:01 AM
 * Purpose:  Homework 4 Gaddis 7
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <iomanip> 
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
    
    //Declare and initialize variables
    int days; //days = number of days worked
    float penny=1.0f;//number of pennies
    float total=0.0f; //total number of pennies earned, displayed in $ amount
    float pay=0.0f;//convert pennies to dollars
    
    //Prompt user to input number of days worked
    cout<<"Please enter the number of days worked: ";
    cin>>days;
    
    //Verify if number of days entered is 1 or greater
    //Display error if less than 0
    if (days<1){
        cout<<"The number of days must be greater than 0.";
        return 1;
    }else
        //Header
        cout<<" Day          Total Earned ($)\n";
        cout<<"_______________________________\n";
        //Loop for days and pay
        for (int i=1;i<=days;i++){
            //calculate pay
            pay=penny/100;
            //Output table of days and pay
            cout<<fixed<<showpoint<<setprecision(2);
            cout<<setw(4)<<i<<setw(11)<<"$ "<<setw(15)<<pay<<endl;
            total+=pay;
            penny*=2;
        }
        //Output total pay
        cout<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Total earnings are $ "<<total<<endl;            
    //Exit Stage Right
    return 0;
}