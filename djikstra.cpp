class cmp{
    public:
    bool operator()(const pair<int,int> &p1,const pair<int,int> &p2){
        if(p1.first != p2.first)
            return p1.first > p2.first;
        return p1.second > p2.second;
    }
    
};
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
       vector<int> distance(V,INT_MAX);
       distance[s] = 0;
       
       
       priority_queue< pair<int,int>,vector<pair<int,int> >,cmp > pq;
       
       
       pq.push({0,s});//weight ,distace
       
       
       while(!pq.empty()){
           
           auto top = pq.top();
           pq.pop();
           
            for(auto neighbour : adj[top.second])//gives vector as adj[top.second] gives vector of vector
            {
                int nextElement = neighbour[0];
                int nextDistance = neighbour[1];
                
                if(distance[nextElement] > distance[top.second] + nextDistance)
                {
                    distance[nextElement] = distance[top.second] + nextDistance;
                    pq.push({distance[nextElement],nextElement});
                    
                    
                    
                }
                
                
                
                
                
            }
                
                
                
           
            
           
           
           
           
       }
       return distance;
       
       
       
    }
};