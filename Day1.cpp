Reverse Level Order Traversal
code-->void level(Node * root , vector<int>&ans){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node * front= q.front();
        q.pop();
        ans.push_back(front->data);
        if(front->right){
            q.push(front->right);
        }
        if(front->left){
            q.push(front->left);
        }

    }
    
}
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    level(root , ans);
    reverse(ans.begin() , ans.end());
    return ans;
    
    
}
