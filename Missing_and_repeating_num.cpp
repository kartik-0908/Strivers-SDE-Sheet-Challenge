#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int rep;
	map<int,int> mp;

	for(int i=0;i<n;i++){
		if(mp[arr[i]]==1)rep = arr[i];
		mp[arr[i]]=1;
	}
	for(int i=1;i<=n;i++){
		if(mp[i]==0){
			return {i,rep};
		}
	}
	
}
