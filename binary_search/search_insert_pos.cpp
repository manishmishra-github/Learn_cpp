#include "setup.hpp"

// lb = lower_bound (arr.begin(), arr.end()) 
//Returns iterator so need to substact arr.begin ();
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = std::lower_bound(nums.begin(), nums.end(), target) - nums.begin();
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
    int result = sol.searchInsert(nums, target);
    cout<<result;    
    //print_input(nums);
    return 0;
}