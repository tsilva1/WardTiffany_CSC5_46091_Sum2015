/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 3:25 PM
 * Purpose:  Homework 5 Gaddis 4
 */

//System Libraries
#include <iostream>// File I/O
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes
int getNumAccidents (string);
void findLowest (int, int, int, int, int);

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    int accN;//accidents in North
    int accS;//accidents in South
    int accE;//accidents in East
    int accW;//accidents in west
    int accC;//accidents in central
    
   //initialize values
    for(int i=0; i<5; i++)
    {
        switch(i)
        {
            case 0:
                accN=getNumAccidents("North");
                break;
            case 1:
                accS=getNumAccidents("South");
                break;
            case 2:
                accE=getNumAccidents("East");
                break;
            case 3:
                accW:getNumAccidents("West");
                break;
            default:
                accC=getNumAccidents("Central");
        }
        
    }
    
    findLowest(accN,accS,accE,accW,accC);//find the lowest area of accidents

    return 0;
}
int getNumAccidents(string region)
{
    int acc=0;
    
    cout<<"Number of accidents for region "<<region<<" ";
    cin>>acc;
    
    while(acc<0) 
    {
        cout<<"Number of accidents should be greater than 0. RE-enter ";
        cin>>acc;
    }
    return acc;
}

void findLowest(int r1, int r2, int r3, int r4, int r5)
{
    int lowest=0;
    string region="";
    
    if(r1<r2 && r1<r3 && r1<r4 && r1<r5)
    {
        lowest=r1;
        region="North";
    }
    else if (r2<r1 && r2<r3 && r2<r4 && r2<r5)
    {
        lowest=r2;
        region="South";
    }
    else if (r3<r1 && r3<r2 && r3<r4 && r3<r5)
    {
        lowest=r3;
        region="East";
    }
    else if (r4<r1 && r4<r2 && r4<r3 && r4<r5)
    {
        lowest=r4;
        region="West";
    }
    else
    {
        lowest=r5;
        region="Central";
    }
    
    cout<<"The region with the lowest accidents is "<<region<<". Total number of accidents was "<<lowest<<endl;
    
}


