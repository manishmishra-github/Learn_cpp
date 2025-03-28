/*
*Write a function that calculates the corresponding day of the week for any particular date in the past or future.
*For example, for the date 28th August 2020 happens to be Friday. Hence the expected output will be Friday.
Sample Input 1 :
4
28 8 2020
20 4 2033
29 2 1920
27 4 1999
Sample Output 1 :
Friday
Wednesday
Sunday
Tuesday
*/


/* My thinking

how to calculate day using full date?
--> 1 AD is considered as a Monday
--> So count days from 1 AD to given date
--> How ? --> 365 days each year passing, and every four years 366 days
--> enum of 7 {M,T,W,TH,F,S,S}
--> Divide by 7 

use Zeller formula
day = (d+ [13(m+1)/5] + y + (y/4) - (y/100) + (y/400) mod 7)
*/



#include <iostream>
using namespace std;


string  dayOfTheWeek(int day, int month, int year)
{
    if (month == 1) {
        month = 13;
        year--;
    }
    if (month == 2) {
        month = 14;
        year--;
    }

    int q = day;
    int m = month;
    int k = year % 100;
    int j = year / 100;
    int h
        = q + 13 * (m + 1) / 5 + k + k / 4 + 
                              j / 4 + 5 * j;
    h = h % 7;

    switch (h) {
        case 0:
            return "Saturday";
            break;
        case 1:
            return "Sunday";
            break;
        case 2:
            return "Monday";
            break;
        case 3:
            return "Tuesday";
            break;
        case 4:
            return "Wednesday";
            break;
        case 5:
            return "Thursday";
            break;
        case 6:
            return "Friday";
            break;
        }

        return NULL;
}

int main()
{
    cout << dayOfTheWeek(28,3,2025);
    return 0;
}