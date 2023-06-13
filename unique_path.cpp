#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	m--;
	n--;

	if(min(m,n)==0){
		return 1;
	}
	long long int ans=1;
	for(int i=m+n;i>=(m+1);i--){
		ans*=i;
	}
	for(int i=1;i<=n;i++){
		ans/=i;
	}
	return ans;
}
