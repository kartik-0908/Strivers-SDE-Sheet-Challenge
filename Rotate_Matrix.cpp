#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here

    int last = mat[0][0];

    int i=0;
    int j=n-1;
    int p=0;
    int q=m-1;

    while(i<j && p<q){
        int last = mat[i][p];
        for(int k=p+1;k<=q;k++){
            swap(mat[i][k],last);
        }
        for(int k=i+1;k<=j;k++){
            swap(mat[k][q],last);
        }
        for(int k=q-1;k>=p;k--){
            swap(mat[j][k],last);
        }
        for(int k=j-1;k>=i;k--){
            swap(mat[k][p],last);
        }
        i++;
        p++;
        q--;
        j--;
    }


}
