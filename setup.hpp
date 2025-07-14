#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    void read_from_input(vector<int> &nums) {
        int n;
        cin >> n;
        //cout << n << endl;
        int x;
        
        for(int i = 0; i < n; i++) {
            cin >> x;
            nums.push_back(x);
            //cout << arr[i] << endl;
        }
    } 

    void print_input(vector<int> &nums) {
        //cout << nums.size();
        for(int i = 0; i < nums.size(); i++) {
            cout << nums[i] << endl;
        }
    }