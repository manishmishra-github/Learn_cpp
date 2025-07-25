#include "setup.hpp"

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int i;
      for(i = 0; i < nums.size(); ++i) {
        if(nums[i] == val) {
          break;
        }
      }
      if(i == nums.size() - 1) {
        return i;
      }

      for(int j = i + 1; j < nums.size(); ++j) {
        if(nums[j] != val) {
          swap(nums[i], nums[j]);
          i++;

        }
      }
      return i;
    }
};

int main() {
    vector<int> nums;
  
    
    Solution sol;
    read_from_input(nums);
      //print_input(nums);
    //print_input(nums2);

    int k;
    cin >> k;
    int result = sol.removeElement(nums, k);
    cout << result;
    //print_input(result);    
    //print_input(nums);
    return 0;
}