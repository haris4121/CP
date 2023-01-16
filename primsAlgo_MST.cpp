#include<limits.h>
#include<vector>
#include<queue>


vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    //make adj list
    vector<pair<int,int>> adj[n+1];
    for(auto i:g){
       int u = i.first.first;
        int v = i.first.second;
        int w = i.second;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
         
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
    vector<int> parant(n+1,-1);
    vector<bool> mst(n+1,false);
    vector<int> key(n+1,INT_MAX);
    
    key[1] = 0;
    
    
    pq.push({0,1});
    while(!pq.empty()){
            
//             int mini = INT_MAX;
//             int node;
//             for(int i=1;i<=n;i++){
//               if(!mst[i] && key[i]<mini){
//                   mini = key[i];
//                   node = i;
//               }
//             }
        int node = pq.top().second;
       
            pq.pop();
            
            mst[node] = true;
            for(auto neighbour : adj[node]){
                if(!mst[neighbour.first] && key[neighbour.first] > neighbour.second){
                   key[neighbour.first] = neighbour.second;
                   parant[neighbour.first] = node;
                   pq.push({key[neighbour.first],neighbour.first});
                   
                }
                
                
            }
            
            
            
            
            
        }
vector<pair<pair<int, int>, int>> sol;
    
    for(int i =2;i<=n;i++){//reason for 1 paranta is not defined and this is actually number of edges which is 1 less than nodes
        sol.push_back({{parant[i],i},key[i]});
        
    }
    
    return sol;
    
}
