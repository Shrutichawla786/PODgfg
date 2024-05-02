Q.Serialize and deserialize a binary tree
code-->class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int>v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node * node = q.front();
            q.pop();
            if(node){
                v.push_back(node->data);
            }
            else{
                v.push_back(-1);
            }
            if(node){
                q.push(node->left);
                q.push(node->right);
            }
            
        }
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       Node * root= new Node(A[0]);
       queue<Node*>q;
       q.push(root);
       int i=1;
       
       while(!q.empty() and i<A.size()){
           Node * node = q.front();
           q.pop();
           bool FR=0;
           bool FL=0;
           if(A[i]==-1){
               node->left = NULL;
               FL=1;
           }
           if(A[i+1]==-1){
               node->right = NULL;
               FR=1;
           }
       
       if(!FL){
           Node * newnode= new Node(A[i]);
           node->left = newnode;
           q.push(newnode);
       }
       if(!FR){
           Node * newnode = new Node(A[i+1]);
           node->right =newnode;
           q.push(newnode);
       }
       i+=2;
       }
       return root;
    }

};
Expected Time Complexity: O(Number of nodes).
Expected Auxiliary Space: O(Number of nodes).
