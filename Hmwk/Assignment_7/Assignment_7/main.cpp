/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 26, 2015, 4:27 PM
 * Purpose:  Menu for Homework 7
 */

//System Libraries
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();

//Function prototypes Problem 1
void introa();//Function for intro
void input();//Function for input
void input(char[]);
void output(char[]);
void hex_sum(char[], char[], char[]);

//Function prototypes for problem 2
void introb();//Explains what the program does
void filarray(char a[], int size, int& number_used);//Array a[] is filled with character data from the keyboard
void delete_repeats(char a[], int& number_used);//Function will remove all repeated characters
//and move the rest of the characters
//foward to fill in the gap.
void output(char a[], int& number_used);//Outputs the contents of the array and outs the new size of the array

//Array for problem 5
int alpha[26]={0};

//Function Prototypes for problem 6
void printgmBoard(char[3][3]);
bool isGmOver(char[3][3]);
bool getTurn(bool &XsTurn, char input, char board[3][3]);

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
            default:;
        };
    }while(inN<8);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    //Declare variables here
    char answer;//answer to addition of hexidecimal numbers

    introa();
    
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #2\n";
    cout<<endl;

    do// Allows user to choose to keep adding
    {
        input();
        cout<<endl<<endl<<"Do you wish to convert another "
                          "hexadecimal number? (y/n) \n";
        cin>>answer;
    } while((answer=='y')||(answer=='Y'));
    //when user is done adding display:
    cout<<endl;
    cout<<"Good-bye! \n";
    cout<<endl;
}
void introa()//Allows user to enter hex numbers and includes a sentinel value
{
    cout<<"Enter a hexadecimal number of 10 or fewer digits \n";
    cout<<"0-9 and A-F (in caps) \n";
    cout<<"Press lower case q to stop the entry \n"<<endl;
}

void input()
{
    char number_1[10]={'0','0','0','0','0', 
                       '0','0','0','0','0'};//array for first hex number
    char number_2[10]={'0','0','0','0','0', 
                       '0','0','0','0','0'};//array for second hex number
    char sum[10]={'0','0','0','0','0','0', 
                  '0','0','0','0'};//aray for function hex_sum
    char temp[10]={'0','0','0','0','0','0', 
                   '0','0','0','0'}; //initializing all the variables

    cout<<"Enter the first hexadecimal number \n";
    input(number_1);
    cout<<endl;
    cout<<"Enter the second hexadecimal number \n";
    input(number_2);
    cout<<endl;

    hex_sum(number_1, number_2, sum);;

    cout<<"The addition of the two hexadecimal numbers is \n";
    output(sum);
}

void input(char number[])
{
    int i=0;
    char c='0';
    char tmp;

    while(c!='q') //Sentinel Value
    {
        cin>>c;
        number[i]=c;
        i++;//counter controlled loop allows sentinel value to end loop
    }

    number[--i]='0';

    for(int k=0;k<i/2;k++)
    {
        tmp=number[k];
        number[k]=number[i-1-k];
        number[i-1-k]=tmp;
    }
}

void output(char number[])
{
    for(int i=9;i>=0;i--)
    {
        cout<<number[i];
    }
}

void hex_sum(char number_1[], char number_2[], char sum[])
{
    int x;
    int y;
    int s;
    int carry=0;
    int next_carry=0;

    for(int i=0;i<10;i++)
    {
        if(('0'<=number_1[i])&&(number_1[i]<'0'+10))
            x=number_1[i]-'0';
        else
            x=number_1[i]-'A'+10;
        if(('0'<=number_2[i])&&(number_2[i]<'0'+10))
            y=number_2[i]-'0';
        else
            y=number_2[i]-'A'+10;
        
        carry=next_carry;

        s=(x+y+carry)%16;
        next_carry=(x+y+carry)/16; //converts the number back to hex

        if((0<=s)&&(s<10))
            sum[i]=char('0'+s);
        else if((10<=s)&&(s<16))
            sum[i]=char('A'+s-10);
        else
            cout<<"Invalid input \n";
    }

    if((1==carry)&&(1==next_carry))// informs user if more then 10 digits
        cout <<"Overflow! \a \n";
}
//End of problem 1


//Solution to problem 2
void problem2(){
    //declare variables here
    char array[100];
    int number_used;
    
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #3\n";
    cout<<endl;
    
    introb();
    
    filarray(array, 100, number_used);
    output(array, number_used);
}
void introb()
{
    using namespace std;// Standard Namespace
    //Output instructions of program
    cout<<"This program will will ask the user to type in a sentence\n";
    cout<<"and then will delete all repeated characters of the sentence.\n";
    cout<<"The program will then output the new sentence with all repeated\n";
    cout<<"letters deleted\n";
}

//uses iostream
void filarray(char a[], int size, int& numused)
{
    using namespace std;
    char c;
    int index=0;
    
    //Prompts User for input
    cout<<endl;
    cout<<"Please type in a sentence and then press enter.\n";
    cout<<"enter 'n' when you wish to end program.\n";
    cin.get(c);

    while ((c!='\n')&&(index<size))
    {
        a[index]=c;
        cin.get(c);
        index++;
    }
    numused=index;
    //Loop to keep track of repeating characters
    for (int i=0;i<numused;i++)
    {
        for (int j=i+1;j<numused;j++)
        {
            if (a[i]==a[j])
            {
                numused=numused-1;
                for (int k=j;k<numused;k++)
                a[k]=a[k+1];
                a[numused]='\0';
                --j;
            }
        }
    }
}

//uses iostream
void output(char a[], int& number_used)
{
    using namespace std;
    cout<<endl;
    cout<<"The new sentence without the repeated letters is:\n";
    for (int i=0;i<number_used;i++)
    {
        cout<<a[i];
    }
    cout<<"\nThe size of the new array is ";
    cout<<number_used;
    cout<<endl;

    cin.ignore();
    cin.get();
}
//End of problem 2

//Solution to problem 3
void problem3(){
    //Declare variables here
    string input="-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";
    stringstream ss(input);
    const int SPACING=3;
    const size_t SIZE=50;
    int myArray[SIZE]={0};
    int count=-1;
    
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #5\n";
    cout<<endl;

    //fills the array with integers
    while (ss>>myArray[++count]);//NULL statement

    //create pointers to the beginning and end of the array
    int *beg=myArray;
    int *end=myArray+count;


    //Sorts the array
    sort(beg, end, greater<int>());

    int current=myArray[0];
    count=1;
    //Outputs the header
    cout<<"  N"<<"  "<<"count"<<endl;
    
    //counts the number of each value in the array
    while (++beg!=end)
    {
        if (current!=*beg)
        {
            cout<<setw(SPACING)<<current<<setw(SPACING)<<count<<endl;
            current=*beg;
            count=0;
        }
        ++count;
    }
    //outputs the final value
    cout<<setw(SPACING)<<current<<setw(SPACING)<<count<<endl;
    cout<<endl;
    
    cin.ignore();
}
//End of problem 3

//Solution to problem 4
void problem4(){
    char A[22], B[22], *LP, *SP, *Sum;
    
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #7\n";
    cout<<endl;
    
    puts("Enter the first number");
    fgets(A, sizeof A, stdin);//similar to cin.getline
    puts("Enter the second number");
    fgets(B, sizeof B, stdin);
    LP=strlen(A)>strlen(B)?(A):(B);//point to larger container
    SP=LP==(A)?(B):(A);//point to smaller container
    int LA(strlen(LP)), SA(strlen(SP)), rem(0);
    
    for (int t(LA-2), v(SA-2); v>=0; --t, --v )
    {
        LP[t] = (( rem = ( rem + ( LP[t] - '0' ) + (SP[v] - '0') ) )%10) + '0';
        rem /= 10;		
    }

    Sum=(char*) malloc(LA);
    cout<<"The sum of the two numbers are:";
    if ((SA=rem>0) and LA>20)
        puts("Overflow!");
    else
    {
        Sum[0]=(rem+'0');
        memcpy(Sum+SA,LP,LA-SA);
        printf("%s",Sum);
    }
    free (Sum);
    cout<<endl;
}
//End of Problem 4


//Solution to problem 5
void problem5(){
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #8\n";
    cout<<endl;
    
    const string strSample = "Our Deepest Fear is not that we are "
                             "inadequate, it is that we are powerful "
                             "beyond measure, it is our light not "
                             "our darkness that most scares us.";
    for (int i=0;i<strSample.length();i++)
    {
        int a=strSample[i];
        if ((a>='a')&&(a<='z')) alpha[a-'a']++;
        else if ((a>='A')&&(a<='Z')) alpha[a-'A']++;
    }
    cout<<"Letter Frequency"<<endl;
    cout<<"------ ---------"<< endl;

    for (int i=0;i<26;i++)
    {
        if (alpha[i])
        {
            cout<<right<<setw(4)<<char('A'+i)<<setw(7)
                    <<right<<alpha[i]<<endl;
        }
    }
}
//End of problem 5

//Solution to problem 6
void problem6(){
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #10\n";
    cout<<endl;
    // outputs game board
    char gmboard[3][3]=
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    bool XsTurn=true;
    cout<<"Tic-Tac-Toe"<<endl;

    do
    {
        cout << "\nIt's now " << (XsTurn ? "X" : "O") << "'s turn.\n";
        printgmBoard(gmboard);
        do
        {
            char input;
            cout << "Enter an empty square number to place your mark: ";
            cin >> input;
            if (getTurn( XsTurn, input, gmboard ))
            {
                break;
            }
        } while (true);
    } while (!isGmOver( gmboard ));
}
void printgmBoard( char gmboard[3][3] )
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            cout << gmboard[row][col] << (col == 2 ? "\n" : " ");
    return;
}

bool isGmOver(char gmboard[3][3])
{
    for (int row=0;row<3;row++)
        if ((gmboard[row][0]==gmboard[row][1])&&
                (gmboard[row][1]==gmboard[row][2]))
        { // check rows
            cout<<gmboard[row][0]<<" wins.\n";
            cout<<endl;
            return true;
        }
    for (int col=0;col<3;col++)
        if ((gmboard[0][col]==gmboard[1][col])&& 
                (gmboard[1][col]==gmboard[2][col]))
        { // check columns
            cout<<gmboard[0][col]<<" wins.\n";
            cout<<endl;
            return true;
        }
    if ((gmboard[0][0]==gmboard[1][1])&& 
            (gmboard[1][1]==gmboard[2][2]))
    { // check \ diagonal
        cout<<gmboard[1][1]<<" wins.\n";
        cout<<endl;
        return true;
    }
    if ((gmboard[2][0]==gmboard[1][1])&& 
            (gmboard[1][1]==gmboard[2][0]))
    { // check / diagonal
        cout<<gmboard[1][1]<<" wins.\n";
        cout<<endl;
        return true;
    }
    int unfilled=0;
    for (int row=0;row<3;row++)
        for (int col=0;col<3;col++)
            if (gmboard[row][col]>='1'&&gmboard[row][col]<='9')
                unfilled++; // count unfilled squares
    if (unfilled==0)
    {
        cout<<"No more unfilled squares. Draw game.\n";
        return true;
    }
    return false;
}
bool getTurn(bool &XsTurn, char input, char gmboard[3][3])
{
    if ((input<'1')||(input>'9'))
    {
        cout<<"Please enter a digit from 1 to 9."<<endl;
        return false;
    }
    int intInput=input-'1';
    int row=(intInput/3);
    int col=intInput % 3;
    
    if ((gmboard[row][col]=='X')||(gmboard[row][col]=='O'))
    {
        cout<<"Square "<<input<<" is already filled."<<endl;
        return false;
    }
    gmboard[row][col]=(XsTurn?'X':'O');
    XsTurn=!XsTurn;
    return true;
}
//End of problem 6

//Solution to problem 7
void problem7(){
    cout<<"SAVITCH 9TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING PROJECTS #11\n";
    cout<<endl;
    
    char Seat=' ';
    string Airline[7]={"1ABCD", "2ABCD", "3ABCD", 
                       "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
    char Again=' ';
    int Row=0;
  
    Again='y';
  
    while(Again=='y')
    {
        cout<<"Enter a row (1-7): ";
        cin>>Row;
        cout<<"Enter a seat in Caps (A-D): ";
        cin>>Seat;
        cout<<endl;
        
        int idx=1+Seat-'A';
        if(Airline[Row-1][idx]=='X')
        { //checks if seat is taken or not
            cout<<"Seat is taken."<<endl;
            cout<<endl;
            continue;
        }
        else
        {
            Airline[Row-1][idx]='X';
        }
        cout<<"Enter another seat? (y/n): ";//ask user if wants to continue
        cin>>Again;
        cout<<endl;

       for(int i=0;i<7;++i)
       {
            cout<<Airline[i]<<endl;
       }
        cout<<endl;
    } //end while
    cout<<"Bye!"<< endl;
    cout<<endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}