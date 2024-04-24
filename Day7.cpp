Q.Paths to reach origin
code-->nt help(int i ,int j ,vector<vector<int>>& memo){
        if(i==0 and j==0){
            return 1;
        }
        if(i<0 or j<0){
            return 0;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        int a= help(i-1 ,j , memo) ;
        int b =help(i , j-1 ,memo);
        return memo[i][j]= (a+b )%mod;
    }
    int ways(int x, int y)
    {
        //code here.
        vector<vector<int>> memo(x+1 , vector<int>(y+1 ,-1));
        return help(x ,y , memo);
    }
Expected Time Complexity: O(x*y).
Expected Auxiliary Space: O(x*y).
