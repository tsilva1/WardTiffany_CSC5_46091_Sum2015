/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July 18, 2015, 8:03 PM
 * Purpose:  Project - WAR!
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
    string name;//Player enters name
    //Prompt user to enter name in order to begin game
    cout<<"Let's Play WAR\n";
    cout<<"Please enter your name: ";
    cin>>name;
    //Begin game
    do{
        comp=rand()%13+2;//Determines what card computer plays
        plyr=rand()%13+2;//Determines what card player plays
        //Output cards played
        cout<<endl;
        cout<<"Computer:\n";
        //If 11-14, display name of face card instead of number
        switch(comp){
            case 11:cout<<"Jack\n";
            break;
            case 12:cout<<"Queen\n";
            break;
            case 13:cout<<"King\n";
            break;
            case 14:cout<<"Ace\n";
            break;
            default: cout<<comp<<endl;}
        cout<<endl;
        cout<<name<<":\n";
        //If 11-14, display name of face card instead of number
        switch(plyr){
            case 11:cout<<"Jack\n";
            break;
            case 12:cout<<"Queen\n";
            break;
            case 13:cout<<"King\n";
            break;
            case 14:cout<<"Ace\n";
            break;
            default: cout<<plyr<<endl;}
        cout<<endl;
        //Declare WAR! if computer and player card is the same
        if (comp==plyr){
            cout<<"WAR!!!\n";
            //Continue to play WAR until cards are no longer the same
            do{
                war+=5;//Points to add to scores once WAR has ceased
                comp=rand()%13+2;//Computer plays new card
                plyr=rand()%13+2;//Player plays new card
                cout<<endl;
                cout<<"Computer:\n";
                //If 11-14, display name of face card instead of number
                switch(comp){
                    case 11:cout<<"Jack\n";
                    break;
                    case 12:cout<<"Queen\n";
                    break;
                    case 13:cout<<"King\n";
                    break;
                    case 14:cout<<"Ace\n";
                    break;
                    default: cout<<comp<<endl;}
                cout<<endl;
                cout<<name<<":\n";
                //If 11-14, display name of face card instead of number
                switch(plyr){
                    case 11:cout<<"Jack\n";
                    break;
                    case 12:cout<<"Queen\n";
                    break;
                    case 13:cout<<"King\n";
                    break;
                    case 14:cout<<"Ace\n";
                    break;
                    default: cout<<plyr<<endl;}
            }while (comp==plyr);
            //If computer card beats player once cards are no longer the same,
            //Increase computer score, decrease player score
            if (comp>plyr){
                compTTL+=war;
                plyrTTL-=war;
                cout<<endl;
                cout<<"You Lose This Round\n";
                //If computer current score>player current score,
                //Display computers score first
                if (compTTL>plyrTTL){
                    cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                    cout<<endl;
                //If players current score>computers current score,
                //Display players score first
                }else{
                    cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                    cout<<endl;}
            //If player card beats computer once cards are no longer the same,
            //Increase player score, decrease player score
            }else{
                compTTL-=war;
                plyrTTL+=war;
                cout<<endl;
                cout<<"You Win This Round!\n";
                //If computer current score>player current score,
                //Display computers score first
                if (compTTL>plyrTTL){
                    cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                //If players current score>computers current score,
                //Display players score first
                }else{
                    cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;}
                cout<<endl;}
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;
        //If computer card>player card
        //Increase computer score by 1 and decrease player score by 1
        }else if (comp>plyr){
            compTTL+=1;
            plyrTTL-=1;
            cout<<"You Lose This Round\n";
            //If computer current score>player current score,
            //Display computers score first
            if (compTTL>plyrTTL){
                cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                cout<<endl;
            //If players current score>computers current score,
            //Display players score first
            }else{
                cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                cout<<endl;}
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;
        //If computer card<player card
        //Increase player score by 1 and decrease computer score by 1
        }else{
            compTTL-=1;
            plyrTTL+=1;
            cout<<"You Win This Round!\n";
            //If computer current score>player current score,
            //Display computers score first
            if (compTTL>plyrTTL){
                cout<<"Computer: "<<compTTL<<" ... "<<name<<": "<<plyrTTL<<endl;
                cout<<endl;
            //If players current score>computers current score,
            //Display players score first
            }else{
                cout<<name<<": "<<plyrTTL<<" ... "<<"Computer: "<<compTTL<<endl;
                cout<<endl;}
            //Ask user if they would like to go to the next round
            cout<<"Next Round (y/n)?: ";
            cin>>ans;}
    }while ((ans=='Y')||(ans=='y'));
    //If user does not want to go to the next round,
    //display final score
    cout<<endl;
    cout<<"FINAL SCORE\n";
    cout<<endl;
    //If player has a higher score,
    //output player score first
    //and output "You Win!!!"
    if (compTTL<plyrTTL){
        cout<<name<<": "<<plyrTTL<<endl;
        cout<<"Computer: "<<compTTL<<endl;
        cout<<"YOU WIN!!!\n";
    //If computer has a higher score,
    //output computer score first
    //and output "You Lose :("
    }else if (plyrTTL<compTTL){
        cout<<"Computer: "<<compTTL<<endl;
        cout<<name<<": "<<plyrTTL<<endl;
        cout<<"YOU LOSE :(\n";
    //If scores are the same,
    //Output "TIE!"
    }else{
        cout<<"TIE!\n";
        cout<<name<<": "<<plyrTTL<<endl;
        cout<<"Computer: "<<compTTL<<endl;
    }
    //END OF GAME
    return 0;
}