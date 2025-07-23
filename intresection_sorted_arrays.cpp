#include "setup.hpp"

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        //print_input(nums1);
        //print_input(nums2);
        //cout << n1;
        while(i < n1 && j < n2) {
            //cout << nums1[i] << nums2[j]<< endl;
            if(nums1[i] == nums2[j]) {
                //cout << "hello";
                result.push_back(nums1[i]);
                i++;
                j++;
            } else if(nums1[i] > nums2[j]) {
                j++;
            } else {
                i++;
            }
    }
            return result;
}
};


int main() {
    vector<int> nums;
    vector<int> nums2;
    Solution sol;
    read_from_input(nums);
    read_from_input(nums2);

    int k;
    cin >> k;
    vector<int> result = sol.intersectionArray(nums, nums2);
    print_input(result);    
    //print_input(nums);
    return 0;
}