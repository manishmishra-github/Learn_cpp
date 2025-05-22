/*Find the minimum value in subarray starting from initial array and 
* swap the minimum with the first element of the subarray
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {24,13,12,11,46,36,-1,90,100,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array is " << size << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Element "<< i << " is " << arr[i] << endl;
    }

    int min, index = 0;
    for(int i = 0; i < size; i++)
    {
        min = arr[i];
        index = i;
        cout << "Current min is "<< min << "at index "<< i<< endl;
        for(int j = i; j < size; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                index = j;
                cout << "New min is "<< min << "at index " << j << endl; 
            }
        }

        if(index != i)
        {
            cout << "We found the mminimal value in subarrary "<< min << endl;
            arr[index] = arr[i];
            arr[i] = min;
        }
    }
    cout << endl << "After Sorting" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Element "<< i << " is " << arr[i] << endl;
    }
    return 0;
}