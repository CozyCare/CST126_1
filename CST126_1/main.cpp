// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char string1[] = "I was born with a plastic spoon in my mouth.";
	const int len = sizeof(string1);
	cout << "The string, \"" << string1 << "\" is " << len - 1 << " characters long.\n\n";
	
	char letter[len];
	cout << "Enter the letters you want to find in the array: ";
	cin >> letter; 
	
	char * ptr = string1;
	char * ptr1 = letter;
	
	for (int i = 0; i < len-1; i++, ptr++)
	{
		for (int j = 0; j < len - 1; j++, ptr1++)
		{
			if (string1[i] == letter[j])
				cout << *ptr << " is in position " << i + 1 << endl;
			
			/*else if (string1[i] != letter[j])
					cout << letter << " is in position -1" << endl;
			
			{
				break;
			}*/
		}
	}

	
	
	return 0;
}
