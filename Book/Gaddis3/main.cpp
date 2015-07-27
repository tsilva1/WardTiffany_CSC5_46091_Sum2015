#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
int total(int[],int);
int hghSLE(int[],int);
int lowSLE(int[],int);

int main(int argc, char** argv) {
    
    const int ARRAY=5;//set array size
    int sales[ARRAY];//sales of salsa
    string salsa[ARRAY] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};//names of salsa
    int ttlSOLD;//total sold
    int hiSALE;//high selling salsa
    int loSALES;//low selling salsa
    int count;//counter
    
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
    
    return 0;
}

/************************************************************
 *                       	total                         *
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
 *                    lowSLE                          *
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
 *                    hghSLE                         *
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