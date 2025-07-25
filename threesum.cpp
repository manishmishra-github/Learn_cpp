#include "setup.hpp"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        //print_input(nums);
        for(int i = 0; i < n; ++i) {
            unordered_map<int>mmap;
            j = i + 1;
            k = n - 1;

            while (j < k) {
                
            }

        }
        
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
    vector<vector<int>> result = sol.threeSum(nums);
    print_input_2(result);    
    //print_input(nums);
    return 0;
}