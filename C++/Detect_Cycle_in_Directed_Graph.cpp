// To detect cycle in an directed graph
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool CheckforCycle(int i,vector<int>adj[],int vis[],int dfsVis[]){
        vis[i] = 1;
        dfsVis[i]=1;
        for(auto it : adj[i]){
            if(!vis[it]){
                if(CheckforCycle(it,adj,vis,dfsVis))return true;
            }
            else if(dfsVis[it])return true;
        }
        dfsVis[i]=0;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        
        int vis[V],dfsVis[V];
        memset(vis,0,sizeof vis);
        memset(dfsVis,0,sizeof dfsVis);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(CheckforCycle(i,adj,vis,dfsVis))return true;
            }
        }
        return false;
    }
};


int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
