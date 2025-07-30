#include "setup.hpp"


/*Brute force is to loop for each element and check if it is gretaer than something on right o(n ^ 2)*/
/*
take advantage of merge sort
basically if you have two sorted arrays (which you get at end of divide part of merge sort.)
[2,3,4] [1,6,7]
2>1 -->implies 3>1 4>1 so 3 pairs;
so basically perform merge sort (n log n) 
when merging at the end if left part is bigger count increase by all elements in left array after this point.
*/
class Solution {
private:
	void merge(vector<int>&nums, int low, int mid, int high) {
		int left = low;
		int right = mid + 1;
		vector<int> temp;
		while(left <= mid && right <= high) {
			if(nums[left] <= nums[right]) {
				temp.push_back(nums[left]);
				cout << "Pushing "<< nums[left] << endl;
				left++;
			} else {
				temp.push_back(nums[right]);
				cout << "Pushing "<< nums[right] << endl;
				count += (mid - left + 1);
				right++;
			}
		}

		while(left <= mid) {
			temp.push_back(nums[left]);
			cout << "Pushing left "<< nums[left] << endl;
			left++;
		}

		while(right <= high) {
			temp.push_back(nums[right]);
			cout << "Pushing right "<< nums[right] << endl;
			right++;
		}
		for(int i = low; i <= high; i++) {
			nums[i] = temp[i - low];
		}
	}
	void merge_sort(vector<int>&nums, int low, int high) {
		int mid = (low + high) / 2;

		if(low == high) {
			return;
		}

		merge_sort(nums, low, mid);
		merge_sort(nums, mid + 1, high);
		merge(nums, low, mid, high);
	}

public:
	long long int count = 0;
   long long int numberOfInversions(vector<int> nums) {
   		//merge sort
   		int n = nums.size();
   		merge_sort(nums, 0, n - 1);
   		print_input(nums);
   		return count;
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
    long long int result = sol.numberOfInversions(nums);
    cout<<result;
    //print_input_2(result);    
    //////print_input(nums);
    return 0;
}