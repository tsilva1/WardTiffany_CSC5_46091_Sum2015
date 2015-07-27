#include<iostream>

using namespace std;

int main()
{
    int monkeyEat[3][7];
    int sum=0;
    int sumOf[3]={0,0,0};
    float avg;
    float avgOf1;
    float avgOf2;
    float avgOf3;

    //get data
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
    avg=sum/7;
    avgOf1=sumOf[0]/7.0;
    avgOf2=sumOf[1]/7.0;
    avgOf3=sumOf[2]/7.0;

    cout<<"\nThe average amount of food eaten per day by the whole "
            "family of monkeys is "<<avg;

    if(avgOf1<=avgOf2&&avgOf1<=avgOf3)
    cout<<"\nThe least amount of food eaten during the week by any "
            "one monkey is "<<sumOf[0];
    else if(avgOf2<=avgOf1&&avgOf2<=avgOf3)
    cout<<"\nThe least amount of food eaten during the week by any "
            "one monkey is "<<sumOf[1];
    else
    cout<<"\nThe least amount of food eaten during the week by any "
            "one monkey is "<<sumOf[2];

    if(avgOf1>=avgOf2&&avgOf1>=avgOf3)
    cout<<"\vThe largest amount of food eaten during the week by any "
            "one monkey is "<<sumOf[0];
    else if(avgOf2>=avgOf1&&avgOf2>=avgOf3)
    cout<<"\nThe largest amount of food eaten during the week by any "
            "one monkey is "<<sumOf[1];
    else
    cout<<"\nThe largest amount of food eaten during the week by any "
            "one monkey is "<<sumOf[2]<<endl;

    return 0;
}