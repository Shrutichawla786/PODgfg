int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n = a.size();
        int maxi=0;
        for(int i =0;i<n;i++){
            maxi=max(maxi , a[i]);
        }
        return maxi;
    }
