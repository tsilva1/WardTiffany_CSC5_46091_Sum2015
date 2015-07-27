#include <iostream>//I/O
#include <iomanip>
#include <cstdlib> //Random 
#include <ctime>   //Time
#include <string>
using namespace std;
int main(int argc, char** argv){
	srand((unsigned)time(0));
	int comp=2;
	int plyr=2;
        int compTTL=0;
        int plyrTTL=0;
        string name;
        name="Tiffany";
        cout<<"Let's Play WAR\n";
        //cout<<"Please enter your name: ";
        //cin>>name;
        while((plyrTTL<=53)&&(compTTL<=53)){
            cout<<endl;
        cout<<"Computer:\n";
        switch(comp=rand()%14+1){
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
        switch(plyr=rand()%14+1){
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
        if (plyr>comp){
            cout<<endl;
            cout<<"You Win This Round!\n";
            plyrTTL+=2;
        }else if (plyr<comp){
            cout<<endl;
            cout<<"You Lose This Round!\n";
            compTTL+=2;
        }else{
            cout<<endl;
            cout<<"WAR!\n";
            switch(comp=rand()%14+1){
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
        switch(plyr=rand()%14+1){
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
        if (plyr>comp){
            cout<<endl;
            cout<<"You Win This Round!\n";
            plyrTTL+=2;
        }else if (plyr<comp){
            cout<<endl;
            cout<<"You Lose This Round!\n";
            compTTL+=2;
        }
        }
        }
        cout<<name<<" = "<<plyrTTL<<endl;
        cout<<"Computer = "<<compTTL<<endl;
        return 0;
}