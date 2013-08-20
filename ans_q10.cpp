/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 10
Question Type : Write a program
-----------------------------------------------------------

A palindrome is a phrase that may be read the same way
in either direction.

Write a program which asks the user for a string,
and output whether the string is a palindrome or not.
Only alphabet 'A' to 'Z' should be considered in the test,
any spaces, punctuation and other characters should be
ignored. The test should be case insensitive,
meaning the character 'A' is considered the same as 'a'.

Sample Run 1:

   Input -> Madam, I'm Adam!
	YES

Sample Run 2:

   Input -> Never odd or even!!
   YES

Sample Run 3:
   Input -> AppleApple

   NO

---------------------------------------------------------------*/
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout << "Input -> ";
    string text ;
    getline(cin, text);

    //---------Write your program below------------

    bool palin = true;
    int strLen = text.length();
    for (int x = 0; x< strLen ; x++)
    {

        text[x] = tolower(text[x]);

        if(text[x] >= 'a' && text[x] <= 'z' ) {}
        else
        {
            text.erase (text.begin()+x);
            strLen = text.length();
            x--;
        }
    }

    strLen = text.length();

    for (int x = 0; x< strLen ; x++)
    {
        if (text[x] != text[strLen-x-1])
        {
            palin = false;
        }
    }


    if(palin)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    //---------End your program here---------------
    return 0;
}
