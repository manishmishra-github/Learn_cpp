#include "setup.hpp"

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (low <= high) {
          mid = low + ((high - low) / 2);

          if(target == nums[mid]) {
            return mid;
          }
          else if(target > nums[mid]) {
            low = mid + 1;
          }
          else {
            high = mid -1;
          }
        }
        return - 1;
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
    int result = sol.search(nums);
    print_input(result);    
    //print_input(nums);
    return 0;
}