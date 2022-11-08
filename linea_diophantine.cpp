#include<bits/stdc++.h>
using namespace std;
#define  ll long long 
pair<int,int> solve(int a,int b,int gcd){
    if(b == 0) return {gcd/a,0};
    
    auto nextlevel = solve(b,a%b,gcd);
    pair<int,int> currlevel;
    currlevel.first  = nextlevel.second;
    currlevel.second = nextlevel.first - a/b*nextlevel.second;
    return currlevel;
    
    
    
}


int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,k;
    cin>>a>>b>>k;
    int gcd = __gcd(a,b);

    auto ans = solve(a,b,gcd);
    cout<<ans.first*k<<" "<<ans.second*k<<endl;



    
	return 0;
}