/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 6:08 PM
 * Purpose:  Homework 5 Gaddis 14
 */

#include <iostream>//I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    int numst=0;//number of students added by user
    string stdnme;//student name
    string std1;//first student
    string std2;//last student
    
    //Process Inputs Here
    
    while(numst<1||numst>25)
    {
        cout<<"Enter number of students. (1-25)"<<endl;
        cin>>numst;
    }
    
    for (int i=1; i<=numst; i++)
    {
        cout<<"Please enter name of student #"<<i<<endl;
        cin>>stdnme;
        
        if(i ==1)
        {
            std1=stdnme;
            std2=stdnme;
        }
        else
        {
            if(stdnme<std1)
                std1=stdnme;
            else if(stdnme>std2)
                std2=stdnme;
        }
    }
    cout<<"First student is "<<std1<<endl;
    cout<<"Last student is "<<std2<<endl;
    
    //Outputs Unknown Here
    
    //Exit stage Right!
   
    return 0;
}


