Minimum Cost To Make Two Strings Identical

 int dp[1001][1001] ;
  int solve(string &x , string &y , int costx , int costy , int i , int j){
      if(i>=x.length() && j>=y.length()){
          return 0;
      }
      
      if(i>=x.length()){
          return costy*(y.length()-j);
      }
      if(j>=y.length()){
          return costx*(x.length()-i);
      }
      if(dp[i][j] != -1)
           return dp[i][j] ;
           
      if(x[i]==y[j]){
          return 0+solve(x , y , costx , costy , i+1 , j+1);
      }
      else{
          int op1= costx+ solve(x , y , costx , costy ,i+1 , j);
          int op2= costy+solve(x ,y , costx , costy , i , j+1);
          return dp[i][j] =min(op1 , op2);
      }
      
  }
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        
        memset(dp,-1,sizeof(dp));
        return solve(x , y , costX , costY , 0,0);
    }
