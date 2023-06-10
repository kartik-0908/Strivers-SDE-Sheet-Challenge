#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    long long int a[n];
    long long int ans=0;

    if(arr[0]<0)a[0]=0;
    else a[0]=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]+a[i-1]<0){
            a[i]=0;
        }
        else {
            a[i] = a[i-1]+arr[i];
        }
        ans = max(ans,a[i]);
    }

    ans = max(a[0],ans);
    return ans;
}
