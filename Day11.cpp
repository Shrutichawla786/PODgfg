Q.Find Pair Given Difference
code-->
class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_map<int , int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(x==0 && mp[arr[i]]==2){
                return 1;
            }
        }
        if(x==0){
            return -1;
        }
        for(auto it:mp){
            if(mp.find(x+it.first)!= mp.end()){
                return true;
            }
        }
        return -1;
    }
};
