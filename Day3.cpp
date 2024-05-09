Q.Divisor Game
code-->
  bool solve(int n){
      if(n<=1){
          return false;
      }
      for(int i=1;i<n;i++){
          if(n%i==0){
             return !solve(n-i);
          }
      }
      return false;
  }
    bool divisorGame(int n) {
        // code here
        return solve(n);
    
    }
