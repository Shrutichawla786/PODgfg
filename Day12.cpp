Q.K distance from root
code-->class Solution
{
    public:
    // function should print the nodes at k distance from root
    void solve(Node * root , int k , vector<int>&ans){
        if(root==NULL){
            return;
        }
        if(k==0){
            ans.push_back(root->data);
        }
        solve(root->left , k-1 , ans);
        solve(root->right , k-1 , ans);
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int>ans;
      if(!root){
          return {};
          
      }
      solve(root  , k , ans);
      return ans;
    }
};
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(Height of the Tree).
