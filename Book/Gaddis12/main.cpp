#include <iostream>
using namespace std;

const int NAMES = 5;          //how many occurances
const int NAMESIZE = 20;          //how long names can be, 10 letters
const int TESTS = 4;          //how many tests
char name[NAMES][NAMESIZE];   //two-dimensional name array
char ltrGRD[5];            //grade letter for each student array
float tstscre[NAMES][TESTS];          //test score for each student
float average[5];        //average for each student array

//function prototype
void calcGrd(int, float[][TESTS]);

//start of main
int main()
{
    cout<<"Enter the student's name.\n";
    for (int count=0;count<NAMES;count++)
    {
        cout<<"Student "<<(count +1)<<": ";
        cin>>name[count];
    }
    for (int student=0;student<NAMES;student++)
    {
        cout<<"What is the test score for "<<name[student];
            cout<<" for \n";
        for (int testNum=0;testNum<TESTS;testNum++)
        {
            cout<<"Test "<<testNum+1<<": ";
            cin>>tstscre[student][testNum];
            while ((tstscre[student][testNum]<0)||(tstscre[student][testNum]>100))
            {
                cout<<"ERROR: Grades must be between 0% and 100%."<<endl;
                cin>>tstscre[student][testNum];
                cout<<endl;
            }
        }
        cout<<endl;
    }
    
    //call to function calcGrd
    calcGrd(NAMES,tstscre);
    
    return 0;
} //end of main

//************************************************
//function definition of calcGrd
// this function is going to get the test scores
// array and calculate the averages
// and calculate grade
//i need to pass the student names to correspond
// with the test scores, avgs, and grade
//************************************************
void calcGrd(int NAMES,float tstscre[][TESTS])
{
    float total;
    //get each students average score
    for (int row=0;row<NAMES;row++)
    {
        //set the accumulator.
        total=0;
        //sum a row
        for (int col=0;col<TESTS;col++)
            total+=tstscre[row][col];
        //get the average
        average[row]=total/TESTS;
        //get the grade
        if ((average[row]>=90)&&(average[row]<=100))
            ltrGRD[row]='A';
        else if (average[row]>=80)
            ltrGRD[row]='B';
        else if (average[row]>=70)
            ltrGRD[row]='C';
        else if (average[row]>=60)
            ltrGRD[row]='D';
        else
            ltrGRD[row]='F';
    }
    for (int i=0;i<5;i++)
    {
        cout<<name[i]<<"'s average: " <<average[i]<<"%. ";
        cout<<"Letter grade = "<<ltrGRD[i]<< endl;
    }
} //end of getdata