#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&nums) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 1; j < nums.size()-i; j++) {
            if(nums[j-1] > nums[j]) {
                swap(nums[j-1], nums[j]);
            }
        }
    }
}

void Print(vector<int>nums) {
    for(int i = 0; i < nums.size(); i++)
        cout<< nums[i]<<' ';
    cout<<'\n';
}

int main()
{
    int n; cin >> n;
    vector<int>nums(n);

    for(int i = 0; i < n; i++) cin >> nums[i];

    bubbleSort(nums);
    Print(nums);
}

