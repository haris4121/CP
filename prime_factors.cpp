#include <bits/stdc++.h>
using namespace std;

long long max(long long a,long long b){
  if(a>=b) return a;
  return b;
}


long long int largestPrimeFactor(int n){
  map<int,int> mp;
     long long maxi = 1;
       for(long long i = 2;i*i<=n;i++){
           while(n%i == 0){
              mp[i]++;
               n = n/i;
              
           }
           
           
           
           
           
       }
       if(n>1) 
           mp[n]++;
       
       return maxi;
       
       
       
    }