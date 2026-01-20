#include "setup.hpp"

/*
Given an array of integers nums sorted in non-decreasing order, 
find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
*/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();

        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int ub = (upper_bound(nums.begin(), nums.end(), target) - nums.begin()) - 1;

        if(lb == n || nums[lb]!= target) {
            return ({-1,-1});
        }
        else {
            ans.push_back(lb);
        }

        if(ub == n || nums[ub]!= target) {
            ans.push_back(-1);
        }
        else {
            ans.push_back(ub);
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
    vector<int>result = sol.searchRange(nums, target);
    print_input(result);    
    //print_input(nums);
    return 0;
}