    /* 
    * File:   main.cpp
    * Author: Tiffany Ward
    * Created on June 26, 2015, 12:27 PM
    * Purpose:  Lab 4 Crime Rates
    */

    //System Libraries
    #include <iostream>  //I/O Library
    #include <iomanip>
    using namespace std; //std namespace -> iostream

    //User Libraries

    //Global constants

    //Function Prototypes

    //Execution Begins Here!
    
    int main(int argc, char** argv) {

    //Declare Variables Here
    float usCrime;   //US violent crimes committed
    float enCrime;   //England violent crime committed
    float usPopl;   //US population
    float enPopl;   //England population
    float usRate;   //US percentage of violent crime to the population %
    float enRate;   //England percentage of violent crime to the population %

    //Initialize Values
    //http://www.nationmaster.com/country-info/stats/
    //Crime/Total-crimes#date
    usCrime = 11.88e6f; //11.88 million violent crimes committed in US
    enCrime = 6.52e6f; //6.52 million violent crimes committed in England
    usPopl = 3.18e8f; //318 million people in US
    enPopl = 6.4e7f; //64 million people in England

    //Calculate US percentage of violent crime to the population.
    usRate = (usCrime/usPopl)*100;
    
    //Calculate England percentage of violent crime to the population.
    enRate = (enCrime/enPopl)*100;
    
    //Output the results
    cout << setprecision(2) << fixed;
    cout << "US Crime Rate: " << usRate << " %" << endl;
    cout << "England Crime Rate: " << enRate << " %" << endl;
    
    //Exit Stage Right!
    return 0;
    }
