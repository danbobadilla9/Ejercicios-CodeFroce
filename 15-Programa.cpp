//https://codeforces.com/contest/227/problem/B
//Por fuerza bruta no funciona
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int n, m;
    long long a=0,b=0;
    cin >> m;
    int datos[m+1];
    int v1[m+1];
    int v2[m+1];
    for(int i = 1; i <= m; i++){
        cin >> datos[i];
        v1[datos[i]] = i;
        v2[datos[i]] = m-(i-1);
    }
 
    cin >> m;
    for(int i = 1; i <= m;i++ ){
        int x;
        cin >>x;
        a+=v1[x];
        b+=v2[x];
        
    }
    cout << a <<" "<< b;
    return 0;
}
 
