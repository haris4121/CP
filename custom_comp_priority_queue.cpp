#include <bits/stdc++.h>
#define long long ll
using namespace std;
class cmp{
	public:
		bool operator()(const pair<int,int> &a,const pair<int,int> &b){
			if(a.first != b.first)
				return a.first<b.first; // max heap
			return a.second < b.second;
			// return a>b;//min heap
		}
};
int main()
{
	
	priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
	pq.push({1,2});
	pq.push({44,22});
	pq.push({1,1});
	while(!pq.empty())	{
		cout<<pq.top().first<<" "<<pq.top().second<<" "<<endl;
		pq.pop();
	}

	return 0;
}