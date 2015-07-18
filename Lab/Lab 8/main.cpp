/*
* File: main.cpp
* Author: Tiffany Ward
* Created on July 16, 2015, 5:02 PM
* Purpose: Lab 8 - Arrays
*/
//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std; //std namespace -> iostream

//User Libraries

//Global Constants
const int COLS=13;
const int ROWS=12;

//Function Prototypes
void showTBL(const int [][COLS], int);

//Execution Begins Here!
int main(int argc, char** argv) {
   
    //Declare variables for parallel array 
    const int NUMBER = 10;
    int sqr[NUMBER] = {1, 4, 9, 16, 25, 36,
                       49, 64, 81, 100};
    //Declare variables for 2-dim array
    int table[ROWS][COLS]={{1,1,2,3,4,5,6,7,8,9,10,11,12},
                           {2,2,4,6,8,10,12,14,16,18,20,22,24},
                           {3,3,6,9,12,15,18,21,24,27,30,33,36},
                           {4,4,8,12,16,20,24,28,32,36,40,44,48},
                           {5,5,10,15,20,25,30,35,40,45,50,55,60},
                           {6,6,12,18,24,30,36,42,48,54,60,66,72},
                           {7,7,14,21,28,35,42,49,56,63,70,77,84},
                           {8,8,16,24,32,40,48,56,64,72,80,88,96},
                           {9,9,18,27,36,45,54,63,72,81,90,99,108},
                           {10,10,20,30,40,50,60,70,80,90,100,110,120},
                           {11,11,22,33,44,55,66,77,88,99,110,121,132},
                           {12,12,24,36,48,60,72,84,96,108,120,132,144}};
    
    
    //Display parallel array
    cout<<"SQUARE VALUES 1-10\n";
    cout<<endl;
    for (int count=0;count<NUMBER;count++){
        cout<<setw(2)<<(count + 1)<<setw(10)<<sqr[count]<<endl;
    }
    cout<<endl<<endl<<endl;
    //Header for 2-dim array
    cout<<"                       MULTIPLICATION TABLE\n";
    cout<<endl;
    cout<<setw(9)<<"1"<<setw(5)<<"2"<<setw(5)<<"3"<<setw(5)<<"4"<<
          setw(5)<<"5"<<setw(5)<<"6"<<setw(5)<<"7"<<setw(5)<<"8"<<
          setw(5)<<"9"<<setw(5)<<"10"<<setw(5)<<"11"<<setw(6)<<"12\n";
    //Call showTBL and display 2-dim table
    showTBL(table,ROWS);
    
    return 0;
}

void showTBL(const int num[][COLS],int row){
    for (int x=0;x<row;x++){
        for(int y=0;y<COLS;y++){
            cout<<setw(4)<<num[x][y]<<" ";
        }
        cout<<endl;
    }
}