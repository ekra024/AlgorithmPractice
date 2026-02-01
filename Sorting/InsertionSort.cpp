#include<bits/stdc++.h>
using namespace std;



void Print(vector<int>ans)
{
    for(auto it: ans)
        cout << it <<' ';
    cout<<'\n';
}

void InsertionSort(vector<int>&nums)
{
    for(int i = 1; i < nums.size(); i++) {
        int key = nums[i];
        int j = i-1;
        while(j >= 0 && nums[j] > key) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    InsertionSort(nums);

    Print(nums);
}

