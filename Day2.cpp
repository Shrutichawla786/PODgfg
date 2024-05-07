Q.Root to Leaf Paths
code->

class Solution {
  public:
  void solve(Node* root,vector<vector<int>>&path,vector<int>currentpath){
      if(root==NULL){
          return ;
      }
      currentpath.push_back(root->data);
      if(root->left==NULL &&root->right==NULL){
          path.push_back(currentpath);
      }
      solve(root->left , path , currentpath);
      solve(root->right , path , currentpath);
      currentpath.pop_back();
  }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>path;
        vector<int>currentpath;
        solve(root , path , currentpath);
        return path;
    }
};
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(height of the tree)

