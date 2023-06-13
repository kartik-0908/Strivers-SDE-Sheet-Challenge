#include <bits/stdc++.h> 
long long int cnt=0;

void help(long long *arr,int i,int j){
    if(i>=j)return ;
    int mid = (i+j)/2;
    help(arr,i,mid);
    help(arr,mid+1,j);

    vector<long long> temp;

    int p=i;
    int q=mid+1;

    while(p<=mid && q<=j){
        if(arr[p]<=arr[q]){
            temp.push_back(arr[p]);
            p++;
        }
        else {
            temp.push_back(arr[q]);
            cnt+=(mid-p+1);
            // cout<<i<<" "<<j<<endl;
            // cout<<arr[q]<<" "<<arr[p]<<endl;
            // cout<<(mid-p+1)<<endl;
            q++;
        }
    }
    while(p<=mid){
        temp.push_back(arr[p]);
        p++;
    }
    while(q<=j){
        temp.push_back(arr[q]);
        q++;
    }

    for(int k=i;k<=j;k++){
        arr[k] = temp[k-i];
    }
    return ;
}


long long getInversions(long long *arr, int n){
    // Write your code here.

    cnt=0;

    help(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    
cout<<endl;
    return cnt;

}
