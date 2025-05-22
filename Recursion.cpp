#include <iostream>
using namespace std;

//print N to 1 using backtracking.
//Backtracking basically means the last iteration of recurions/loop will output first.
//So N will output at the end function call.

int n_to_one_backtracking(int i, int n)
{
    if (i < 1)
    {
        return n - i;
    } 
    cout << n_to_one_backtracking(i-1, n) << endl;
    return n - i;  
}  

//swap an array
//swap (i, n-i-1);
//till n/2 as the array is already swapped halfway.
// call fn again with (i+1)
void swap_array(int arr[], int i, int n)
{
    if (i == n/2)
    {
        return;
    }

    swap(arr[i], arr[n-i-1]);
    swap_array(arr, i+1, n);
}


//palindrome
//compare an array
//compare (i, n-i-1);
// call fn again with (i+1)


//fibonacci
int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    int last = fib(n -1);
    int s_last = fib(n -2);
    return last + s_last;
}

int main()
{
    n_to_one_backtracking(3,3);
    int arr[4] = {1,2,3,4};
    swap_array(arr, 0, 4);
    for (int i =0; i < 4; i ++)
    {
        cout << arr[i] << endl;
    }
    cout << fib(6);
    return 0;
}  