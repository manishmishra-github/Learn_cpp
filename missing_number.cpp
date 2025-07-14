#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss = 0;
		//sum of n natural number is (n * (n +1)) / 2;
		// sum of first 5 nat nums 
		// 1,2,3,4,5 = 5 * 5+1 /2 = 15
		// if you know n which is size of array
		// calculate sum and calculate sum of the array
		// the diff is missing

		 int n = nums.size();
		int nsum = (n * (n + 1)/ 2);
		//cout<< nsum << endl;
		int sum = 0;
		for(int i = 0; i < n; i++) {
			sum += nums[i];
		}
		//cout << sum << endl;
		miss = nsum - sum;
		return miss;



		// or you can do xor
		// a ^ b = 0 if they are equal or a if not equal;
		// works only on sorted array
		// int xxor = 0;
		// for(int i = 0; i < n; i++ )
		// {
		// 	xxor = i;
		// 	cout << i << (xxor ^ nums[i]) <<  endl;
		// 	if((xxor ^ nums[i]) != 0)
		// 	{
		// 		return i;
		// 	}
		// }
    }
};


int main()
{
    vector<int>nums;
	Solution sol;
	int x;

    for(int i = 0; i < 4; i++) {
		cin >> x;
		nums.push_back(x);
    }

	cout << sol.missingNumber(nums);
	// There can be two approaches

    return 0;
}