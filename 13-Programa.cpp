//https://codeforces.com/contest/215/problem/A
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
 
int main() {
    int n =0,conteo = 1,max=0,m=0;
    vector<int> datos;
    cin >> n;
    int numerosA[n]; // Pedal
    for(int i= 0; i < n; i++){
        cin >> numerosA[i];
    }
    cin >> m;
    int numerosB[m]; // Rueda
    for(int i= 0; i < m; i++){
        cin >> numerosB[i];
    }
    
  for(int i = 0; i < n; i++){
        for(int j= 0; j < m; j++){
            if(max == (numerosB[j]/numerosA[i]) && numerosB[j] % numerosA[i] == 0){
                conteo++;
            }else if(numerosB[j] % numerosA[i] == 0 && max < (numerosB[j]/numerosA[i])){
                conteo = 1;
                max = numerosB[j]/numerosA[i];
            }
        }
    }
    
 
    cout << conteo;
}
