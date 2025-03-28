#include <iostream>
using namespace std;


/********************************************************************************************************************************************
*Problem statement
*Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with �*�.
*For every value of �N�, help sam to print the corresponding N-dimensional forest.
*Example:
*Input: N = 3
Output:
* * *
* * *
* * *
********************************************************************************************************************************************/
void pat1()
{
	unsigned short n;
	cout << "Hi Sam, please enter the value of n" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1)
			{
				cout << "* " << endl;
			}
			else
			{
				cout << "*";
			}
		}
	}

}

int main()
{
	pat1();
	//pat2();
	return 0;
}