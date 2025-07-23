#include "setup.hpp"

class Solution {
 public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                if (result.size() == 0 || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
            } else {
                if (result.size() == 0 || result.back() != nums2[j]) {
                    result.push_back(nums2[j]);
                }
                j++;
            }
        }

        while (i < n1) {
            if (result.size() == 0 || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }

        while (j < n2) {
            if (result.size() == 0 || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }

        return result;
    }
};


int main() {
    vector<int> nums;
  
    vector<int> nums2;
    
    Solution sol;
    read_from_input(nums);
      //print_input(nums);
    read_from_input(nums2);
    //print_input(nums2);

    int k;
    cin >> k;
    vector<int> result = sol.unionArray(nums, nums2);
    print_input(result);    
    //print_input(nums);
    return 0;
}