#include <iostream>
using namespace std;

/*
n = 7789
extract digits
learn mdoulo
number at ones place can be found out using %10

7789 % 10 = 9
7789 / 10 ==> remove the last digit  778 %10 = 8
778/ 10 --> %10 
77/ 10--> %10
7/10--> %10


can do recursion or while loop

(int)log10(n);
*/
void PrintDigits(int n)
{
    if (n > 0)
    {
        cout << n%10 << endl;
        n = n/10;
    }
    else
    {
        return;
    }
    PrintDigits(n); 
}


/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1



7789 --> 9877 this is easy with digit extraction.
*/

int reversedDigits(int n)
{
    static long int rev = 0;
    static bool firstTime = true;

    if(firstTime)
    {
        rev = 0;
        firstTime = false;
    }

    int ld;

    if(n != 0)
    {
        ld = n %10;
        rev = (rev * 10) + ld;
        n = n /10;

        return reversedDigits(n);
    }
    else
    {
        firstTime = true;
        return rev;
    }
}

int main ()
{
     int n;
    cout << "Enter the number";
    cin >> n;

    PrintDigits(n);
    cout << endl;
    cout << endl<< reversedDigits(n);
    cout << endl;
    cout << endl<< reversedDigits(n);
    cout << endl;

    if(reversedDigits(n) == n)
    {
        cout << "PALINDROME" << endl;
    }
    cout << endl;
    return 0;
}