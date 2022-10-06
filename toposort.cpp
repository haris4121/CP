	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int> indegree(V ,0);
	
	   
	   for(int i = 0;i<V;i++){
	       for(auto x:adj[i])
	            indegree[x]++;
	   }
	   vector<int> sol;
	   queue<int> q;
	   for(int i = 0;i<V;i++){
	     if(indegree[i] == 0)
	        q.push(i);
	   }
	   
	 
	   while(!q.empty()){
	       int node = q.front();
	       q.pop();
	       sol.push_back(node);
	       for(auto ngh:adj[node]){
	           indegree[ngh]--;
	           if(indegree[ngh] == 0) 
	                q.push(ngh);
	           
	       }
	       
	   }
	   
	   
	   return sol;
	   
	  
	}