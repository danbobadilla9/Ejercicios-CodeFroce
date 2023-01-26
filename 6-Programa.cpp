//https://codeforces.com/contest/266/problem/B
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    
    int n = 0,movimientos = 0;
    string cadena;
    cin >> n >> movimientos;
    cin >> cadena;
    char aux;
    
    
    for(int i = 0; i < movimientos; i++){
        //BBGBG
        for(int j = 1; j< n; j++){
            if( (cadena[j-1] != cadena[j]) && cadena[j-1] == 'B'){
                aux = cadena[j];
                cadena[j] = cadena[j-1];
                cadena[j-1] = aux;
                j++;
            }
        }
    }
    cout << cadena<<endl;
    
    
}
