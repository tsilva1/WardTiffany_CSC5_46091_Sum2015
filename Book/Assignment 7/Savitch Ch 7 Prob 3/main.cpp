/* 
 * File:   main.cpp
 * Author: GabrielJ
 *Savitch Ch7 Prob 3
 * Created on July 26, 2015, 2:06 PM
 * This program takes a sentence and deletes the repeating characters
 */

#include <iostream>// I/O
using namespace std;//Standard Namespace

void intro();
//Explains what the program does

void filarray(char a[], int size, int& number_used);
//Array a[] is filled with character data from the keyboard

void delete_repeats(char a[], int& number_used);
//Function will remove all repeated characters
//and move the rest of the characters
//foward to fill in the gap.

void output(char a[], int& number_used);
//Outputs the contents of the array and outs the new size of the array

int main()
{
  using namespace std;
  char array[100];
  int number_used;
  intro();
  filarray(array, 100, number_used);
  output(array, number_used);
}

//uses iostream
void intro()
{
  using namespace std;// Standard Namespace
  cout << "This program will will ask the user to type in a sentence\n"// Goes over instructions of program
       << "and then will delete all repeated characters of the sentence.\n"
       << "The program will then output the new sentence with all repeated\n"
       << "letters deleted\n";
}

//uses iostream
void filarray(char a[], int size, int& numused)
{
  using namespace std;
  char c;
  int index = 0;
  cout << "Please type in a sentence and then press enter.\n";// Prompts User for input
  cout<<"enter 'n' when you wish to end program.";
  cin.get(c);


  while (c != '\n' && index < size) {
    a[index] = c;
    cin.get(c);
    index++;
  }
  numused = index;


  for (int i = 0; i < numused; i++) {//Loop to keep track of repeating characters
    for (int j = i + 1; j < numused; j++) {
      if (a[i] == a[j]) {
	numused=numused-1;
	for (int k = j; k < numused; k++)
	  a[k] = a[k + 1];
	a[numused] = '\0';
	--j;
      }
    }
  }
}



//uses iostream
void output(char a[], int& number_used)
{
  using namespace std;
  cout << "The new sentence without the repeated letters is:\n";
  for (int i = 0; i < number_used; i++) {
    cout << a[i];
  }
  cout << "\nThe size of the new array is "
       << number_used
       << endl;


  cin.ignore();
  cin.get();
}
