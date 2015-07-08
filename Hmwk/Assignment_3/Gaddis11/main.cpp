/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 7, 2015, 3:32 AM
 * Purpose: Homework 3 Gaddis 11 
 */ 

//System Libraries 
#include <iostream>  //I/O Library
#include <iomanip>
#include <cstdlib> 
#include <ctime> 
using namespace std; //std namespace -> iostream

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 
     
    //Set the random seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int op1, op2, result, answer; 
    char op; 
    bool doAgain; 
     
    //Loop based upon continuing to play with the math tutor 
    do{ 
        //Determine op1/op2 
        op1 = rand() % 900 + 100;//[100-999]; 
        op2 = rand() % 900 + 100;//[100-999]; 
        op = rand() % 5; 
        //Display the problem 
        cout << setw(6) << op1 << endl; 
        switch(op){ 
            case 0:{ 
                cout << " + " << op2 << endl; 
                answer = op1+op2;
                break; 
            } 
            case 1:{ 
                cout << " - " << op2 << endl; 
                answer = op1 - op2; 
                break; 
            } 
            case 2:{ 
                cout << " * " << op2 << endl; 
                answer = op1 * op2; 
                break; 
            } 
            case 3:{ 
                cout << " / " << op2 << endl; 
                answer = op1 / op2; 
                break; 
            } 
            case 4:{ 
                cout << " % " << op2 << endl; 
                answer = op1 % op2; 
                break; 
            } 
        } 
        cout << "------" << endl;
        
        //Input the value for the sum 
        cin >> result;
        
        //If correct output "Congratulations". Else output "try again"? 
        if(result==answer){ 
            cout << endl << "Congratulations!" << endl; 
        }else{ 
            cout << endl << "Wrong Answer" << endl; 
            cout << "The answer is = " << answer << endl; 
        } 
        //Prompt if they would like to continue 
        cout << endl << "Would you like to continue y/n" << endl; 
        char response; 
        cin >> response; 
        if (response=='y'||response=='Y')doAgain=true; 
        else doAgain=false;
        cout << "Good-Bye!\n";
    }while(doAgain); 
    //Exit Stage Right! 
    return 0; 
}