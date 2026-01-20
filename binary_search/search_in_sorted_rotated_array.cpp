#include "setup.hpp"

/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly 
left rotated at an unknown index k (1 <= k < nums.length) 
such that the resulting array is 
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = 0;

        while(low <= high) {
            mid = low + (high - low) / 2;
            if(nums[mid] == target) {
                return true;
            }//if it has duplicates and 
            else if((nums[low] == nums[mid]) && (nums[mid] == nums[high])) {
                low++;
                high--;
                continue;
            }

            //check which part is sorted

            if(nums[low] <= nums[mid]) {
                if(nums[low] <= target && target <= nums[mid]) {
                    high = mid -1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if(nums[mid + 1] <= target && target <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false;
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
    int result = sol.search(nums, target);
    cout<<result;    
    //print_input(nums);
    return 0;
}