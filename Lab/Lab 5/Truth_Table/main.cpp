/*  
 * File:   main.cpp 
 * Author: Tiffany Ward 
 * Created on July 1, 2015, 12:07 AM
 * Purpose:  To the show the truth 
 */ 

//System Libraries 
#include <iostream> 
using namespace std; 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) { 

    //Declare variables 
    bool x,y; 

    //Output the heading of the table 
    cout<<"The Truth Table"<<endl; 
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y "; 
    cout<<"(X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl; 

    //Row 1 output 
    x=true;y=true; 
    cout<<(x?'T':'F')<<" ";//boolean expression
    cout<<(y?'T':'F')<<"  ";//boolean expression
    cout<<(!x?'T':'F')<<"  ";//not
    cout<<(!y?'T':'F')<<"   ";//not
    cout<<(x&&y?'T':'F')<<"    ";//and
    cout<<(x||y?'T':'F')<<"   ";//or
    cout<<(x^y?'T':'F')<<"     ";//xor
    cout<<((x^y)^y?'T':'F')<<"       ";//=x
    cout<<((x^y)^x?'T':'F')<<"       ";//=y
    cout<<(!(x&&y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x||!y?'T':'F')<<"      ";//DeMorgan's Law
    cout<<(!(x||y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x&&!y?'T':'F')<<endl;//DeMorgan's Law

    //Row 2 output 
    x=true;y=false; 
    cout<<(x?'T':'F')<<" ";//boolean expression
    cout<<(y?'T':'F')<<"  ";//boolean expression
    cout<<(!x?'T':'F')<<"  ";//not
    cout<<(!y?'T':'F')<<"   ";//not
    cout<<(x&&y?'T':'F')<<"    ";//and
    cout<<(x||y?'T':'F')<<"   ";//or
    cout<<(x^y?'T':'F')<<"     ";//xor
    cout<<((x^y)^y?'T':'F')<<"       ";//=x
    cout<<((x^y)^x?'T':'F')<<"       ";//=y
    cout<<(!(x&&y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x||!y?'T':'F')<<"      ";//DeMorgan's Law
    cout<<(!(x||y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x&&!y?'T':'F')<<endl;//DeMorgan's Law
    
    //Row 3 output
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";//boolean expression
    cout<<(y?'T':'F')<<"  ";//boolean expression
    cout<<(!x?'T':'F')<<"  ";//not
    cout<<(!y?'T':'F')<<"   ";//not
    cout<<(x&&y?'T':'F')<<"    ";//and
    cout<<(x||y?'T':'F')<<"   ";//or
    cout<<(x^y?'T':'F')<<"     ";//xor
    cout<<((x^y)^y?'T':'F')<<"       ";//=x
    cout<<((x^y)^x?'T':'F')<<"       ";//=y
    cout<<(!(x&&y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x||!y?'T':'F')<<"      ";//DeMorgan's Law
    cout<<(!(x||y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x&&!y?'T':'F')<<endl;//DeMorgan's Law
    
    //Row 4 output
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";//boolean expression
    cout<<(y?'T':'F')<<"  ";//boolean expression
    cout<<(!x?'T':'F')<<"  ";//not
    cout<<(!y?'T':'F')<<"   ";//not
    cout<<(x&&y?'T':'F')<<"    ";//and
    cout<<(x||y?'T':'F')<<"   ";//or
    cout<<(x^y?'T':'F')<<"     ";//xor
    cout<<((x^y)^y?'T':'F')<<"       ";//=x
    cout<<((x^y)^x?'T':'F')<<"       ";//=y
    cout<<(!(x&&y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x||!y?'T':'F')<<"      ";//DeMorgan's Law
    cout<<(!(x||y)?'T':'F')<<"       ";//DeMorgan's Law
    cout<<(!x&&!y?'T':'F')<<endl;//DeMorgan's Law
    
    return 0; 
} 
