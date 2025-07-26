#include "setup.hpp"

class Solution {
private: 
    vector<pair<int,int>> twoSum(const vector<int>& nums, int n, int target) {
         vector<pair<int,int>> ans;
        int i = 0; 
        int j = n - 1;
        while(i < j) {
            int sum = nums[i] + nums[j];
            if(sum > target) {
                j--;
                while(i < j && nums[j] == nums[j + 1]) {
                    j--;
                }
            }else if (sum < target) {
                i++;
                while(i < j && nums[i] == nums[i - 1]){
                    i++;
                }
            } else {
                ans.push_back(pair<int,int>{nums[i], nums[j]});
                i++;
                j--;
                while(i < j && nums[j] == nums[j + 1]) {
                    j--;
                }
                while(i < j && nums[i] == nums[i - 1]){
                    i++;
                }
            }
        }
        return ans;
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        

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

    int k;
    cin >> k;
    vector<vector<int>> result = sol.fourSum(nums, k);
    print_input_2(result);    
    //print_input(nums);
    return 0;
}