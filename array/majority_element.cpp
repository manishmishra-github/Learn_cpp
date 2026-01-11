#include "setup.hpp"

/*
Brute is take one element and check how many times it exists.

Better is use a hashmap to store freq and then check which one is more than n/2

Best is Moore voting algo
<-->
	intution is that select an elemnet as your candidate and keep on increasing a count if you see candidate
	otherwise reduce count, if count == 0 that means till that point the array has no maj. elem
	start form next element again
	at the end the candidate with count > 0 will be majority if it exists.
	So if unclear iterate again and count the candidate to confirm maj. elem.
<-->

nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int candidate = INT_MAX;
        int count = 0;

        for (int i = 0; i < n; i++) {
        	if(count == 0) {
        		count = 1;
        		candidate = nums[i];
        	}
        	else if (candidate == nums[i]) {
        		count++;
        	}
        	else {
        		count--;
        	}
        }
       	// There exists a candidate with positive count so this could be maj.
        if(count > 0) {
        	return candidate;
        }
        return -1;
    }
};

int main() {

	return 0;
}