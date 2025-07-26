#include "setup.hpp"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        print_input(nums);
        for(int i = 0; i < n - 2; ++i) {
            //set<int>mmap;

            if(i != 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int j = i + 1;
            int k = n - 1;
            cout << "i = "<< i <<" j = " << j << " k = " << k << endl << "start run" << endl;
            while (j < k) {  
                int sum = nums[i] + nums[j] + nums[k];
                cout << "i = "<< i <<" j = " << j << " k = " << k << " SUM  = " << sum <<endl;
                if (sum > 0) {
                    k--;
                    while(k > j &&  nums[k] == nums[k + 1]) {
                        k--;
                    }
                    
                } else if (sum < 0) {
                    j++;
                    while(j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                } else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    while(k > j && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
                
            }
            cout << "END LOOP" << endl;

        }
        return ans;
        
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