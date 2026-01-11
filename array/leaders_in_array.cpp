#include "setup.hpp"

/*
Brute --> Pick a number and check its next elem till you find something greater, if not found it is 
one of the leaders. O(n^2)

Optimal --> Bhai this was nice

<-->
The logic is that given an elem if you look to its right and somehow you know the max of the array on 
its right than you canjust compare the elem with max and if elem > max that mean elem will be greater 
than all elements on its right and hence it is a leader.

Right most is always the max so start from back.

keep track of max in the right.
<-->

nums = [1, 2, 5, 3, 1, 2]
*/
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
 		int n = nums.size();

 		int max = nums[n - 1];
 		vector<int> leaders;
 		leaders.push_back(nums[n - 1]);

 		for(int i = n - 2; i >= 0; i--) {
 			if(max < nums[i]) {
 				max = nums[i];
 				leaders.push_back(nums[i]);
 			}
 		}

 		reverse(leaders.begin(), leaders.end());
 		return leaders;     
    }
};

int main() {
    vector<int> nums;
  
    //vector<int> nums2;
    
    Solution sol;
    read_from_input(nums);
    //print_input(nums);
    //read_from_input(nums2);
    //print_input(nums2);

    //int k;
    //cin >> k;
    vector<int> result = sol.leaders(nums);
    print_input(result);    
    //print_input(nums);

    return 0;
}