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


cout << endl<<endl<<endl <<"Bubble sort"<<endl;

    ///////////////Bubble sort

    int barr[10] = {24,13,12,11,46,36,-1,90,100,0};
    int bsize = sizeof(barr)/sizeof(barr[0]);
    cout << "Size of array is " << bsize << endl;
    for(int i = 0; i < bsize; i++)
    {
        cout << "Element "<< i << " is " << barr[i] << endl;
    }

    for(int i = size - 1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(barr[j] > barr[j+1])
            {
                int temp = barr[j+1];
                barr[j+1] = barr[j];
                barr[j] = temp;
            }
        }
    }

    cout << endl << "After Sorting" << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Element "<< i << " is " << barr[i] << endl;
    }


    cout << endl<<endl<<endl <<"Insertion sort"<<endl;

    ///////////////Insertion sort

    int iarr[6] = {1,2,3,4,5,6};
    int isize = sizeof(iarr)/sizeof(iarr[0]);
    cout << "Size of array is " << isize << endl;
    for(int i = 0; i < isize; i++)
    {
        cout << "Element "<< i << " is " << iarr[i] << endl;
    }

    for(int i = 1; i < isize ; i++)
    {
        for(int j = i; j > 0; j --)
        {
            if(iarr[j] < iarr[j -1])
            {
                int temp = iarr[j -1];
                iarr[j -1] = iarr[j];
                iarr[j] = temp;
            }
            else
            {
                break;
            }
            cout << "runs"<< j<< endl;
        }
    }

    cout << endl << "After Sorting" << endl;

    for(int i = 0; i < isize; i++)
    {
        cout << "Element "<< i << " is " << iarr[i] << endl;
    }


    return 0;
}