#include <iostream>//I/O
#include <iomanip>
#include <cstdlib> //Random 
#include <ctime>   //Time
using namespace std;
int main(int argc, char** argv){
	srand((unsigned)time(0));
	cout<<"Black Jack!\n";
        cout<<"Let's Play!\n";
        cout<<endl;
	int houseA=rand()%13+1;
	int houseB=rand()%13+1;
	int plyrA=rand()%13+1;
	int plyrB=rand()%13+1;
        cout<<"House Cards\n";
        switch(houseA){
            case 1:cout<<"Ace | ";
            break;
            case 11:cout<<"Jack | ";
            break;
            case 12:cout<<"Queen | ";
            break;
            case 13:cout<<"King | ";
            break;
            default:cout<<houseA<<" | ";
        }
        switch(houseB){
            case 1:cout<<"Ace";
            break;
            case 11:cout<<"Jack";
            break;
            case 12:cout<<"Queen";
            break;
            case 13:cout<<"King";
            break;
            default:cout<<houseB;
        }
	cout<<endl;
        cout<<endl;
        cout<<"Your Hand\n";
        switch(plyrA){
            case 1:cout<<"Ace | ";
            break;
            case 11:cout<<"Jack | ";
            break;
            case 12:cout<<"Queen | ";
            break;
            case 13:cout<<"King | ";
            break;
            default: cout<<plyrA<<" | ";
        }
        switch(plyrB){
            case 1:cout<<"Ace";
            break;
            case 11:cout<<"Jack";
            break;
            case 12:cout<<"Queen";
            break;
            case 13:cout<<"King";
            break;
            default: cout<<plyrB;
        }
	cout<<endl;
	int houseTTL=houseA+houseB;
	int plyrTTL=plyrA+plyrB;
        cout<<endl;
        cout<<houseTTL<<endl;
        cout<<plyrTTL<<endl;
	if ((plyrA==1)&&(plyrA==10||
                plyrA==11||plyrA==12||plyrA==13)){
		cout<<"Blackjack!"<<endl;
                }else if ((plyrB==1)&&(plyrB==10||
                plyrB==11||plyrB==12||plyrB==13)){
			cout << "Blackjack!"<<endl;
                }else if (plyrTTL>houseTTL){
                    cout << "\n" << "You Win!"<<endl;
                }else{
                    cout << "\n" << "You lose" << endl;
                }
        return 0;
}