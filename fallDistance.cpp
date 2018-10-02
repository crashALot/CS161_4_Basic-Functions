/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        04/25/2018
** Description: The following formula can be used to determine the 
**              distance an object falls due to gravity in a specific
**              time period: (1/2)gt^2. Where d is the distance in 
**              meters, g is 9.8, and t is the time in seconds that
**              the object has been falling. This function takes the
**              falling time as an argument. The function returns the
**              distance in meters that the object has fallen in that
**              time. 
*********************************************************************/

#include <iostream>
#include <cmath>

using std::endl;
using std::cout;
using std::cin;

double fallDistance(double);
/*
int main()
{
    double time, distance;
    cout << "You drop an object. Measured in seconds, how long does it fall?" << endl;
    cin >> time;
    distance=fallDistance(time);
    cout << "The object fell " << distance << " meters." << endl;
    return 0;
}
*/
/********************************************************************* 
** Description: This function uses variable 'time' as an input
**              parameter from Main, and calculates the total distance
**              traveled by an object over that time. The 'distance' 
**              value is returned to Main. 
*********************************************************************/ 
double fallDistance(double time)
{
    double distance, gravity=9.8;
    distance=(.5)*gravity*pow(time,2);
    return(distance);
}
