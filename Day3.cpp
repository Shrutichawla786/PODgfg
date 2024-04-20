Q.Union of Two Sorted Arrays
code--> vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        for(int j=0;j<m;j++){
            s.insert(arr2[j]);
        }
        vector<int>ans;
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
Expected Time Complexity: O(n+m).
Expected Auxiliary Space: O(n+m).
