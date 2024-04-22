Q.Row with minimum number of 1's
code->int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int minrow=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    sum++;
                }
            }
            if(mini>sum){
                mini=sum;
                minrow=i+1;
            }
        }
        return minrow;
    }
Expected Time Complexity:O(n*m)
Expected Auxillary Space:O(1)
