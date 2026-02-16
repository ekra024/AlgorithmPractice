#include<bits/stdc++.h>
using namespace std;

int doPartition(vector<int>&nums, int low, int high)
{
    int pivot = nums[high];
    int i = low-1;

    for(int j = low; j < high; j++) {
        if(nums[j] <= pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i+1], nums[high]);
    return i+1;
}

void QuickSort(vector<int>&nums, int low, int high) {
    if(low >= high) return;

    int Partition = doPartition(nums, low, high);

    QuickSort(nums, low, Partition-1);
    QuickSort(nums, Partition+1, high);

}

void quick_sort(vector<int>&nums)
{
    QuickSort(nums, 0, nums.size()-1);
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

    quick_sort(nums);
    Print(nums);
}
