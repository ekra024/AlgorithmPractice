#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&nums)
{
    for(int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i-1;

        while(j >= 0 && nums[j]>key) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
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

    InsertionSort(nums);
    Print(nums);
}
