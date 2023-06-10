#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();

	set<int> row,col;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row.insert(i);
				col.insert(j);
			}
		}
	}

	for(auto x:row){
		for(int i=0;i<m;i++)matrix[x][i]=0;
	}

	for(auto x:col){
		for(int i=0;i<n;i++)matrix[i][x]=0;
	}

	return ;

}
