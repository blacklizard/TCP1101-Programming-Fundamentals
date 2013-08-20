/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 3
Question Type : Find Syntax and Logical Errors
-----------------------------------------------------------

This program is written to get an integer input from the user,
and then output the balance of the accumulated interest.
P is the interest rate in percentage,
n is the number of years the investment is held.

However, the program has error(s). Correct the error(s) so that
the program will generate correct output, as shown in the sample
runs below:

Sample Run 1:

   Input -> 50000
   81444.7

Sample Run 2:

   Input -> 1000
   1628.89

-----------------------------------------------------------*/
#include <cmath>
#include <iostream>
using namespace std;

void future_value(int p, int n, int balance)
{
    balance = balance * pow ( 1 + p / 100, n);
    return balance;
}

int main()
{
    int balance;
    cout << "Input -> ";
    cin >> balance
    balance = future_value(5, 10, balance);
    cout << balance << endl;
    return 0;
}
