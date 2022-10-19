#include <bits/stdc++.h>
#define long long ll
using namespace std;

double setpricision(double num,int n){
	int tnum = num*pow(10,n);
	return (double)tnum/pow(10,n);

}


double ceil(double n){
	int tnum = n;
	if(n - tnum > 0){
		return double(tnum) + 1;
	}
	else{
		return n;
	}
}


int main()
{
	double num;
	cin>>num;
	// cout<<ceil(23);


	cout<<setpricision(33.4422,2);

	return 0;
}