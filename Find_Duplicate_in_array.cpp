#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	map<int,int> mp;

	for(int i=0;i<n;i++){
		if(mp[arr[i]]==1)return arr[i];
		mp[arr[i]]=1;
	}

}
