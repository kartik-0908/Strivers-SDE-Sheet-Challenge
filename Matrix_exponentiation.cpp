#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.

	if(n==0)return 1;

	long long int temp =x;
	long long ans=1;

	while(n){
		if(n&1){
			ans*=(temp%m);
			ans = ans%m;
		}
		n = n>>1;
		temp*=temp;
		temp = temp%m;
	}
	return ans%m;
}
