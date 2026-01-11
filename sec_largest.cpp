#include "setup.hpp"

class Solution {
public:
  int second_largest(vector<int> nums) {
      int large = nums[0];
      int sec_large = -1;

      for (int i = 1; i < nums.size(); i++) {
        if(large < nums[i]) {
          sec_large = large;
          large = nums[i];
        }
        else if((sec_large < nums[i]) && (nums[i] != large)) {
          sec_large = nums[i];
        }
      }
      return sec_large;
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
    int result = sol.second_largest(nums);
    //print_input(result);
    cout<<result;
    return 0;
}