/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        04/25/2018
** Description: A hailstone sequence starts with some positive integer.
**              If that integer is even, it is divided by two to get 
**              the next integer in the sequence, but if it is odd, 
**              then it is multiplied by three and added one to get 
**              the next integer in the sequence. This program will 
**              receive a starting integer as input and returns how 
**              many steps through the hailstone sequence it takes to 
**              reach 1.
*********************************************************************/ 

#include <iostream>
#include <cmath>

using std::endl;
using std::cout;
using std::cin;

int hailstone(int startNum);
/*
int main()
{
	int runNum, hailNum;
    cout << "Please enter a value to start the hail storm:" << endl;
	cin >> runNum;
    hailNum=hailstone(runNum);
    cout << hailNum;
}
*/
/********************************************************************* 
** Description: This function takes an input parameter from Main and 
**              calculates the number of steps required to complete
**              the hailstone sequence. Entering 3 for example, should
**              return 7.            
*********************************************************************/ 
int hailstone(int runNum)
{
    // Variable loopCount will be returned to Main as the total number
    // of steps required for the hailstorm sequence.
    int loopCount=0;
    while (runNum!=1)
    {
        if (runNum%2 == 0)
        {
            runNum=runNum/2;
        }
        else
        {
            runNum=(runNum*3)+1;
        }
        loopCount=loopCount+1;
    }
    return (loopCount);
}
