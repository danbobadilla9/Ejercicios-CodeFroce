//https://codeforces.com/contest/327/problem/B
#include <iostream>
#include <algorithm>
using namespace std;
 
 
 
int main()
{
         long long int n,count=0;
         long long int i;
 
         cin>>n;
 
         for(i=1;count<n;i++)
         {
             cout<<n+i<<" ";
             count++;
         }
 
 
         return 0;
}
