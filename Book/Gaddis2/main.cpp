/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 12, 2015, 11:59 PM
 * Purpose:  Homework 6 Gaddis 4
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

    const int ARRAY=12;//set array
    int inch[ARRAY];//inches per month
    int count;//set count for 'for' loops
    int min;//min rain month (inches)
    int max;//max rain month (inches)
    float ttlSUM=0;//total sum (inches)
    float average=0;//average rain fall (inches)
    string lowMNTH;//convert low month to name
    string hghMNTH="January";//convert high month to name
    //name of months for lowMNTH and hghMNTH conversions
    string month[] = {"January","Febuary","March","April",
                           "May","June","July","August","September",
                           "October","November","December"};

    //Prompt user to enter inches of rain per month
    for (count=0;count<ARRAY;count++)
    {
        cout<<"Please enter rainfall (in inches) for month "<<(count+1)<<": ";
        cin>>inch[count];
    }
    //calculate total sum of rain for entire year
    for (count=0;count<ARRAY;count++)
    {
        ttlSUM+=inch[count];
    }
    //Output total sum of rain for entire year
    cout<<endl;
    cout<<"The total rainfall for the year is "<<ttlSUM<<" in.\n";
    //calculate average rain fall
    average=ttlSUM/ARRAY;
    //output average rain fall
    cout<<"The average rainfall for the year is "<<average<<" in.\n";
    //calculate month with max rain fall
    max = inch[0];
    for (count=0;count<ARRAY;count++)
    {
	if (inch[count] >= max)
        {
            max = inch[count];
            hghMNTH = month[count];
	}
    }
    //calculate month with min rain fall
    min = inch[0];
    for (count=0;count<ARRAY;count++) 
    {
        if (inch[count] <= min)
        {
            min = inch[count];
            lowMNTH = month[count];
        }
    }
    //Ouput month(s) with highest rain fall.
    cout<<"The month(s) with the most rainfall is/are ";
    for (count=0;count<ARRAY;count++)
        if (inch[count] == max)
            cout<<month[count]<<", with a rainfall of: "<< max <<" in." << endl;
    //Ouput month(s) with lowest rain fall.
    cout<<"The month(s) with the least rainfall is/are ";
    for (count=0;count<ARRAY;count++)
        if (inch[count] == min)
            cout<<month[count]<<", with a rainfall of: "<< min <<" in." << endl;
    //Exit stage right!
    return 0;
    }