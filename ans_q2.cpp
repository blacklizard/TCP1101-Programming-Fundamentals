/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 2
Question Type : Find Syntax Errors
-----------------------------------------------------------

This program is written to get four integers input from the user,
and then output the maximum value from the numbers.

However, the program has a number of errors. Correct the errors
so that the program will generate correct output as shown in the
sample runs below:

Sample Run 1:

   Input -> 5 9 2 3
   9

Sample Run 2:

   Input -> 83 65 98 12
   98

-----------------------------------------------------------*/

#include <iostream>
using namespace std;

int Maximum(int score[], int size)
{
    int i = 1;
    int maximum = score[0];
    while( i < size )
    {
        if(maximum < score[i])
            maximum = score[i];
        i++;
    }
    return maximum;
}

int main()
{
    const int size = 4;
    int score[size], i;
    cout << "Input -> ";

    for( i = 0 ; i < size ; i++ )
        cin >> score[i];

    cout << Maximum(score,size);

    return 0;
}
