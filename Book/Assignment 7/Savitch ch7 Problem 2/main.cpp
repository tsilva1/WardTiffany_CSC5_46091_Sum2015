 /* 
 * File:   main.cpp
 * Author: GabrielJ
 *Savitch Ch7 Prob 2
 * Created on July 24, 2015, 8:34 PM
 * This Program adds two Hexadecimal numbers
 */

#include <iostream>// I/O
using namespace std;// Standard Namespace

void intro();//Function for intro
void input();//Function for input

void input(char[]);
void output(char[]);
void hex_sum(char[], char[], char[]);

int main()
{
    char answer;

    intro();

    do// Allows user to choose to keep adding
    {
        input();

        cout << endl << endl << "Do you wish to convert another "
                                "hexadecimal number? (y/n) \n";
        cin >> answer;

    } while(answer == 'y' || answer == 'Y');

    cout << "Good-bye! \n";

    return 0;
}

void intro()//Allows user to enter hex numbers and includes a sentinel value
{
    cout << "Enter a hexadecimal number of 10 or fewer digits \n"
         << "0-9 and A-F (in caps) \n"
         << "Press lower case q to stop the entry \n" << endl;
}

void input()
{
    char number_1[10] = {'0', '0', '0', '0', '0', 
                         '0', '0', '0', '0', '0'};//array for first hex number
    char number_2[10] = {'0', '0', '0', '0', '0', 
                         '0', '0', '0', '0', '0'};//array for second hex number
    char sum[10] = {'0', '0', '0', '0', '0', '0', 
                    '0', '0', '0', '0'};//aray for function hex_sum
    char temp[10] = {'0', '0', '0', '0', '0', '0', 
                     '0', '0', '0', '0'}; //initializing all the variables

    cout << "Enter the first hexadecimal number \n";
    input(number_1);
    cout << endl;
    cout << "Enter the second hexadecimal number \n";
    input(number_2);
    cout << endl;

    hex_sum(number_1, number_2, sum);;

    cout << "The addition of the two hexadecimal numbers is \n";
    output(sum);
}

void input(char number[])
{
    int i = 0;
    char c = '0', tmp;

    while(c != 'q') //Sentinel Value
    {
        cin >> c;
        number[i] = c;
        i++;//counter controlled loop allows sentinel value to end loop
    }

    number[--i] = '0';

    for(int k = 0; k < i/2; k++)
    {
        tmp = number[k];
        number[k] = number[i - 1 - k];
        number[i - 1 - k] = tmp;
    }
}

void output(char number[])
{
    for(int i = 9; i >= 0; i--)
    {
        cout << number[i];
    }
}

void hex_sum(char number_1[], char number_2[], char sum[])
{
    int x, y, s, carry = 0, next_carry = 0;

    for(int i = 0; i < 10; i++)
    {
        if('0' <= number_1[i] && number_1[i] < '0' + 10)
            x = number_1[i] - '0';
        else
            x = number_1[i] - 'A' + 10;

        if('0' <= number_2[i] && number_2[i] < '0' + 10)
            y = number_2[i] - '0';

        else
            y = number_2[i] - 'A' + 10;


        carry = next_carry;

        s = (x + y + carry) % 16;
        next_carry = (x + y + carry) / 16; //converts the number back to hex

        if(0 <= s && s < 10)
            sum[i] = char('0' + s);

        else if(10 <= s && s < 16)
            sum[i] = char('A' + s - 10);

        else
            cout << "Invalid input \n";
    }

    if(1 == carry && 1 == next_carry)// informs user if more then 10 digits
        cout << "Overflow! \a \n";
}

