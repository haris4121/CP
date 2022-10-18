



int djiks(vector<vector<int>>& edges, int n, int src,int des) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<pair<int,int>> adj[n+1];
        
        for(auto v:edges){
                int n1 = v[0];
                int n2 = v[1];
                int t = v[2];
                
                 adj[n1].push_back({n2,t});
        }
        
        priority_queue<pair<int,int> ,vector<pair<int,int>>,cmp > pq;//node,distance
        
        vector<int> distances(n+1,1e9);
        distances[src]  =  0;
        pq.push({src,0});
        
        while(!pq.empty()){
            
            auto it = pq.top();
            pq.pop();
            int dis_upto = it.second;
            int node = it.first;
            
            for(auto it:adj[node]){
                int ngh = it.first;
                int w = it.second;
                if(distances[ngh] > dis_upto + w){
                    distances[ngh] = dis_upto + w;
                    pq.push({ngh,distances[ngh]});
                }
                
            }
            
            
            
            
        }
    
        
       return distances[des];
        
    }