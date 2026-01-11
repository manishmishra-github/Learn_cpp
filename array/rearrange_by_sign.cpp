#include "setup.hpp"

/*
:Every consecutive pair of integers have opposite signs.

:For all integers with the same sign, the order in which they were present in nums is preserved.

:The rearranged array begins with a positive integer.

Brute:- Go through array collect all positive and negative ints in seperate arrays.
Combine to give answer starting from pos. O(2N)

Did not think of this
Optimal: 
<-->
How you want your output
Start with pos, then neg, and there will always be pos and neg of equal count.
pos_ind = 0, 2, 4, 6 .. (2 * i)
neg_ind = 1, 3, 5, 7 .. (2 * i + 1)
<-->
nums = [2, 4, 5, -1, -3, -4]
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      
      int n = nums.size();
      vector<int>result(n, 0);

      int pos_ind = 0;
      int neg_ind = 1;

      for(int i = 0; i < n; i++) {
        if(nums[i] >= 0) {
          result[pos_ind] = nums[i];
          pos_ind += 2;
        }else {
          result[neg_ind] = nums[i];
          neg_ind += 2;
        }
      }
      return result;
    }
    vector<int> rearrangeArrayBrute(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        //vector<int>result;
        int n = nums.size();
        vector<int>result(n, 0);

        for(int i = 0; i < n; i++) {
          if(nums[i] < 0) {
            neg.push_back(nums[i]);
          } 
          else {
            pos.push_back(nums[i]);
          }
        }

        //print_input(neg);
        //print_input(pos);

        int i = 0;
        int j = 0;
        //[2,4,5][-1,-3,-4]
        while( ( i < pos.size() ) && ( j < neg.size() ) ) {
          result.push_back(pos[i]); //2
          result.push_back(neg[j]); //-1
          i++;
          j++;
        }

        while(i < pos.size()) {
          result.push_back(pos[i]);
          i++;
        }
        while(j < neg.size()) {
          result.push_back(neg[j]);
          j++;
        }
        return result;
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
    vector<int> result = sol.rearrangeArray(nums);
    print_input(result);    
    //print_input(nums);
    return 0;
}