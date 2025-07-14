#include "setup.hpp"
// the concept is prefix sum
// calculate running sum of the array
// at any point check sum -k is previously found or not
// means I can remove that portion of prefix sum, to get k
// 1,1,1
// 1 --> 1
// 2 --> 1 --> matches k
// 3 --> 1 ==> 3 -2 = 1 found before, that means if I remove the first 1, i get 2. 

int subarraySumHelper(vector<int>& nums, int k) {
    
        int count = 0;
        int sum = 0;
        unordered_map<int, int> hash;
        hash.insert({0,1});

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            
                int diff = sum - k;
                auto it = hash.find(diff);
                if(it != hash.end()) {
                    count += it->second;
                }
            
            hash[sum]++;
        }
        return count;
    }

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        return subarraySumHelper(nums, k);
    }
};


int main() {
    vector<int> nums;
    Solution sol;
    read_from_input(nums);

    int k;
    cin >> k;

    cout << sol.subarraySum(nums, k);
    //print_input(nums);
    return 0;
}