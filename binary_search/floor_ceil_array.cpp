#include "setup.hpp"
/*
Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. 
The floor of x is the largest element in the array which is smaller than or equal to x. 
The ceiling of x is the smallest element in the array greater than or equal to x. 
If no floor or ceil exists, output -1.

*Example 1
Input : nums =[3, 4, 4, 7, 8, 10], x= 5
Output: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2
Input : nums =[3, 4, 4, 7, 8, 10], x= 8
Output: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.
*
*/

class Solution {
public:
    int floor(vector<int> nums, int x) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        int ans = -1;

        while(low <=high) {
            mid = low + (high - low)/2;
            if(nums[mid] == x) {
                return nums[mid];
            } else if(nums[mid] < x) {
                low = mid + 1;
                ans = nums[mid];
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int>ans;
        ans.push_back(floor(nums, x));
        int c = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
        if(nums.size() != c) {
            ans.push_back(nums[c]);
        } else {
            ans.push_back(-1);
        }
       
        return ans;
    }
};


int main() {
    vector<int> nums;
  
    //vector<int> nums2;
    
    Solution sol;
    read_from_input(nums);
    int target;
    cin >> target;
      //print_input(nums);
    //read_from_input(nums2);
    //print_input(nums2);

    //int k;
    //cin >> k;
    vector<int>result = sol.getFloorAndCeil(nums, target);
    print_input(result);    
    //print_input(nums);
    return 0;
}