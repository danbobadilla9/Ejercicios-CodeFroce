//https://codeforces.com/contest/233/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    int n = 0;
    cin >> n;
    int data[n];
    if( n % 2 != 0){
        cout << -1;
    }else{
        for(int i = 1; i < (n+1); i++){
            if( i % 2!= 0){
                data[i-1] = i+1;
            }else{
                data[i-1] = i-1;
            }
            cout << data[i-1] <<" ";
        }
    }
    
}
