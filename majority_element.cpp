#include "setup.hpp"

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = nums[0];
        int count = 1;

        for(int i = 1; i < n; ++i) {
            if(nums[i] == candidate) {
                count++;
            } else {
                count--;
            }

            if(count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }

        return candidate;
    }
};


int main() {
    vector<int> nums;
  
    //vector<int> nums2;
    
    Solution sol;
    read_from_input(nums);
      print_input(nums);
    //read_from_input(nums2);
    //print_input(nums2);

    //int k;
    //cin >> k;
    int result = sol.majorityElement(nums);
    cout << result;
    //print_input(result);    
    //print_input(nums);
    return 0;
}