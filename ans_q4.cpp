/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 4
Question Type : Solving run-time error
-----------------------------------------------------------

This program is written to get two integers input from the user,
and then to be substituted into the following formula and
output the result.

             17y      9x-4y
  final =   ----- +  -------
             x+y      5x-2y

However, certain inputs will result in division-by-zero run time error.
Correct the error(s) by adding some code to remind the user to re-enter
the correct input number x and y as shown in the sample runs below:

Sample Run 1:

   Input -> 4  5
   10

Sample Run 2:

   Input -> -1  1
   Re-input -> -3  2
   -33

Sample Run 3:

   Input -> 2  5
   Re-input -> 6  15
   Re-input -> 7  4
   7

---------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    float result01, result02, final;
    cout << "Input -> ";
    cin >> x >> y;

    //--------- Write your program below ---------------

    bool validInput = false;

    while(!validInput)
    {


        if( (x+y)==0 || ((5*x)-(2*y))==0)
        {
            cout << "Re-input -> ";
            cin >> x >> y;
        }
        else
        {
            validInput = true;
        }
    }





    //--------- End your program here ------------------

    result01 = (17 * y) / ( x + y );
    result02 = (9 * x - 4 * y) / ( 5 * x - 2 * y );
    final = result01 + result02;
    cout << final;

    return 0;
}
