#include <iostream>
#include<bits/stdc++.h>
#define long long ll
using namespace std;

bool cmp(pair<int,int> &p1,pair<int,int> &p2){
	return p1.second < p2.second;
}

int main(){

vector<pair<int,int>> p;

p.push_back({1,3});
p.push_back({5,1});
p.push_back({1,1});
p.push_back({2,9});
sort(p.begin(),p.end(),cmp);
for(int i=0;i<4;i++){
	cout<<p[i].first<< " "<<p[i].second<<endl;
}

}