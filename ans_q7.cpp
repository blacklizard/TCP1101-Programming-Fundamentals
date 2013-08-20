/*
Multimedia University
Faculty of Computing and Informatics

TCP1101 Programming Fundamentals
Lab Test #2
16th August, 2013 (Friday)
4.45pm - 6.45pm

-----------------------------------------------------------
Question No   : 7
Question Type : Write a program
-----------------------------------------------------------

Prompt the user to input a list of numbers into a vector
(enter -1 to end the input), and then output the odd numbers and
the sum of those numbers.

Sample Run 1:

   Input -> 1 2 3 4 5 -1
   1 3 5
   Sum -> 9

Sample Run 2:

   Input -> 3 8 7 9 6 3 -1
   3 7 9 3
   Sum -> 22

---------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, input, sum = 0;
    vector<int> nums;

    cout << "Input -> ";
    cin >> input;

    //-------Write your program below------

    nums.push_back(input);
    while( input != -1)
    {

        cin >> input;
        nums.push_back(input);

    }


    for (unsigned i=0; i < nums.size(); i++)
    {
        if (nums[i]%2 == 1)
        {
            cout<<nums[i]<<" ";
            sum += nums[i];
        }

    }



    //--------End your program here---------

    cout << "\nSum -> " << sum << endl;

    return 0;
}
