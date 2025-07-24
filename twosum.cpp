#include "setup.hpp"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        //Okay so I can keep track of all the numbers that I see in a map
        unordered_map<int, int>seen;
        for(int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if(auto it = seen.find(diff); it != seen.end()) {
                result.push_back(it->second);
                result.push_back(i);
            }
            else {
                seen[nums[i]] = i;
            }
        }
        return result;
    }
};


int main() {
    vector<int> nums;
    
    Solution sol;
    read_from_input(nums);
      //print_input(nums);

    int target;
    cin >> target;
    vector<int> result = sol.twoSum(nums, target);
    print_input(result);    
    //print_input(nums);
    return 0;
}