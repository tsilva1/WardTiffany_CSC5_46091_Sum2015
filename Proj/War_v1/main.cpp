#include <iostream>//I/O
#include <iomanip>
#include <cstdlib> //Random 
#include <ctime>   //Time
#include <string>
using namespace std;
int main(int argc, char** argv){
	srand((unsigned)time(0));
	int comp=rand()%13+1;
	int plyr=rand()%13+1;
        int compTTL=0;
        int plyrTTL=0;
        string name;
        cout<<"Let's Play WAR\n";
        cout<<"Please enter your name: ";
        cin>>name;
        cout<<endl;
        cout<<"Computer:\n";
        switch(comp){
            case 1:cout<<"Ace";
            break;
            case 11:cout<<"Jack";
            break;
            case 12:cout<<"Queen";
            break;
            case 13:cout<<"King";
            break;
            default:cout<<comp;
        }
	cout<<endl;
        cout<<endl;
        cout<<name<<":\n";
        switch(plyr){
            case 1:cout<<"Ace\n";
            break;
            case 11:cout<<"Jack\n";
            break;
            case 12:cout<<"Queen\n";
            break;
            case 13:cout<<"King\n";
            break;
            default: cout<<plyr<<endl;
        }
        if (plyr>comp){
            cout<<endl;
            cout<<"You Win This Round!\n";
            plyrTTL+=2;
        }else (plyr<comp);{
            cout<<endl;
            cout<<"You Lose This Round!\n";
            compTTL+=2;
        }
        return 0;
}