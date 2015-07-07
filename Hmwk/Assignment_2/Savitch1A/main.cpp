/* 
 * File:   main.cpp
 * Author: Tiffany Ward
 * Created on July, 2015, 10:59 PM
 * Purpose:  Homework 2 Savitch 1A
 */

    //System Libraries
    #include <iostream>  //I/O Library
    using namespace std; //std namespace -> iostream

    //User Libraries

    //Global constants
    const float MET_TON = 35273.92; //Conversion metric ton to ounces

    //Function Prototypes

    //Execution Begins Here!
    int main() {

    //Declare Variables Here
    //pkgWGT = weight of cereal package in ounces (to be entered by user)
    //boxTON = weight of cereal package represented in metric tons
    //numBOX = number of boxes of cereal needed to equal one metric ton
    //ans = user inputs y or n to repeat new or end problem
    float pkgWGT;
    float boxTON, numBOX;
    char ans;
    
    do
    {  //Prompt then input weight of cereal package
       cout << "Enter the weight of a package of breakfast cereal (in ounces)\n"
            << "And then press return: ";
       cin >> pkgWGT;
       //Calculate the weight of the cereal in metric tons
       boxTON = (pkgWGT / MET_TON);
      //Output the weight in metric tons
       cout << endl;
       cout << "The weight of the cereal in metric tons is: ";
       cout << boxTON << " MT." << endl;
       cout << endl;
       //Calculate the number of boxes needed to equal a metric ton
       numBOX = (MET_TON / pkgWGT);
       //Output results of number of boxes needed
       cout << "You would need ";
       cout << numBOX << " boxes of cereal to equal one metric ton.\n";
       cout << endl;
       //Prompt user to enter y or n for new calculation or to end problem
       cout << "Would you like to calculate another cereal box?\n"
            << "Type y for yes, n for no,\n"
            << "and then press return: ";
       //Input y (for yes) or n (for no)
       cin >> ans;
    } while (ans == 'y'||ans == 'Y');//allows user to enter capital or lower
    //case y without error.
    cout << "Good-Bye\n";//Display Good-Bye if user enters n.
//Exit Stage Right!
return 0;
}