/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 5:09 PM
 * Purpose:  Homework 5 Gaddis 8
 */

//System Libraries
#include <iostream>// File I/O
#include <cstdlib>//for coin tossing
#include <ctime>//random rumber
using namespace std;// std namespace ->iostream

//User Libraries

//Global Constants

//Function Prototypes
int coinToss(void)
{
    int ranNum;
    ranNum=1+rand() % 2;
    return ranNum;
}

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    int HoMaTi=0;//how many times is tossed
    int ranNum=0;//random number
    string HeTa="";//Head or tail
    
    //Initialize values
    cout<<"How many times do you want me to toss the coin? ";
    cin>>HoMaTi;
    srand((time(0)));//random number generator
    
    //Process Inputs Here
    for(int i=1; i<=HoMaTi; i++)
    {
        ranNum=coinToss();
        if(ranNum==1)
            HeTa="Head";//first face of coin
        else
            HeTa="Tail";//second face of coin
        
        cout<<HeTa<<endl;
    }
    //Outputs Unknown Here
    
    //Exit stage Right!
    

    return 0;
}


