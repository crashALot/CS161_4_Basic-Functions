/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        04/25/2018
** Description: This program takes three int parameters by reference 
**              and sorts their values into ascending order, so that 
**              the first parameter now has the lowest value, the
**              second parameter the middle value, and the third
**              parameter has the highest value.
*********************************************************************/

#include <iostream>

using std::endl;
using std::cout;

// Variables being passed by reference, return vaue not required
void smallSort(int& first, int& second, int& third);
/*
int main()
{
    int first = 14;
    int second = -90;
    int third = 2;
    smallSort(first, second, third);
    cout << first << ", " << second << ", " << third << endl;
}
*/
/********************************************************************* 
** Description: This function will order from lowest to highest three 
**              parameter values passed via reference from Main. 
*********************************************************************/ 
void smallSort(int& first, int& second, int& third)
{
    // Local variables initialized to known values
    int newFirst=first, newSecond=second, newThird=third;
    while (first>second || first>third)
    {
        if (first>second)
        {
            newFirst=second;
            newSecond=first;
            if (newSecond>third)
            {
                newSecond=third;
                newThird=first;
            }
            first=newFirst;
            second=newSecond;
            third=newThird;
        }
        else if (second>third)
        {
            newSecond=third;
            newThird=second;
            second=newSecond;
            third=newThird;
        }
    }
}
