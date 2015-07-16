/*  
 * File:   main.cpp 
 * Author: Tiffany Ward
 * Created on July 14, 2015, 5:32 PM
 * Purpose:  Homework 5 Gaddis 9
 */

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
   //Declare variables Here
    int ROF=0;//Rooms On Floor
    int ttlR=0;//total rooms starting
    int ttlF=0;//starting total floors
    int OcROF=0;//occupied rooms on the floor
    int ttlROc=0;//total rooms occupied
    float pctOc=0.0f;// percentage of rooms occupied
    
    
    //Outputs Unknown Here
    cout<<"Enter number of floors: ";
    cin>>ttlF;
    
    //Process Inputs Here
    while (ttlF<1)
    {
        cout<<"Number of floors must be at least 1. Re-enter ";
        cin>>ttlF;
    }
    
    for (int i=1; i<=ttlF; i++)
    {
        if (i !=13)//cannot be 13 because of tradition in hotels
        {
            cout<<"Enter the number of rooms on the floor: "<<endl;
            cin>>ROF;
            while(ROF<10)
            {
                cout<<"Number of rooms should be at least 10. Re-Enter ";
                cin>>ROF;
            }//end of while
            
        }//end of if
       //Ask how many rooms are occupied to calculate the percentage
        cout<<"How many rooms are occupied? : ";
        cin>>OcROF;
        
        ttlR+=ROF;//total rooms Rooms on the floor
        ttlROc+=OcROF;//total rooms occupied Occupant rooms on floor
        
    }//end of for
    //Calculate outputs
    pctOc=(ttlROc/ttlR)*100.0f;//calculating the percentage
    
    cout<< setprecision(2)<<fixed;
    cout<<"The hotel has "<<ttlF<<" floors"<<endl;
    cout<<"The hotel has "<<ttlR<<" rooms."<<endl;
    cout<<"There are "<<ttlROc<<" rooms occupied."<<endl;
    cout<<"There are "<<ttlR-ttlROc<<" empty rooms."<<endl;
    cout<<"Percentage of occupied rooms is "<<pctOc<<endl;
    
    //Exit stage Right!
   
    return 0;
}