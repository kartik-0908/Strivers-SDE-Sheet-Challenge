#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.

  vector<vector<long long int>> ans(n);

  ans[0].push_back(1);

  for(int i=1;i<n;i++){
    int len = i;
    ans[i].push_back(1);
    for(int j=0;j<len-1;j++){
      ans[i].push_back(ans[i-1][j]+ans[i-1][j+1]);
    }
    ans[i].push_back(1);
  }

  return ans;


}
