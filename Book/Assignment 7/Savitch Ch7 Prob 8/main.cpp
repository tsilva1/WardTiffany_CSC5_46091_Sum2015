/* 
 * File:   main.cpp
 * Author: GabrielJ
 * Savitch Ch7 Prob 8
 * Created on July 26, 2015, 3:09 PM
 * This program reads in a line of text and outputs the letters in the sentence and how many times
 * they occur in the sentence
 */

#include <iostream>// I/O
#include <iostream>
#include <iomanip>
using namespace std;// Standard Namespace

int alpha[26] = {0};
int main()
    {
	const string strSample = "Our Deepest Fear is not that we are "
                                 "inadequate, it is that we are powerful "
                                 "beyond measure, it is our light not "
                                 "our darkness that most scares us.";
	for (int i = 0; i < strSample.length(); i++) {
		int a = strSample[i];
		if (a >= 'a' && a <= 'z') alpha[a - 'a']++;
		else if (a >= 'A' && a <= 'Z') alpha[a - 'A']++;
		}
	cout << "Letter Frequency" << endl
		 << "------ ---------" << endl;
	
	for (int i = 0; i < 26; i++) {
        if (alpha[i]) {
		    cout << right << setw(4) << char('A' + i) << setw(7)
                            << right << alpha[i] << endl;
            }
		}
	return 0;
	}
