#include "setup.hpp"
#include <climits>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long maxi = INT_MIN;
        int sum = 0;

        for(int i = 0; i < n; ++i) {
            sum += nums[i];
            if(sum > maxi) {
                maxi = sum;
            }

            if(sum < 0) {
                sum = 0;
            }
        }
        return maxi;
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
    int result = sol.maxSubArray(nums);
    cout<<result;
    //print_input(result);    
    //print_input(nums);
    return 0;
}