


class Solution {
  public:
  static bool cmp (pair<int,int>a,pair<int,int>b){
      if(a.first==b.first)
          return a.second>b.second;
      return a.first<b.first;      
          
  }
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
             v.push_back({abs(arr[i]-x),arr[i]});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        for(int i=0;i<k;i++){
            if(v[i].second==x)
             continue;
             ans.push_back(v[i].second);
             
        }
        if(ans.size()<k){
            ans.push_back(v[k].second);
        }
        return ans;
    }
};

