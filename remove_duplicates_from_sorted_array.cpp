#include "setup.hpp"

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();

      int i = 0;
      int j = 0;

      
        
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
    int result = sol.removeDuplicates(nums);
    //print_input(result);    
    //print_input(nums);
    std::cout << result;
    return 0;
}