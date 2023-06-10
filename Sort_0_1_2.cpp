#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here

        int l=0;
        int r=n-1;
        int mid=0;

        while(mid<=r){
            if(nums[mid]==1){
                mid++;
                continue;
            }
            else if(nums[mid]==0)swap(nums[mid++],nums[l++]);
            else swap(nums[mid],nums[r--]);
        }
        return ;
}
