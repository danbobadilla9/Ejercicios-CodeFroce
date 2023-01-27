//https://codeforces.com/contest/285/problem/C
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
 
int main() {
    
    int n = 0;
    long long aux = 0;
    cin >> n;
    int numeros[n];
    for(int i = 0; i< n; i++){
        cin >>numeros[i];
    }
    sort(numeros,numeros+n);
    for(int i = 1; i <= n;i++){
        aux+= (long long)abs(i-numeros[i-1]);
    }
    cout << aux<< endl;
}
