#include "setup.hpp"
/*

*/


class Solution {
public:
    int floorSqrt(int n)  {
        cout << n;
       int low = 1;
       int high = n / 2;
       int ans = 1;
       long long mid;
       while (low <= high) {
        //return 1;
         mid = low + (high - low) / 2;
         cout << mid;

         if(mid * mid == n) {
             return mid;
         }
         else if( mid * mid < n) {
             ans = mid;
             low = mid + 1;
         }
         else {
             high = mid -1;
         }
      }
      return ans;
    }
};


int main() {
    vector<int> nums;
  
    //vector<int> nums2;
    
    Solution sol;
    
    int target;
    cin >> target;
    cout << target;
      //print_input(nums);
    //read_from_input(nums2);
    //print_input(nums2);

    //int k;
    //cin >> k;
    int result = sol.floorSqrt(target);
    cout<<result;    
    //print_input(nums);
    return 0;
}