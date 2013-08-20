/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 8
Question Type : Write a program
-----------------------------------------------------------

Prompt the user to input 5 single-digit non-negative integers,
and then output the count for those integers as shown in the sample runs.

Sample Run 1:

   Input -> 1 1 1 3 3
   "1" = 3
   "3" = 2

Sample Run 2:

   Input -> 4 4 9 9 3
   "3" = 1
   "4" = 2
   "9" = 2

---------------------------------------------------------------*/

#include <iostream>
using namespace std;




int main()
{
    const int size = 5;
    int nums[size], i, j, counter;

    cout << "Input -> ";

    for( i = 0 ; i < size ; i++ )
        cin >> nums[i];

    //---------- Write your program below------------

    for (int index = 1 ; index <= size - 1; index++)
    {
        int currentIndex = index;

        while ( currentIndex > 0 && nums[currentIndex] < nums[currentIndex-1])
        {
            int temp          = nums[currentIndex];
            nums[currentIndex]   = nums[currentIndex-1];
            nums[currentIndex-1] = temp;

            currentIndex--;
        }
    }



    counter = 1;
    for( i = 0 ; i < size ; i++ )
    {
        if(nums[i] == nums[i+1])
        {
            counter++;
        }
        else
        {
            cout<<"\""<<nums[i]<<"\" = "<<counter<<endl;
            counter=1;
        }
    }


    //----------End your program here--------------
    return 0;
}














