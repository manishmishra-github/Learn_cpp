#include "setup.hpp"

/*
Given an integer array nums. Return all triplets such that:
i != j, i != k, and j != k
nums[i] + nums[j] + nums[k] == 0.

<-->
Brute:-
Have three loops
i = 0 ; i < n
j = i + 1; j < n
k = j + 1; k < n

check if nums[i] + nums[j] + nums[k] == 0.
if yes sort and store in a set (This takes O(nlog(n))) or use unordered set (O(1))

O(N3 + O(NlogN))
<-->


<-->
Better:-
a + b = -c
Basically for every pair you can search for a third element in a hash_set.
Few things Hashset should contain elemts only between I and J so that you dont pick same element thrice.
<-->

<-->
Optimal:-
Sort and Two pointer keeping I fixed.
<-->

Input: nums = [2, -2, 0, 3, -3, 5]
Output: [[-2, 0, 2], [-3, -2, 5], [-3, 0, 3]]

*/
class Solution {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> answer;

    int n = nums.size();

        //sort the array
    sort(nums.begin(), nums.end());

        //now fix I

    for(int i = 0; i < n; i++) {
      //break if nums[i] > 0 No sols possible
      if(nums[i] > 0){break;}
          //because we do not need duplicates
      if( (i > 0) && (nums[i] == nums[i - 1]) ) {
        continue;
      }

      int j = i + 1;
      int k = n -1;
      while(j < k) {
        int sum = nums[i] + nums[j] + nums[k];

        if(sum == 0) {
          answer.push_back({nums[i],nums[j],nums[k]});

            //skip duplicate js
          while((j < k) && (nums[j] == nums[j + 1])) {
            j++;
          }
          j++;

            //skip duplicate ks
          while((j < k) && (nums[k] == nums[k - 1])) {
            k--;
          }
          k--;
        }

        else if (sum < 0) {
                j++;
            }
            else {
                k--;
            }
      }
    }
    return answer;
  }

  vector<vector<int>> threeSumBrute(vector<int>& nums) {
    set<vector<int>>ans;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
          if((nums[i] + nums[j] + nums[k]) == 0) {
            vector<int> trip = {nums[i], nums[j], nums[k]};

                //sort
            sort(trip.begin(), trip.end());
            ans.insert(trip);
          }
        }
      }
    }

    vector<vector<int>>answer(ans.begin(), ans.end());

    return answer;

  }

  vector<vector<int>> threeSumBetter(vector<int>& nums) {

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