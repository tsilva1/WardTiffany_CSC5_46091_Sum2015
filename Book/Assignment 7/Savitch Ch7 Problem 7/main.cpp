/* 
 * File:   main.cpp
 * Author: GabrielJ
 * Savitch Ch 7 Prob 7
 * Created on July 26, 2015, 2:48 PM
 * This program adds two positive integers 20 or less numbers long
 */

// First 19 digits 
#include <iostream>// I/O
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;// Standard Namespace

int main()
{	
    char A[22], B[22], *LP, *SP, *Sum;
    puts("Enter the first number"); fgets(A, sizeof A, stdin); //similar to cin.getline
    puts("Enter the second number"); fgets(B, sizeof B, stdin);
    LP = strlen(A) > strlen(B) ? ( A ) : ( B );//point to larger container
    SP = LP == ( A ) ? ( B ) : ( A );//point to smaller container
    int LA(strlen(LP)), SA(strlen(SP)), rem(0);

    for (int t( LA-2 ), v(SA-2) ; v >= 0; --t, --v ) {
            LP[t] = (( rem = ( rem + ( LP[t] - '0' ) + (SP[v] - '0') ) )%10) + '0';
            rem /= 10;		
    }

    Sum = (char*) malloc(LA);
    if ( (SA = rem > 0) and LA > 20 )
            puts("Overflow!");
    else{
            Sum[0] = ( rem + '0' );
            memcpy( Sum+SA, LP, LA-SA );
            printf("%s", Sum);
    }

    free (Sum);
    return 0;
}

