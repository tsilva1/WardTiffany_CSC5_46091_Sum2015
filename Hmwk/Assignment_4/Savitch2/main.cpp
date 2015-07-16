/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 13, 2015, 9:17 PM
 * Purpose:  Homework 4 Savitch 2
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
    float height, weight; //to be entered by user
    int age;
    float hat, jacket, waist;//clothing sizes to be calculated
    char ans;
    
    do{
    //Prompt user to input height, weight, and age
    cout<<"Please enter height in inches, weight in pounds, and age in years\n";
    cout<<"Height: ";
    cin>>height;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"Age: ";
    cin>>age;
    //Calculate sizes
    hat=weight/height*2.9;
    //Loop for jacket size and waist size
    int jackAGE=((age%30)/10);
    int wstAGE=((age%28)/2);
    if ((age>28)&&(age<=30)){
        jacket=height*weight/288.0;
        waist=(weight/5.7)+(wstAGE*.1);
    }else if (age>30){
        jacket=(height*weight/288.0)+(jackAGE*0.125);
        waist=(weight/5.7)+(wstAGE*.1);
    }else{
        jacket=height*weight/288.0;
        waist=weight/5.7;
    }
    //Output results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your hat size is: "<<hat<<" inches.\n";
    cout<<"Your jacket size is: "<<jacket<<" inches.\n";
    cout<<"Your waist size is: "<<waist<<" inches.\n";
    cout << endl;
    cout << "Would you like to enter a new Height, Weight & Age?(y/n): ";
    cin >> ans;
    } while (ans == 'y'||ans == 'Y');
    //Output if users choose to end game
    cout << "Good-Bye\n";
    //Exit Stage Right
    return 0;
}