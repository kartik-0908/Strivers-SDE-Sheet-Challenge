#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.

    int ans=0;
    int n = prices.size();

    int buy=prices[0];

    for(int i=1;i<n;i++){
        if(prices[i]<buy){
            buy = prices[i];
        }
        else {
            ans = max(ans,prices[i]-buy);
        }
    }
    return ans;
}
