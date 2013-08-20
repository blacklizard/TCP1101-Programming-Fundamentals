/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 9
Question Type : Write a program
-----------------------------------------------------------

Write a program that prompts a user to enter 4 integer numbers
and then output the numbers in ascending order.

Sample Run 1:

   Input -> 7 3 9 5
   3 5 7 9

Sample Run 2:

   Input -> 98 76 45 88
   45 76 88 98


---------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
   const int size = 4;
   int i, num[size];

   cout << "Input -> ";

   for(i = 0 ; i < size ; i++)
      cin >> num[i];

   //---------Write your program below----------












   //-----------End your program here----------
   for(i = 0 ; i < size ; i++)
   {
       cout << num[i] << "  " ;
   }

   return 0;
}
