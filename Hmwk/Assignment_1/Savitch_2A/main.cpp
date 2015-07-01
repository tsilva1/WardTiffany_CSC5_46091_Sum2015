/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 29, 2015, 6:05 PM
 * Purpose:  Homework 1 Savitch 1A
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Begins Here!
int main() {
    //Declare Variables Here
    float number_of_pods, peas_per_pod, total_peas;
    //Added per instructions in problem 2
    cout << "Hello.\n";
    //Prompt then input number of pods
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    //Prompt then input number of peas in a pod
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    //Calculate the total number of peas
    total_peas = number_of_pods * peas_per_pod;
    //Output the results
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas total.\n";
    //Added per instructions in problem 2
    cout << "Good-bye\n";
	
//Exit Stage Right!
return 0;
}