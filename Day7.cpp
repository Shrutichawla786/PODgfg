
public:
  void dfs(map<int,list<int>>&adj_list,vector<int>&visited,int i,int &ct1,int &ct2){
      visited[i]=1;
      ct1++;
      for(auto it:adj_list[i]){
          ct2++;
          if(!visited[it]){
              dfs(adj_list,visited,it,ct1,ct2);
          }
      }
  }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
       vector<int>visited(v+1,0);
       map<int,list<int>>adj_list;
       for(auto it:edges){
           adj_list[it[0]].push_back(it[1]);
           adj_list[it[1]].push_back(it[0]);
       }
       int ans=0;
       for(int i=1;i<=v;i++){
           if(!visited[i]){
               int ct1=0;
               int ct2=0;
               dfs(adj_list,visited,i,ct1,ct2);
               
               if((ct1*(ct1-1))==ct2)ans++;
           }
       }
       return ans;
    }
