//pepcoding use of fermants therom and wilson and fast expontantil
//find n!%p --> p is prime


#include<iostream>
#include<unordered_map>
// #include<bits/stdc++.h>
using namespace std;
#define  ll long long 

ll fast_exp(int a,int b,int M){
if(a == 1) return 1;
if(b == 0) return 1;

long long result = fast_exp(a,b/2,M)%M;
if(b&1){
	return( a%M*(result*result)%M)%M;
}
else
	return (result%M*result%M)%M;



}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,p;
    ll ans;
    cin>>n>>p;

    if(n>=p) 
    	{
    		cout<<0<<endl;
    		return 0;
    	}
			//n < p
    	//wilson ans = p-1
    	ans = p-1;
    	for(int i = n+1;i<=p-1;i++)
    		ans = ans*fast_exp(i,p-2,p);



	cout<<ans%p<<endl;


}
