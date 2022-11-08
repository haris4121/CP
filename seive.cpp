#include <bits/stdc++.h>
using namespace std;
const int n = 1e7 +5;
vector<bool> isprime(n,true);

int main(){
int n;
cin>>n;
isprime[0] = isprime[1] = false;


for(int i = 2;i<=n;i++){
  if(isprime[i]){
    for(int j = 2*i;j<=n;j++)
      isprime[j] = false;

  }
}


for(int i =1;i<=n;i++)
  cout<<i<< " -> "<<isprime[i]<<endl;




}