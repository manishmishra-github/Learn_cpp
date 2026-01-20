#include "setup.hpp"

// lb = lower_bound (arr.begin(), arr.end()) 
//Returns iterator so need to substact arr.begin ();
class Solution {
  public :
  int lowerBound(vector<int>& nums, int target) {
    //cout << target;
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid = 0;
    int ans = n;

    while(low <= high) {
      mid = low + (high - low) / 2;
      cout << "mid is " << mid << " value is "<< nums[mid]<< endl;
      if(nums[mid] == target) {
        return mid;
      }
      else if(nums[mid] > target) {
        ans = mid;
        high = mid - 1;
        cout << "ans can be "<< ans << " high is now " << high<< endl;
      }
      else {
        low = mid + 1;
      }
    }
      return ans;
  }
};


int main() {
    vector<int> nums;
  
    //vector<int> nums2;
    
    Solution sol;
    read_from_input(nums);
    int target;
    cin >> target;
      //print_input(nums);
    //read_from_input(nums2);
    //print_input(nums2);

    //int k;
    //cin >> k;
    int result = sol.lowerBound(nums, target);
    cout<<result;    
    //print_input(nums);
    return 0;
}