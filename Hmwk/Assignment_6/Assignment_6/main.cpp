/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on June 25, 2015, 12:27 AM
 * Purpose:  Menu for Homework 6
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>//C standard library 
#include <ctime>//C Time library
#include <cmath>
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

//Function Prototypes for problem 3
int total(int[],int);
int hghSLE(int[],int);
int lowSLE(int[],int);

//Function Prototypes for problem 6
void filAray(char [],int);
void prntAry(const char [],int,int);
int grade(char [],char [],char [],int);

//Problem 7 constants and arrays
const int NAMES = 5;//Number of students
const int NAMESIZE = 20;//Length of name
const int TESTS = 4;//Number  many tests
char name[NAMES][NAMESIZE];//two-dimensional name array
char ltrGRD[5];//grade letter for each student array
float tstscre[NAMES][TESTS];//test score for each student
float average[5];//average for each student array

//Function prototypes for problem 7
void calcGrd(int, float[][TESTS]);

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
    const int ARRAY=10;//set array
    int numb[ARRAY];//numbers to be entered into array
    int count;//counter
    int min;//minimum number
    int max;//max number
    
    cout<<"GADDIS 8TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING CHALLENGES #1\n";
    cout<<endl;
    //Prompt user to enter 10 numbers
    for (count=0;count<ARRAY;count++)
    {
        cout<<"Please enter a number: ";
        cin>>numb[count];
    }
    //Find min and max number entered
    min=numb[0];
    max=numb[0];
    for (count=0;count<ARRAY;count++)
    {
        if(min>numb[count])
        {
                min=numb[count];
        }
        else if(max<numb[count])
        {
                max = numb[count];
        }
    }
    //Output min and max number entered
    cout<<endl;
    cout<<"The maximum number you entered is: "<< max << endl;
    cout<<"The minimum number you entered is: "<< min << endl;
    cout<<endl;
}
//End of problem 1

//Solution to problem 2
void problem2(){
    const int ARRAY=12;//set array
    int inch[ARRAY];//inches per month
    int count;//set count for 'for' loops
    int min;//min rain month (inches)
    int max;//max rain month (inches)
    float ttlSUM=0;//total sum (inches)
    float average=0;//average rain fall (inches)
    string lowMNTH;//convert low month to name
    string hghMNTH="January";//convert high month to name
    //name of months for lowMNTH and hghMNTH conversions
    string month[] = {"January","Febuary","March","April",
                           "May","June","July","August","September",
                           "October","November","December"};

    //Prompt user to enter inches of rain per month
    cout<<"GADDIS 8TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING CHALLENGES #2\n";
    cout<<endl;
    for (count=0;count<ARRAY;count++)
    {
        cout<<"Please enter rainfall (in inches) for month "<<(count+1)<<": ";
        cin>>inch[count];
    }
    //calculate total sum of rain for entire year
    for (count=0;count<ARRAY;count++)
    {
        ttlSUM+=inch[count];
    }
    //Output total sum of rain for entire year
    cout<<endl;
    cout<<"The total rainfall for the year is "<<ttlSUM<<" in.\n";
    //calculate average rain fall
    average=ttlSUM/ARRAY;
    //output average rain fall
    cout<<"The average rainfall for the year is "<<average<<" in.\n";
    //calculate month with max rain fall
    max = inch[0];
    for (count=0;count<ARRAY;count++)
    {
	if (inch[count] >= max)
        {
            max = inch[count];
            hghMNTH = month[count];
	}
    }
    //calculate month with min rain fall
    min = inch[0];
    for (count=0;count<ARRAY;count++) 
    {
        if (inch[count] <= min)
        {
            min = inch[count];
            lowMNTH = month[count];
        }
    }
    //Ouput month(s) with highest rain fall.
    cout<<"The month(s) with the most rainfall is/are ";
    for (count=0;count<ARRAY;count++)
        if (inch[count] == max)
            cout<<month[count]<<", with a rainfall of: "<< max <<" in." << endl;
    //Ouput month(s) with lowest rain fall.
    cout<<"The month(s) with the least rainfall is/are ";
    for (count=0;count<ARRAY;count++)
        if (inch[count] == min)
        {
            cout<<month[count]<<", with a rainfall of: "<< min <<" in." << endl;
        }
    cout<<endl;
}
//End of problem 2

//Solution to problem 3
void problem3(){
    const int ARRAY=5;//set array size
    int sales[ARRAY];//sales of salsa
    string salsa[ARRAY] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};//names of salsa
    int ttlSOLD;//total sold
    int hiSALE;//high selling salsa
    int loSALES;//low selling salsa
    int count;//counter
    
    cout<<"GADDIS 8TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING CHALLENGES #3\n";
    cout<<endl;
    //Prompt user to enter salsa sales
    for (count=0;count<ARRAY;count++)
    {
        cout<<"Jars sold last month of "<<salsa[count]<<": ";
        cin>>sales[count];
    }
    
    // Call functions to get total sales and high and low selling products
    ttlSOLD=total(sales,ARRAY);
    loSALES=hghSLE(sales,ARRAY);
    hiSALE=lowSLE(sales,ARRAY);
    
    //Ouput sales report
    cout<<endl;
    cout<<"     Salsa Sales Report \n\n";
    cout<<"Name              Jars Sold \n";
    cout<<"____________________________\n";
    cout<<salsa[0]<< "                  "<<sales[0]<<endl;
    cout<<salsa[1]<< "                "<<sales[1]<<endl;
    cout<<salsa[2]<< "                 "<<sales[2]<<endl;
    cout<<salsa[3]<< "                   "<<sales[3]<<endl;
    cout<<salsa[4]<< "                 "<<sales[4]<<endl;
    
    // insert the code that prints the salsa names and number jars sold
    cout<<endl;
    cout<<"High Seller: "<<salsa[hiSALE]<<endl;
    cout<<"Low Seller : "<<salsa[loSALES]<<endl;
    cout<<endl;
}
/************************************************************
 *                            total                         *
 * Calculates and returns the total of the values stored in *
 * the array passed to the function.                        *
 ************************************************************/
int total (int array[],int numb)
{
    int total=0;
    for (int count=0;count<numb;count++)
        total+=array[count];
    return total;
}
/************************************************************
 *                          lowSLE                          *
 * Finds and returns the subscript of the array position    *
 * holding the largest value in the array passed to the     *
 * function.                                                *
 ************************************************************/
int lowSLE(int array[],int numb)
{
    int largest=0;
    for (int pos=1;pos<numb;pos++)
    {
        if (array[pos]>array[largest])
            largest=pos;
    }
    return largest;
}
/************************************************************
 *                           hghSLE                         *
 * Finds and returns the subscript of the array position    *
 * holding the smallest value in the array passed to the    *
 * function.                                                *
 ************************************************************/
int hghSLE(int array[],int numb)
{
    int smllst=0;
    for (int pos=1;pos<numb;pos++)
    {
        if (array[pos]<array[smllst])
            smllst=pos;
    }
    return smllst;
}
//end of problem 3

//Solution to problem 4
void problem4(){
    int monkeyEat[3][7];//set array
    int sum=0;//sum of food eaten total
    int sumOf[3]={0,0,0};//sum of food eaten per monkey
    float avg;//average food eaten
    float avgOf1;//average of monkey 1
    float avgOf2;//average of monkey 2
    float avgOf3;//average of monkey 3

    //get data
    cout<<"GADDIS 8TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING CHALLENGES #5\n";
    cout<<endl;
    //Prompt user to enter food eaten for 7 days per 3 monkeys
    for(int i=0;i<=2;i++)
    {
        for(int x=0;x<=6;x++)
        {
            cout<<"Enter the amount of food eaten by monkey "<<i+1;
            cout<<" on day "<<x+1<<" : ";
            cin>>monkeyEat[i][x];

            while (monkeyEat[i][x]<0)
            {
                cout<<"\nNot accept negative values. Reenter: ";
                cin>>monkeyEat[i][x];
            }
            sum+=monkeyEat[i][x];
            sumOf[i]+=monkeyEat[i][x];
        }
    }
    //calculate averages
    avg=sum/7;
    avgOf1=sumOf[0]/7.0;
    avgOf2=sumOf[1]/7.0;
    avgOf3=sumOf[2]/7.0;
    //output averages
    cout<<"\nThe average amount of food eaten per day by the whole "
            "family of monkeys is "<<avg;
    //output least amount of food eaten
    if(avgOf1<=avgOf2&&avgOf1<=avgOf3)
    cout<<"\nThe least amount of food eaten during the week by any "
            "one monkey is "<<sumOf[0];
    else if(avgOf2<=avgOf1&&avgOf2<=avgOf3)
    cout<<"\nThe least amount of food eaten during the week by any "
            "one monkey is "<<sumOf[1];
    else
    cout<<"\nThe least amount of food eaten during the week by any "
            "one monkey is "<<sumOf[2];
    //output largest amount of food eaten
    if(avgOf1>=avgOf2&&avgOf1>=avgOf3)
    cout<<"\vThe largest amount of food eaten during the week by any "
            "one monkey is "<<sumOf[0];
    else if(avgOf2>=avgOf1&&avgOf2>=avgOf3)
    cout<<"\nThe largest amount of food eaten during the week by any "
            "one monkey is "<<sumOf[1];
    else
    cout<<"\nThe largest amount of food eaten during the week by any "
            "one monkey is "<<sumOf[2]<<endl;
    cout<<endl;
}
//end of problem 4

//Solution to problem 5
using std::cout;
using std::endl;

void problem5(){
    const char filename[] = "answers.txt";
    std::ifstream in(filename);
    std::string question;
    cout<<"SAVITCH 9TH EDITION, CHPT 6\n";
    cout<<"PROGRAMMING PROJECTS #6\n";
    cout<<endl;
    while(in) {
        cout<<endl<<"Ask your question or type 'quit' to exit program:"<<endl;
        getline(std::cin,question);
        if(question == "quit") break;
        char ch;
        while((in.get(ch))&&(ch!='\n'))
        {
            if(ch=='#')
                cout<<rand()%18+1;
            else
                cout<<ch;
        }
        cout<<endl;
        if(in.eof())
        {
            in.close();
            in.clear();
            in.open(filename);
        }
    }
}
//end of problem 5

//Solution to problem 6
void problem6(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=20.0;//Number of questions in test
    char qstns[SIZE];//Correct Answers
    char answrs[SIZE];//Given answers
    char rhtwrg[SIZE];//Given answers right or wrong?
    float prcntg;//Calculate percentage of correct answers
    
    //Initialize the array
    filAray(qstns,SIZE);
    filAray(answrs,SIZE);
    
    //Grade the Test
    int score=grade(qstns,answrs,rhtwrg,SIZE);
    
    cout<<"GADDIS 8TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING CHALLENGES #11\n";
    cout<<endl;
    //Output the initial arrays and the results
    cout<<"The Test Question Solutions"<<endl;
    prntAry(qstns,SIZE,5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answrs,SIZE,5);
    cout<<"The scores received"<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your results were "<<score<<" out of "<<SIZE<<endl;
    //Calculate the percentage
    prcntg=(score/static_cast<float>(SIZE))*100;
    //Ouput the percentage
    cout<<"You received a "<<prcntg<<"%\n";
    //Display if percentage is 70 or above
    if ((prcntg>=70)&&(prcntg<=100))
    {
        cout<<"You Passed! Congratulations!\n";
        cout<<endl;
    }
    //Display if percentage is below 70
    else
    {
        cout<<"You failed.\n";
        cout<<endl;
    }
}
/**************************************************
 *              Score the Test                    *
 **************************************************
 * Purpose:  To print a character type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    q-> The question Array
 *    a-> The answer Array
 * Output:
 *    c-> The score Array
 *    score-> The total correct
 */
int grade(char q[],char a[],char c[],int n){
    //Declare the count/score
    int score=0;
    //Grade each answer
    for(int i=0;i<n;i++){
        if(q[i]==a[i]){
            c[i]='c';
            score++;
        }else c[i]='i';
    }
    //Return the score
    return score;
}

/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print a character type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The character Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */
void prntAry(const char a[],int n,int nCols){
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with a,b,c,d
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The character Array
 * Output:
 */
void filAray(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%4+97;//[a,b,c,d]
    }
}
//end of problem 6

void problem7() {
    cout<<"GADDIS 8TH EDITION, CHPT 7\n";
    cout<<"PROGRAMMING CHALLENGES #12\n";
    cout<<endl;
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
}

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
    cout<<endl;
}
//end of problem 7

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}