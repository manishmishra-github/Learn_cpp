#include "setup.hpp"

class Solution {
  
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
    vector<int> result = sol.unionArray(nums);
    print_input(result);    
    //print_input(nums);
    return 0;
}