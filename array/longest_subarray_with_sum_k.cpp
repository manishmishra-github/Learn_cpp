#include "setup.hpp"
/*
Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. 
If no such sub-array exists, return 0.

<-->
Brute:-
generate all subarrays (contigius part)
Loop I till n -1
Loop j i+1 till n -1

if sum ==k count elements

distance b/w i till j
(j - i) + 1

<-->

<-->
Better:-
Prefix sum
Keep sum till I and the index that sum is seen at in a hashmap
wherever you are get the sum till there and check if sum - k exists in hashmap
if yes then that is a subarray with sum k.

S = 0, len = 0
S = 10 [10, 0]
S = 15 ==> len = 2 [{15,1}, {10,0}] 
S = 13, find 2 not there  [{13,2},{15,1}, {10,0}]
S = 15 --> len ==4
...
<-->

                0  1  2  3  4  5
Input: nums = [10, 5, -2, 2, -2 , 2, 5, 2, 7, 1, 9],  k=15
Output: 4
*/

class Solution{
public:
  int longestSubarrayPositivesZero(vector<int> &nums, int k){
    return max;
  }
    int longestSubarrayBetter(vector<int> &nums, int k){
      int prefix_sum = 0;
      map<int,int>mmap;
      int max = 0;
      int len = 0;

      for(int i = 0; i < nums.size(); i++) {
        cout << nums[i]<< endl;
        prefix_sum += nums[i];
        if(k == prefix_sum) {
            len = i + 1;
            if(len > max) {
              max = len;
            }
        }
        
            if(mmap.find(prefix_sum - k) != mmap.end()) {
                len = (i - mmap[prefix_sum - k]);
                if(len > max) {
                  max = len;
                }
            }
        
        if(mmap.find(prefix_sum) == mmap.end()) {
        mmap[prefix_sum] =  i;
        cout << prefix_sum << " " << i << endl;
    }
      }
      return max;

    }

    int longestSubarrayBrute(vector<int> &nums, int k){
        int max = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
          int sum = 0;
 
          for(int j = i; j < n; j++) {
              sum += nums[j];

              if(sum == k) {
                int count = (j - i) + 1;
                if(count > max) {
                  max = count;  
                }
              }
          }
        }
        return max;
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
    int result = sol.longestSubarrayBetter(nums, 15);
    cout<<result;
    //print_input(result);    
    //print_input(nums);
    return 0;
}