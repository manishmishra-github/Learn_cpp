#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        int n = nums.size();
        //cout << n << endl;
        for(int i = 0; i < nums.size(); i++) {
            //cout << nums[i] << endl;
            if(nums[i] == 1) {
                count++;
                if(count > max) {
                    max = count;
                }
                //cout << count << max << endl;
            }
            else {
                count = 0;
            }
        }
        return max;
    }
};

int main()
{
    int n;
    cin >> n;
    //cout << n << endl;
    vector<int> arr;
    int x;
    Solution sol;
    for(int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
        //cout << arr[i] << endl;
    }

    cout << sol.findMaxConsecutiveOnes(arr);

    return 0;
}