#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// #define M 1000000000+7

long long binaryExp(int a,int b){
		int M = 1e9+7;
		if(b == 0) return 1;

		long long res = binaryExp(a,b/2);
		if(b&1){
			return (a*(res*res)%M)%M;

		}
		else{
				return (res*res)%M;
		}


}

int main() {

	int a,b;
	cin>>a;
	cin>>b;
	int ans = binaryExp(339478,737832);
	cout<<ans;

	return 0;
}