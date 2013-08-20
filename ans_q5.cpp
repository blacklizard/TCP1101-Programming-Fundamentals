/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 5
Question Type : Write a program
-----------------------------------------------------------

Write a program that accepts a character input from the user
and output the total count of the character appears in the given sentence
as shown in the sample runs below:

Sample Run 1:

   Input -> a
   4

Sample Run 2:

   Input -> g
   6

---------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    char word[size] = "although programming is challenging, i will not give up easily.";

    //--------- Write your program below ---------------

    char input;
    cout<<"Input -> ";
    cin>>input;

    int count = 0;

    for(int x = 0 ; x < 100; x++)
    {
        if(word[x] == input)
        {
            count++;
        }
    }


    cout<<count<<endl;

    //--------- End your program here ------------------

    return 0;
}

