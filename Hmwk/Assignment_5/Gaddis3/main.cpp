/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 3:02 PM
 * Purpose:  Homework 5 Gaddis 3
 */

//System Library
#include <iostream>// I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getsal (string);
void findH (float,float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables here
    float NEsal;//north east sales
    float SEsal;//south east sales
    float NWsal;//north west sales
    float SWsal;//south west sales
    
    //Initialize variables
    for(int i=0; i<4; i++)
    {
        switch(i)
        {
            case 0:
                NEsal=getsal("NE");
                break;
            case 1:
                SEsal=getsal("SE");
                break;
            case 2:
                NWsal=getsal("NW");
                break;
            default:
                SWsal=getsal("SW");
                break;
        }
    }
    
    //Process Inputs Here
    findH (NEsal,SEsal,NWsal,SWsal);
    //Output Unknowns here
    
    //Exit Stage Right
    
    return 0;
}

float getsal(string name)
{
    float sales=0;
    cout<<"Enter sales for division "<<name<<" $";
    cin>>sales;
    
    while (sales<0)
    {
        cout<<"Sales cannot be red numbers. Re-Enter: $";
        cin>>sales;
    }
    return sales;
}

void findH(float NEsal, float SEsal, float NWsal, float SWsal)
{
    float High=0;
    string divi="";
    
    if(NEsal>SEsal && NEsal>NWsal && SEsal>SWsal)
    {
        High=NEsal;
        divi="North East";
    }
    else if (SEsal>NEsal && SEsal>NWsal && SEsal>SWsal)
    {
        High=SEsal;
        divi="South East";
    }
    else if (NWsal>NEsal && NWsal>SEsal && NWsal>SWsal)
    {
        High=NWsal;
        divi="North West";
    }
    else
    {
        High=SWsal;
        divi="South West";
    }
    cout<<"The division with the highest sales is "<<divi<<" with a total of $"<<High<<endl;
}