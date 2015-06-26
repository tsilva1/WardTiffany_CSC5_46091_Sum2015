    /* 
    * File:   main.cpp
    * Author: Tiffany Ward
    * Created on June 25, 2015, 11:15 PM
    * Purpose:  Lab 3 Gas Tax
    */

    //System Libraries
    #include <iostream>  //I/O Library
    using namespace std; //std namespace -> iostream

    //User Libraries

    //Global constants

    //Function Prototypes

    //Execution Begins Here!
    
    int main(int argc, char** argv) {

    //Declare Variables Here
    float fedTax;   //Federal Tax $'s 
    float calTax;   //California Tax $'s 
    float slsTax;   //California Sales Tax % 
    float gallon;   //Price of a gallon of gas $'s with all taxes included
    float glnBase;   //Base price of gallon of gas $'s (without taxes)
    float TtlTax;   //Total tax on a gallon of gas $'s
    float TaxRate;   //Tax Rate %

    //Initialize Values given in Lab instructions
    fedTax = 0.18f;
    calTax = 0.36f;
    slsTax = 1.08f;
    gallon = 3.69f;

    //Calcualte base price of a gallon of gas
    glnBase = (gallon/slsTax) - fedTax - calTax;
    
    //Calculate total tax on a gallon of gax
    TtlTax = gallon-glnBase;
    
    //Calculate tax rate
    TaxRate = (TtlTax/gallon)*100;
    
    //Output the results
    cout << "Base price of a gallon of gas = $ " << glnBase << endl;
    cout << "Total tax per gallon of gas = $ " << TtlTax << endl;
    cout << "Tax rate = " << TaxRate << " %" << endl;
    
    //Exit Stage Right!
    return 0;
    }
