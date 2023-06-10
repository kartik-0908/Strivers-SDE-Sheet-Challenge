#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &vt, int n)
{
    //  Write your code here.

    vector<int> ans(n,0);

    int ind=-1;

    for(int i=n-2;i>=0;i--){
        if(vt[i]<vt[i+1]){
            ind =i;
            break;
        }
    }

    if(ind==-1){
        for(int i=0;i<n;i++){
            ans[i] = i+1;
        }
        return ans;
    }

    int mini = INT_MAX;
    int in=-1;

    for(int i=ind+1;i<n;i++){
        if(vt[i]<mini && vt[i]>vt[ind]){
            in = i;
            mini = vt[i];
        }
    }

    swap(vt[ind],vt[in]);

    sort(vt.begin()+ind+1,vt.end());

    return vt;





}
