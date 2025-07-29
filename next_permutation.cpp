#include "setup.hpp"

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
       int peak_idx = -1;

       for(int i = n - 2; i >= 0; i--) {
       		if(nums[i] < nums[i+1]) {
       			peak_idx = i;
       			break;
       		}
       }

       if(peak_idx == -1) {
       		reverse(nums.begin(), nums.end());
       		return;
       }

       //search through n -1 till peak_idx for num > nums[peak_idx] but smallest.

       for(int j = n - 1; j > peak_idx; j--) {
       		if(nums[j] > nums[peak_idx]) {
       			swap(nums[j], nums[peak_idx]);
       			break;
       		}
       }

       //reverse the rest of array to get the smallest possible combination
       reverse(nums.begin() + peak_idx + 1, nums.end());

       return;
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
    sol.nextPermutation(nums);
    print_input(nums);    
    //print_input(nums);
    return 0;
}
