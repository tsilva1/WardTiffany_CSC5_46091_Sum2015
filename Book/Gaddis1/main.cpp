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
    
    const int ARRAY=10;
    int numb[ARRAY];
    int count;
    int min;
    int max;
    
    for (count=0;count<ARRAY;count++)
    {
        cout<<"Please enter a number: ";
        cin>>numb[count];
    }
    min=numb[0];
    max=numb[0];
for (count=0;count<ARRAY;count++)
	{
		if(min>numb[count])
		{
			min=numb[count];
		}
		else if(max<numb[count])
		{
			max = numb[count];
		}
	}

cout<<"The maximum number you entered is: "<< max << endl;
cout<<"The minimum number you entered is: "<< min << endl;

return 0;
}