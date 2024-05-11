Q.Juggler Sequence
code->class Solution {
  public:
    vector<int> jugglerSequence(int n) {
        // code here
        vector<int>ans;
        ans.push_back(n);
        while(n!=1){
            n= (n&1)?pow(n,1.5):pow(n,0.5);
            ans.push_back(n);
        }
        return ans;
        
    }
};
