#include<bits/stdc++.h>
using namespace std;

class DSU{
private:
	vector<int> rank;
	vector<int> size;
	vector<int> parant;
public:
		DSU(int n){
			rank.resize(n+1,0);
			size.resize(n+1,1);
			parant.resize(n);
			for(int i  = 0 ;i<=n;i++)
				parant[i] = i;

		}

		int findUltimateParant(int node){ // takes 0(alpha) == 0(1)
			if(node == parant[node])
				return node;

			return parant[node] = findUltimateParant(parant[node]); // path compression step ,backtracking step

		}


		void unionBySize(int u,int v){
			int uParantOfU = findUltimateParant(u);
			int uParantOfV = findUltimateParant(v);
			if(uParantOfV == uParantOfU)
 				return ; // means if they are already in same component

			if(size[uParantOfU] < size[uParantOfV]){
				parant[u] = v;
				size[v] += size[u];

			}
			else{
				parant[v] = u;
				size[u] += size[v];

			}

		}

		void unionByRank(int u,int v){
			int uParantOfU = findUltimateParant(u);
			int uParantOfV = findUltimateParant(v);
			if(uParantOfV == uParantOfU)
 				return ; // means if they are already in same component

			if(size[uParantOfU] < size[uParantOfV]){
				parant[u] = v;
				rank[v] += 1;

			}
			else{
				parant[v] = u;
				rank[u] += 1;

			}

		}


};

int main(){
DSU dsu(7);
dsu.unionBySize(1,2);
dsu.unionBySize(4,3);
dsu.unionBySize(5,6);
dsu.unionBySize(1,7);

cout<<dsu.findUltimateParant(2)<<" "<<dsu.findUltimateParant(5);




}