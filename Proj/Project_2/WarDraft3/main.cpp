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
using namespace std;//Namespace for iostream

//User Libraries

//Global constants

//Function Prototypes
void header();
void fnlSCR(int, int, string);

//Execution Begins Here!
int main(int argc, char** argv){
    srand((unsigned)time(0));
    
    //Declare Variables Here
    const int NUM_PLYR=2;
    int score[NUM_PLYR];
    int comp=0;//computer card
    int plyr=0;//player card
    int war=1;//add to scores during war
    char ans;//deal next hand?
    string name;//Player enters name
    int count;
    
    //Prompt user to enter name in order to begin game
    header();
    cout<<"Please enter your name: ";
    cin>>name;
    
    //Begin game
    do
    {
        score[0]=26;//computer score
        score[1]=26;//player score
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
                war+=5;//Points to add to scores once WAR has ceased
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
                score[0]+=war;
                score[1]-=war;
                cout<<endl;
                cout<<"You Lose This Round\n";
                //If computer current score>player current score
                if (score[0]>score[1])
                {
                    cout<<"I am currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If players current score>computers current score,
                else if (score[1]>score[0])
                {
                    cout<<"You are currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If score is tied
                else
                {
                    cout<<"We are tied!\n";
                    cout<<"Keep playing!\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If player card beats computer once cards are no longer the same,
                //Increase player score, decrease player score
            }
            else
            {
                score[0]-=war;
                score[1]+=war;
                cout<<endl;
                cout<<"You Win This Round!\n";
                //If computer current score>player current score,
                //Display computers score first
                if (score[0]>score[1])
                {
                    cout<<"I am currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If players current score>computers current score,
                else if (score[1]>score[0])
                {
                    cout<<"You are currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If score is tied
                else
                {
                    cout<<"We are tied!\n";
                    cout<<"Keep playing!\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
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
            score[0]+=1;
            score[1]-=1;
            cout<<"You Lose This Round\n";
            //If computer current score>player current score,
            //Display computers score first
            if (score[0]>score[1])
                {
                    cout<<"I am currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If players current score>computers current score,
                else if (score[1]>score[0])
                {
                    cout<<"You are currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If score is tied
                else
                {
                    cout<<"We are tied!\n";
                    cout<<"Keep playing!\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;
        }
        
        //If computer card < player card
        //Increase player score by 1 and decrease computer score by 1
        else
        {
            score[0]-=1;
            score[1]+=1;
            cout<<"You Win This Round!\n";
            //If computer current score>player current score,
            //Display computers score first
            if (score[0]>score[1])
                {
                    cout<<"I am currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If players current score>computers current score,
                else if (score[1]>score[0])
                {
                    cout<<"You are currently winning.\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
                //If score is tied
                else
                {
                    cout<<"We are tied!\n";
                    cout<<"Keep playing!\n";
                    cout<<"Score:\n";
                    for (count=0;count<NUM_PLYR;count++)
                        cout <<score[count]<<endl;
                }
        }
    }
    while ((ans=='Y')||(ans=='y')&&(score[1]>0)&&(score[0]>0));
    
    //If user does not want to go to the next round,
    //Call score and display final score
    fnlSCR(score[0],score[1],name);  
    
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
    cout<<endl;
    cout<<"FINAL SCORE\n";
    cout<<endl;
    //If player has a higher score,
    //output player score first
    //and output "You Win!!!"
    if (cTotal<pTotal)
    {
        cout<<player<<": "<<pTotal<<endl;
        cout<<"Computer: "<<cTotal<<endl;
        cout<<"YOU WIN!!!\n";
    //If computer has a higher score,
    //output computer score first
    //and output "You Lose :("
    }
    else if (pTotal<cTotal)
    {
        cout<<"Computer: "<<cTotal<<endl;
        cout<<player<<": "<<pTotal<<endl;
        cout<<"YOU LOSE :(\n";
    //If scores are the same,
    //Output "TIE!"
    }
    else
    {
        cout<<"TIE!\n";
        cout<<player<<": "<<pTotal<<endl;
        cout<<"Computer: "<<cTotal<<endl;
    }
}