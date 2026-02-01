#include<bits/stdc++.h>
using namespace std;

void Print(vector<int>ans)
{
    for(auto it: ans)
        cout << it <<' ';
    cout<<'\n';
}

vector<int>MergeSort(vector<int>nums)
{
    if(nums.size() <= 1) return nums;
    int mid = nums.size()/2;

    vector<int>first;
    vector<int>second;

    for(int i = 0; i < mid; i++)first.push_back(nums[i]);
    for(int i = mid; i < nums.size(); i++)second.push_back(nums[i]);

    vector<int>sortedFirst = MergeSort(first);
    vector<int>sortedSecond = MergeSort(second);

    int l=0, r=0;
    vector<int>ans;

    for(int i = 0; i < nums.size(); i++) {
        if(l == sortedFirst.size()) {
            ans.push_back(sortedSecond[r]);
            r++;
        }
        else if(r == sortedSecond.size()) {
            ans.push_back(sortedFirst[l]);
            l++;
        }
        else if(sortedFirst[l]<=sortedSecond[r]) {
            ans.push_back(sortedFirst[l]);
            l++;
        }
        else {
            ans.push_back(sortedSecond[r]);
            r++;
        }
    }
    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    vector<int>ans= MergeSort(nums);

    Print(ans);
}


