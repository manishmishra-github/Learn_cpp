#include "setup.hpp"

/*
Dutch National flag algo
low mid high -- works on 3 distinct elements array
low at 0 mid at 0 high at n -1
while loop till mid < high
chcek a[mid] == 0 --> swap with low (now we know low is 0) move low++
and mid ++
a[mid] == 1 correct place --> move mid++
a[mid] > 2 swap with high --> move high --
*/
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n -1;

        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } else if(nums[mid] == 1) {
                mid++;
            } else if(nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
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
    sol.sortZeroOneTwo(nums);
    print_input(nums);    
    //print_input(nums);
    return 0;
}