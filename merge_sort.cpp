#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    

}

void merge_sort(int arr[], int low, int high)
{
    cout << "low " << low << " high "<< high << endl;
    if(low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main()
{
   int arr[10] = {23,45,1,2,6,43,76,5,3,3}; 

   int size = sizeof(arr)/sizeof(arr[0]);

   merge_sort(arr, 0, size-1);
}