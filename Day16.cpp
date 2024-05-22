Q.Minimize Max Distance to Gas Station

int no(double dist , vector<int>&arr){
      int cnt=0;
      for(int i=1;i<arr.size();i++){
          int nInBwt=((arr[i]-arr[i-1])/dist);
          if(arr[i]-arr[i-1]/dist== nInBwt*dist){
              nInBwt++;
          }
          cnt+=nInBwt;
        }
        return cnt;
  }
    double findSmallestMaxDist(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        double low=0;
        double high=0;
        for(int i=0;i<n-1;i++){
            high = max(high ,(double)(arr[i+1]-arr[i]));
        }
        
        double diff= 1e-6;
        while(high-low>diff){
            double mid= (low+high)/(2.0);
            int cnt= no(mid , arr);
            if(cnt>k){
                low=mid;
            }
            else{
                high= mid;
            }
        }
        return high;
    }
