/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 1
Question Type : Find Syntax Errors
-----------------------------------------------------------

This program is written to swap two integers input from the user,
and then output the result.

However, the program has a number of errors. Correct the errors
so that the program will generate correct output as shown in the
sample runs below:

Sample Run 1:

   Input -> 22 55
   55 22

Sample Run 2:

   Input -> 243 91
   91 243

-----------------------------------------------------------*/

#include <iostream>
using namespace std;

void swap (int& a,int b)
{
    //Do not change the following three equations. There are correct.
    a = a - b;
    b = a + b;
    a = b - a;


    return(b,a);
}

int main()
{
   int a, b;

   cout << "Input -> ";
   cin >> a >> b;
   swap( a, b ) ;
   cout << a << "  " << b;

   return 0;
}
