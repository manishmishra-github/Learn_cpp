#include "setup.hpp"

class Solution {
private:
    void merge(vector<int>& nums, int low, int mid, int high) {
        
    }

    void mergeSortHelper(vector<int>& nums, int low, int high) {

        if(low >= high) {
            return;
        }

        int mid = (low + high) / 2;

        mergeSortHelper(nums,low, mid);
        mergeSortHelper(nums,mid + 1, high);
        merge(nums, low, mid, high);
    }
public:
    void mergeSort(vector<int>& nums) {
        int n = nums.size();
        mergeSortHelper(nums, 0, n - 1);

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
    sol.mergeSort(nums);
    print_input(nums);    
    //print_input(nums);
    return 0;
}