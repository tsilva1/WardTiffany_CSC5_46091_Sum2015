/*
* File: main.cpp
* Author: Tiffany Ward
* Created on July 18, 2015, 8:03 PM
* Purpose: Project - WAR!
*/

//System Libraries
#include <iostream>//I/O Library
#include <iomanip>//IO Manipulators
#include <cstdlib>//C standard library
#include <ctime>//C Time library
#include <string>//string library
#include <cctype>
#include <fstream>
using namespace std;//Namespace for iostream

//User Libraries

//Global constants

//Function Prototypes
void header();
void fnlSCR(int, int, string);
int srchUSR(string, char);
int const SIZE=20;

//Execution Begins Here!
int main(int argc, char** argv){
    srand((unsigned)time(0));
    
    //Declare Variables Here
    int comp=0;//computer card
    int plyr=0;//player card
    int compTTL=26;//computer score
    int plyrTTL=26;//player score
    int war=1;//add to scores during war
    char ans;//deal next hand?
    char name[SIZE];//Player enters name
    
    //Prompt user to enter name in order to begin game
    header();
    cout<<"Please enter your unique user name (up to 20 characters,"
            " including spaces):\n";
    cin.getline(name,SIZE);
    
    ifstream inputFile;
    string nmsINfl;
    inputFile.open("users.txt");
    int a=0;
    string line="";
    while(a<1) // To get you all the lines.
    {
        getline(inputFile,nmsINfl); // Saves the line in STRING.
        if (nmsINfl != line)
        {
            line=nmsINfl;
        }
    }
    inputFile.close();
    
    ofstream outputFile;
    outputFile.open("users.txt");
    outputFile<<name;
    outputFile.close();
    
    //Begin game
    do
    {
        comp=rand()%13+2;//Determines what card computer plays
        plyr=rand()%13+2;//Determines what card player plays
        
        //Output cards played
        cout<<endl;
        cout<<"Computer:\n";
        //If 11-14, display name of face card instead of number
        switch(comp)
        {
            case 11:cout<<"Jack\n";
            break;
            case 12:cout<<"Queen\n";
            break;
            case 13:cout<<"King\n";
            break;
            case 14:cout<<"Ace\n";
            break;
            default: cout<<comp<<endl;
        }
        cout<<endl;
        cout<<name<<":\n";
        //If 11-14, display name of face card instead of number
        switch(plyr)
        {
            case 11:cout<<"Jack\n";
            break;
            case 12:cout<<"Queen\n";
            break;
            case 13:cout<<"King\n";
            break;
            case 14:cout<<"Ace\n";
            break;
            default: cout<<plyr<<endl;
        }
        cout<<endl;
        
        //Declare WAR! if computer and player card is the same
        if (comp==plyr)
        {
            cout<<"WAR!!!\n";
            //Continue to play WAR until cards are no longer the same
            do{
                war+=6;//Points to add to scores once WAR has ceased
                comp=rand()%13+2;//Computer plays new card
                plyr=rand()%13+2;//Player plays new card
                cout<<endl;
                cout<<"Computer:\n";
                //If 11-14, display name of face card instead of number
                switch(comp)
                {
                    case 11:cout<<"Jack\n";
                    break;
                    case 12:cout<<"Queen\n";
                    break;
                    case 13:cout<<"King\n";
                    break;
                    case 14:cout<<"Ace\n";
                    break;
                    default: cout<<comp<<endl;
                }
                cout<<endl;
                cout<<name<<":\n";
                //If 11-14, display name of face card instead of number
                switch(plyr)
                {
                    case 11:cout<<"Jack\n";
                    break;
                    case 12:cout<<"Queen\n";
                    break;
                    case 13:cout<<"King\n";
                    break;
                    case 14:cout<<"Ace\n";
                    break;
                    default: cout<<plyr<<endl;
                }
            }
            while (comp==plyr);
            //If computer card beats player once cards are no longer the same,
            //Increase computer score, decrease player score
            if (comp>plyr)
            {
                compTTL+=war;
                plyrTTL-=war;
                cout<<endl;
                cout<<"You Lose This Round\n";
                //If computer current score>player current score,
                //Display computers score first
                if (compTTL>plyrTTL)
                {
                    cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                    cout<<endl;
                //If players current score>computers current score,
                //Display players score first
                }
                else
                {
                    cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                    cout<<endl;
                }
                //If player card beats computer once cards are no longer the same,
                //Increase player score, decrease player score
            }
            else
            {
                compTTL-=war;
                plyrTTL+=war;
                cout<<endl;
                cout<<"You Win This Round!\n";
                //If computer current score>player current score,
                //Display computers score first
                if (compTTL>plyrTTL)
                {
                    cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                //If players current score>computers current score,
                //Display players score first
                }
                else
                {
                    cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                }
                    cout<<endl;
            }
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;
            
        //If computer card>player card
        //Increase computer score by 1 and decrease player score by 1
        }else if (comp>plyr)
        {
            compTTL+=1;
            plyrTTL-=1;
            cout<<"You Lose This Round\n";
            //If computer current score>player current score,
            //Display computers score first
            if (compTTL>plyrTTL)
            {
                cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                cout<<endl;
            //If players current score>computers current score,
            //Display players score first
            }
            else
            {
                cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                cout<<endl;
            }
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;
        }
        
        //If computer card < player card
        //Increase player score by 1 and decrease computer score by 1
        else
        {
            compTTL-=1;
            plyrTTL+=1;
            cout<<"You Win This Round!\n";
            //If computer current score>player current score,
            //Display computers score first
            if (compTTL>plyrTTL)
            {
                cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                cout<<endl;
            //If players current score>computers current score,
            //Display players score first
            }
            else
            {
                cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                cout<<endl;
            }
            
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;
        }
    }
    while ((ans=='Y')||(ans=='y')&&(plyrTTL>0)&&(compTTL>0));
    
    //If user does not want to go to the next round,
    //Call score and display final score
    fnlSCR(compTTL,plyrTTL,name);  
    
    //END OF GAME
    return 0;
}

void header()
{
    cout<<"Let's play WAR!\n";
    cout<<"You and the computer will begin with 26 cards each.\n";
    cout<<"Whoever obtains all 52 cards first, wins! (aka, a score of 52)\n";
    cout<<"Good Luck!\n";
    cout<<endl;
}
void fnlSCR(int cTotal, int pTotal, string player)
{
    int *scores=nullptr;
    int players=2;
    int i;
    
    scores=new int[players];
    scores[0]=cTotal;
    scores[1]=pTotal;
    
    cout<<endl;
    cout<<"FINAL SCORE\n";
    //If player has a higher score,
    //output "You Win!!!"
    if (cTotal<pTotal)
    {
        for (i=0;i<players;i++)
        {
            cout<<scores[i]<<endl;
        }
        cout<<endl;
        cout<<"YOU WIN!!!\n";
        
    //If computer has a higher score,
    //output "You Lose :("
    }
    else if (pTotal<cTotal)
    {
        for (i=0;i<players;i++)
        {
            cout<<scores[i]<<endl;
        }
        cout<<endl;
        cout<<"YOU LOSE :(\n";
    //If scores are the same,
    //Output "TIE!"
    }
    else
    {
        for (i=0;i<players;i++)
        {
            cout<<scores[i]<<endl;
        }
        cout<<endl;
        cout<<"TIE!\n";
    }
    delete [] scores;
    scores = nullptr; // Make sales a null pointer.
}